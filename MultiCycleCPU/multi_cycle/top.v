module top(
  input clk,
  input rst,
  input [15:0]SW,
  output [3:0]AN,
  output [7:0]SEGMENT,
  output SEGLED_CLK,
  output SEGLED_CLR,
  output SEGLED_DO,
  output SEGLED_PEN
  );
  
  wire [31:0]clk_div;
  wire clkdiv24;
  clkdiv c0(.clk(clk),.rst(1'b0),.clkdiv({clk_div[31:25],clkdiv24,clk_div[23:0]}));
  Mux2_1 mux2_1(.ctrl(SW[12]),.clk(clkdiv24),.sw(SW[5]),.ctrlOut(clk_div[24]));
  
 //显示模块
  reg [15:0] PCShow;
  wire [3:0]sout;  
  reg [31:0]Seg_show;
  
  //sw7作为单步调试
  DispNum m6(.clk(clk), .HEXS(PCShow), .LES(4'b0), .points(4'b0), .RST(1'b0), .AN(AN), .Segment(SEGMENT));
  always@(posedge clk)begin
	 //sw6为0显示低16位，否则是高16位
	 case(SW[6])
    1'b0:PCShow<=outPC[15:0];
	 1'b1:PCShow<=outPC[31:16];
	 endcase
	 case(SW[15:13])
		3'b000:Seg_show<=32'b11111111_11111111_11111111_11111111;
		3'b001:Seg_show<=inst;
		3'b110:Seg_show<=outPC;
		3'b010:Seg_show<=Mdata;
		3'b011:Seg_show<=inPC;
		3'b100:Seg_show<=rst;
		3'b101:Seg_show<=state_out;
		3'b111:Seg_show<=regShow;
		default:Seg_show<=32'b00000000_00000000_00000000_00000000;
	 endcase
	end 
  
  Seg7Device s0(.clkIO(clk_div[3]),.clkScan(clk_div[15:14]),.clkBlink(clk_div[25]),.data(Seg_show),.point(8'h0),.LES(8'h0),.sout(sout));
  assign SEGLED_CLK = sout[3];
  assign SEGLED_DO = sout[2];
  assign SEGLED_PEN = sout[1];
  assign SEGLED_CLR = sout[0];
  
  
  //control signal
  wire MemRead,MemWrite,IorD;
  wire IRWrite, RegWrite, ALUSrcA, PCWrite, PCWriteCond, Branch, zero, overflow; 
  wire [1:0] RegDst, MemtoReg, ALUSrcB, PCSource;
  wire [2:0] ALU_operation;
  //ALU part 
  wire [31:0] A;
  wire [31:0] B;
  wire [31:0] result;
  //REG part
  wire [31:0] inst,Mdata,MDRdata;
  wire [31:0] address;
  wire [31:0] regShow;
  //control unit
  wire [4:0] state_out;
  
  control c1(.clk(clk_div[24]),.rst(1'b0),.MIO_ready(1'b1),.zero(zero),.overflow(overflow),.inst(inst),
	          .MemRead(MemRead),.MemWrite(MemWrite),.IorD(IorD),.CPU_MIO(),.IRWrite(IRWrite),
	          .RegWrite(RegWrite),.ALUSrcA(ALUSrcA),.PCWrite(PCWrite),.PCWriteCond(PCWriteCond),.Branch(Branch),
				 .RegDst(RegDst),.MemtoReg(MemtoReg),.ALUSrcB(ALUSrcB),.PCSource(PCSource),.ALU_operation(ALU_operation),
				 .state_out(state_out)
            );
  //ALU unit
  ALU a0(.Adat(A),.Bdat(B),.ALUop(ALU_operation),.result(result),.zero(zero),.overflow(overflow));
  
  //PC signal
  assign beq = Branch&&zero;
  assign s2 = PCWriteCond && beq;
  assign s3 = PCWrite||s2;
  
  //REG units
  REG32 IR(.clk(clk_div[24]),.rst(1'b0),.CE(IRWrite),.D(Mdata),.Q(inst));
  wire [31:0] ALU_out;
  REG32 ALUOUT(.clk(clk_div[24]),.rst(1'b0),.CE(1'b1),.D(result),.Q(ALU_out));
  REG32 MDR(.clk(clk_div[24]),.rst(1'b0),.CE(1'b1),.D(Mdata),.Q(MDRdata));
  wire [31:0]inPC,outPC;
  REG32 PCR(.clk(clk_div[24]),.rst(1'b0),.CE(s3),.D(inPC),.Q(outPC));
  
  //REGs unit
  	wire [4:0]Wt_addr;
	wire [31:0]Wt_data;
	wire [31:0]rdata_A;
	wire [31:0]rdata_B;
  	Regs R1(.clk(clk_div[24]),.rst(1'b0),.R_addr_A(inst[25:21]),
	        .R_addr_B(inst[20:16]),.Wt_addr(Wt_addr),
			  .Wt_data(Wt_data),.L_S(RegWrite), 
			  .Show_Addr(SW[4:0]),
			  .Reg_Show(regShow),
			  .rdata_A(rdata_A),
			  .rdata_B(rdata_B)
			  );
	/////////////////////////
	//Memory unit
	wire [31:0]addr;
	assign addr=address/4;
	testram r0(.clka(clk_div[24]),.addra(addr),.wea(MemWrite),.dina(B),.douta(Mdata));
	
	//MUX units
	wire [1:0] memtoreg;
	assign memtoreg={1'b0,MemtoReg};
	MUX2_5  m0(.A(inst[20:16]),.B(inst[15:11]),.Ctrl(RegDst),.S(Wt_addr));
	MUX4_32 m1(.I0(ALU_out),.I1(MDRData),.s(memtoreg),.o(Wt_data));
	
	wire[31:0] ext_out,ext_out1;
	extension e0(.a(inst[15:0]),.b(ext_out));
	assign ext_out1={ext_out[29:0],2'b0};
	
	wire [1:0]alusrca;
	assign alusrca={1'b0,ALUSrcA};
	MUX4_32 m2(.I0(outPC),.I1(rdata_A),.s(alusrca),.o(A));
	MUX4_32 m3(.I0(rdata_B),.I1(32'd4),.I2(ext_out),.I3(ext_out1),.s(ALUSrcB),.o(B));
	
	wire [31:0] jump_addr;
	assign jump_addr={outPC[31:28],inst[25:0],2'b00};
	
   wire [1:0] iord;
	assign iord={1'b0,IorD};
	MUX4_32 m4(.I0(outPC),.I1(ALU_out),.s(iord),.o(address));
	MUX4_32 m5(.I0(result),.I1(ALU_out),.I2(jump_addr),.s(PCSource),.o(inPC));
	
	//display
	//assign state=state_out;
	//assign PC=outPC;
	//assign instruction=inst;
endmodule