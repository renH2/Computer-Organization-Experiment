module ALU(
  input clk,
  input rst,
  input [31:0] A,
  input [31:0] B,
  input [31:0] AHigh,
  input [3:0] mode,
  input [2:0]flag,//flag为1就是有符号的数乘除
  //other input & output (including flag)
  output reg [63:0] ALU_out,//64'b_output
  output reg [4:0] flagOut
  );

wire [31:0] And;
wire [31:0] Or;
wire [31:0] NotA;
wire [31:0] NotB;
wire [31:0] Xor;
wire [31:0] Slt;

wire [31:0] ShiftL;
wire [31:0] ShiftR;
wire [31:0] ShiftAR;
wire [31:0] ShiftC;

wire [31:0] Add;
wire [31:0] Sub;
wire [63:0] Multiply;
wire [63:0] Shang1,Shang2;
wire [63:0] Yushu1,Yushu2;

wire [31:0] Float_Sub;
wire [31:0] Float_Add;
wire [31:0] Float_Multiply;
wire [31:0] Float_Shang;
wire [1:0]CFs,OFs,SFs,PFs,ZFs;

wire [1:0] OF;

	reg [63:0] C_mem[1:0];//可以从txt里面读取八个十六进制数，任意用按键进行选择
	
	initial begin
        $readmemb("C_Mem.txt", C_mem);
    end
	 
	reg [63:0]Div;
	always@(*) begin
			Div<=C_mem[0];
	end
	


//OR AND NOT NOR
assign And=A&B;
assign Or=A|B;
assign Xor=A^B;
assign NotA=~A;
assign NotB=~B;
//SHIFT
assign ShiftR=A>>4;//逻辑右移
assign ShiftL=A<<4;//逻辑左移
assign ShiftAR={{4{A[31]}},A[31:4]};//算术右移
assign ShiftC={A[3:0],A[31:4]};
FA_32bits a0(
  .A(A), 
  .B(B),
  .Ctrl(1'b0),  
  .s(Add),
  .CF(CFs[0]),.OF(OFs[0]),.SF(SFs[0]),.PF(PFs[0]),.ZF(ZFs[0]));
//SUB
FA_32bits a1(
  .A(A), 
  .B(B),
  .Ctrl(1'b1),  
  .s(Sub),
  .CF(CFs[1]),.OF(OFs[1]),.SF(SFs[1]),.PF(PFs[1]),.ZF(ZFs[1]));
//MUL
Mul32 m0(	
  .clk(clk),
  .Ctrl(flag[2]),
  .A(A), 
  .B(B),
  .Mul_Out(Multiply)
    );
//DIV
Div_32bits d0(
  .a(Div),   
  .b(B),
  .shang(Shang1),  
  .yu(Yushu1));  
  
Div_32bits_flag d1(
	.a(Div),
	.b(B),
	.shang(Shang2),
	.yu(Yushu2)
	);
//FADD
float_add f0(
  .ix(A),
  .iy(B),
  .clk(clk),
  .oz(Float_Add)
  );
//FSUB
float_sub f1(
  .ix(A),
  .iy(B),
  .clk(clk),
  .oz(Float_Sub)
  );
//FMUL
float_mul f2(
  .ix(A),
  .iy(B),
  .clk(clk),
  .rst(rst),
  .oz(Float_Multiply),
  .Yichu(OF[0])
  );
//FDIV
float_div f3(
  .ix(A),
  .iy(B),
  .clk(clk),
  .rst(rst),
  .oz(Float_Shang),
  .Yichu(OF[1])
  );

always @*
  begin
  //(AB:2) + (int:5+1+4) + (float:4)  = 16
    case (mode)
      4'b0000: ALU_out <= {32'b0,A};
      4'b0001: ALU_out <= {32'b0,B};
      //Logic Operation
      4'b0010: ALU_out <= {32'b0,And};
      4'b0011: ALU_out <= {32'b0,Or};
      4'b0100: ALU_out <= {NotB,NotA};
      4'b0101: ALU_out <= {32'b0,Xor};
		//Shift Operation
      4'b0110: ALU_out <= {ShiftL,ShiftR};
      4'b0111: ALU_out <= {ShiftC,ShiftAR};
      //Int Operation
      4'b1000: begin
		   ALU_out <= {32'b0,Add};
			//符号SF、进位CF、溢出OF、零标志ZF、奇偶PF
			//进位 溢出 符号(为1说明a比b小，减法) 奇偶 零标志
			flagOut<={CFs[0],OFs[0],SFs[0],PFs[0],ZFs[0]};
			end
      4'b1001: begin
		   ALU_out <= {32'b0,Sub};
			flagOut<={CFs[1],OFs[1],SFs[1],PFs[1],ZFs[1]};
			end
      4'b1010: ALU_out <= {Multiply};
      4'b1011: begin
			if(flag==3'b000)
				ALU_out <= Shang1;
			else if(flag==3'b001)
				ALU_out <= Yushu1;
			else if(flag==3'b100)
				ALU_out <= Shang2;
			else if(flag==3'b101)
				ALU_out <= Yushu2;
			else if(flag[1:0]==2'b10)
				ALU_out <= Div;
				end
      //Float Operation
      4'b1100: ALU_out <= {32'b0,Float_Add};
      4'b1101: ALU_out <= {32'b0,Float_Sub};
      4'b1110: ALU_out <= {32'b0,Float_Multiply};
      4'b1111: ALU_out <= {30'b0,OF,Float_Shang};
   endcase
  end


endmodule
