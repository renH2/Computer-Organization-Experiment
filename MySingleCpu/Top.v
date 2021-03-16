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
		  output [3:0]AN,	//��λ����
		  output [7:0]SEGMENT,
		  output SEGLED_CLK,		//�߶�����ܵĿ���
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
    wire PCWre;       //PC�Ƿ���ĵ��ź�����Ϊ0ʱ�򲻸��ģ�������Ը���
    wire ExtSel;      //��������չ���ź�����Ϊ0ʱ��Ϊ0��չ������Ϊ������չ
    wire InsMemRW;    //ָ��Ĵ�����״̬��������Ϊ0��ʱ��дָ��Ĵ���������Ϊ��ָ��Ĵ���
    wire RegDst;    //д�Ĵ�����Ĵ����ĵ�ַ��Ϊ0��ʱ���ַ����rt��Ϊ1��ʱ���ַ����rd
    wire RegWre;      //�Ĵ�����дʹ�ܣ�Ϊ1��ʱ���д
    wire ALUSrcA;     //����ALU����A��ѡ��˵����룬Ϊ0��ʱ�����ԼĴ�����data1�����Ϊ1��ʱ��������λ��sa
    wire ALUSrcB;     //����ALU����B��ѡ��˵����룬Ϊ0��ʱ�����ԼĴ�����data2�����Ϊ1ʱ��������չ����������
    wire [2:0]ALUOp;  //ALU 8�����㹦��ѡ��(000-111)
    wire mRD;         //���ݴ洢���������źţ�Ϊ0��
    wire mWR;         //���ݴ洢��д�����źţ�Ϊ0д
    wire DBDataSrc;    //���ݱ����ѡ��ˣ�Ϊ0����ALU�������������Ϊ1�������ݼĴ�����Data MEM�������  
	 
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
	 //sw6Ϊ0��ʾ��16λ�������Ǹ�16λ
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
	 
	 //��ʾ��ǰ��16λpcֵ���ĸ�С�������ʾ
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
