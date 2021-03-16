`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:48:25 08/10/2020 
// Design Name: 
// Module Name:    Top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Top(
        input CLK,
        input Reset,
		  input [15:0]SW,
		  output [3:0]AN,	//四位断码
		  output [7:0]SEGMENT,
		  output SEGLED_CLK,		//七段数码管的控制
		  output SEGLED_CLR,
		  output SEGLED_DO,
		  output SEGLED_PEN
    );

	 wire [31:0] curPC;
    wire [31:0] nextPC;
    wire [31:0] instruction;
	 wire [5:0] func;
    wire [5:0] op;
    wire [4:0] rs;
    wire [4:0] rt;
    wire [4:0] rd;
    wire [31:0] DB;
    wire [31:0] A;
    wire [31:0] B;
    wire [31:0] result;
    wire [1:0] PCSrc;
    wire zero;
    wire PCWre;       //PC是否更改的信号量，为0时候不更改，否则可以更改
    wire ExtSel;      //立即数扩展的信号量，为0时候为0扩展，否则为符号扩展
    wire InsMemRW;    //指令寄存器的状态操作符，为0的时候写指令寄存器，否则为读指令寄存器
    wire RegDst;    //写寄存器组寄存器的地址，为0的时候地址来自rt，为1的时候地址来自rd
    wire RegWre;      //寄存器组写使能，为1的时候可写
    wire ALUSrcA;     //控制ALU数据A的选择端的输入，为0的时候，来自寄存器堆data1输出，为1的时候来自移位数sa
    wire ALUSrcB;     //控制ALU数据B的选择端的输入，为0的时候，来自寄存器堆data2输出，为1时候来自扩展过的立即数
    wire [2:0]ALUOp;  //ALU 8种运算功能选择(000-111)
    wire mRD;         //数据存储器读控制信号，为0读
    wire mWR;         //数据存储器写控制信号，为0写
    wire DBDataSrc;    //数据保存的选择端，为0来自ALU运算结果的输出，为1来自数据寄存器（Data MEM）的输出  
	 
    wire [31:0] extend;
    wire [31:0] DataOut;
    wire[4:0] sa;
    wire[15:0] immediate;
    wire[25:0] addr;
	 wire [31:0] clk_div;
	 wire [3:0]sout;
	 wire [31:0]RegChooseOut;
	 
	 reg [31:0]Seg_show;
	 reg [15:0]PCShow;
	 
	 

	 wire Next_Ins,Reset;
	 clkdiv m2(.clk(CLK),.rst(1'b0),.clkdiv(clk_div));
	 DispNum m6(.clk(CLK), .HEXS(PCShow), .LES(4'b0), .points(4'b0), .RST(1'b0), .AN(AN), .Segment(SEGMENT));
	 
	 always@(negedge CLK or negedge Reset)begin
	 //sw6为0显示低16位，否则是高16位
	 case(SW[6])
		1'b0:PCShow<=curPC[15:0];
		1'b1:PCShow<=curPC[31:16];
	 endcase
	 case(SW[15:13])
		3'b000:Seg_show<=32'b11111111_11111111_11111111_11111111;
		3'b001:Seg_show<=instruction;
		3'b110:Seg_show<=DataOut;
		3'b111:Seg_show<=RegChooseOut;
		default:Seg_show<=32'b00000000_00000000_00000000_00000000;
	 endcase
	 end
	 
    Seg7Device s0(.clkIO(clk_div[3]),.clkScan(clk_div[15:14]),.clkBlink(clk_div[25]),.data(Seg_show),.point(8'h0),.LES(8'h0),.sout(sout));
	 assign SEGLED_CLK = sout[3];
    assign SEGLED_DO = sout[2];
    assign SEGLED_PEN = sout[1];
    assign SEGLED_CLR = sout[0];
	 
	 //显示当前的16位pc值，四个小数码管显示
    pcAdd pcAdd(.Reset(Reset),
                .CLK(CLK),
                .PCSrc(PCSrc),
                .immediate(extend),
                .addr(addr),
                .curPC(curPC),
                .nextPC(nextPC),
					 .nextIns(SW[5]));

    PC pc(.CLK(CLK),
          .Reset(Reset),
          .PCWre(PCWre),
          .PCSrc(PCSrc),
          .nextPC(nextPC),
          .curPC(curPC));

    InsMEM InsMEM(.IAddr(curPC), 
                .InsMemRW(InsMemRW), 
                .IDataOut(instruction));

    InstructionCut InstructionCut(.instruction(instruction),
                                  .op(op),
                                  .rs(rs),
                                  .rt(rt),
                                  .rd(rd),
                                  .sa(sa),
                                  .immediate(immediate),
                                  .addr(addr),
											 .func(func)
											 );

    ControlUnit ControlUnit(.zero(zero),
                            .op(op),
									 .func(func),
                            .PCWre(PCWre),
                            .ExtSel(ExtSel),
                            .InsMemRW(InsMemRW),
                            .RegDst(RegDst),
                            .RegWre(RegWre),
                            .ALUSrcA(ALUSrcA),
                            .ALUSrcB(ALUSrcB),
                            .PCSrc(PCSrc),
                            .ALUOp(ALUOp),
                            .mRD(mRD),
                            .mWR(mWR),
                            .DBDataSrc(DBDataSrc));

    RegisterFile RegisterFile(.CLK(CLK),
                              .ReadReg1(rs),
                              .ReadReg2(rt),
                              .WriteData(DB),
                              .WriteReg(RegDst ? rd : rt),
                              .RegWre(RegWre),
                              .ReadData1(A),
                              .ReadData2(B),
										.RegChoose(SW[4:0]),
										.RegChooseOut(RegChooseOut)
										);

    ALU alu(.ALUSrcA(ALUSrcA),
            .ALUSrcB(ALUSrcB),
            .ReadData1(A),
            .ReadData2(B),
            .sa(sa),
            .extend(extend),
            .ALUOp(ALUOp),
            .zero(zero),
            .result(result));

    DataMEM DataMEM(.mRD(mRD),
                    .mWR(mWR),
                    .CLK(CLK),
                    .DBDataSrc(DBDataSrc),
                    .DAddr(result),
                    .DataIn(B),
                    .DataOut(DataOut),
                    .DB(DB));

    SignZeroExtend SignZeroExtend(.immediate(immediate),
                                  .ExtSel(ExtSel),
                                  .extendImmediate(extend));

endmodule
