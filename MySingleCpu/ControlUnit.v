`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:16:31 08/10/2020 
// Design Name: 
// Module Name:    ControlUnit 
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
//Control Unit
module ControlUnit(
        input zero,         //ALU�������Ƿ�Ϊ0��Ϊ0ʱ��Ϊ1
        input [5:0] op,     //ָ��Ĳ�����
		  input [5:0] func,	 //������λ����func�룬��������ж�1����һ��Rָ��
        output reg PCWre,       //PC�Ƿ���ĵ��ź�����Ϊ0ʱ�򲻸��ģ�������Ը���
        output reg ExtSel,      //��������չ���ź�����Ϊ0ʱ��Ϊ0��չ������Ϊ������չ
        output reg InsMemRW,    //ָ��Ĵ�����״̬��������Ϊ0��ʱ��дָ��Ĵ���������Ϊ��ָ��Ĵ���
        output reg RegDst,      //д�Ĵ�����Ĵ����ĵ�ַ��Ϊ0��ʱ���ַ����rt��Ϊ1��ʱ���ַ����rd
        output reg RegWre,      //�Ĵ�����дʹ�ܣ�Ϊ1��ʱ���д
        output reg ALUSrcA,     //����ALU����A��ѡ��˵����룬Ϊ0��ʱ�����ԼĴ�����data1�����Ϊ1��ʱ��������λ��sa
        output reg ALUSrcB,     //����ALU����B��ѡ��˵����룬Ϊ0��ʱ�����ԼĴ�����data2�����Ϊ1ʱ��������չ����������
        output reg [1:0]PCSrc,  //��ȡ��һ��pc�ĵ�ַ������ѡ������ѡ�������
        output reg [2:0]ALUOp,  //ALU 8�����㹦��ѡ��(000-111)
        output reg mRD,         //���ݴ洢���������źţ�Ϊ0��
        output reg mWR,         //���ݴ洢��д�����źţ�Ϊ0д
        output reg DBDataSrc    //���ݱ����ѡ��ˣ�Ϊ0����ALU�������������Ϊ1�������ݼĴ�����Data MEM�������        
    );

    initial begin
        InsMemRW = 1;
        PCWre = 1;
        mRD = 0;
        mWR = 0;
        DBDataSrc = 0;
    end

    always@(op or zero) 
    begin
        PCWre = (op == 6'b111111) ? 0 : 1;   //halt
        InsMemRW = (op == 6'b111111) ? 0 : 1;    
        mWR = (op == 6'b100110) ? 1 : 0;     //sw
        mRD = (op == 6'b100111) ? 1 : 0;     //lw
        DBDataSrc = (op == 6'b100111) ? 1 : 0;

        case(op)
            //addi
            6'b001000:
                begin
                    ExtSel = 1;
                    RegDst = 0;
                    RegWre = 1;
                    ALUSrcA = 0;
                    ALUSrcB = 1;
                    PCSrc = 2'b00;
                    ALUOp = 3'b000;
                end
            //ori
            6'b001101:
                begin
                    ExtSel = 1;
                    RegDst = 0;
                    RegWre = 1;
                    ALUSrcA = 0;
                    ALUSrcB = 1;
                    PCSrc = 2'b00;
                    ALUOp = 3'b011;
                end        
            6'b000000:
                begin
						if(func==6'b100000) begin //add
                    ExtSel = 0;
                    RegDst = 1;
                    RegWre = 1;
                    ALUSrcA = 0;
                    ALUSrcB = 0;
                    PCSrc = 2'b00;
                    ALUOp = 3'b000;
						 end
						else if(func==6'b100010)begin//sub
						  ExtSel = 1;
                    RegDst = 1;
                    RegWre = 1;
                    ALUSrcA = 0;
                    ALUSrcB = 0;
                    PCSrc = 2'b00;
                    ALUOp = 3'b001;
						end
						else if(func==6'b100100)begin//and
						  ExtSel = 0;
                    RegDst = 1;
                    RegWre = 1;
                    ALUSrcA = 0;
                    ALUSrcB = 0;
                    PCSrc = 2'b00;
                    ALUOp = 3'b100;
						end
						else if(func==6'b100101)begin//or
						  ExtSel = 0;
                    RegDst = 1;
                    RegWre = 1;
                    ALUSrcA = 0;
                    ALUSrcB = 0;
                    PCSrc = 2'b00;
                    ALUOp = 3'b011;
						end
						else if(func==6'b000000)begin//sll
						  ExtSel = 0;
                    RegDst = 1;
                    RegWre = 1;
                    ALUSrcA = 1;
                    ALUSrcB = 0;
                    PCSrc = 2'b00;
                    ALUOp = 3'b010;
						end
					
                end
            //bne
            6'b000101:
                begin
                    ExtSel = 1;
                    RegDst = 0;
                    RegWre = 0;
                    ALUSrcA = 0;
                    ALUSrcB = 0;
                    PCSrc = zero ? 2'b00 : 2'b01;
                    ALUOp = 3'b001;
                end
            //slti
            6'b001010:
                begin
                    ExtSel = 1;
                    RegDst = 0;
                    RegWre = 1;
                    ALUSrcA = 0;
                    ALUSrcB = 1;
                    PCSrc = 2'b00;
                    ALUOp = 3'b101;
                end
            //beq
            6'b000100:
                begin
                    ExtSel = 1;
                    RegDst = 0;
                    RegWre = 0;
                    ALUSrcA = 0;
                    ALUSrcB = 0;
                    PCSrc = zero ? 2'b01 : 2'b00;
                    ALUOp = 3'b001;
                end
            //sw
            6'b101011:
                begin
                    ExtSel = 1;
                    RegDst = 0;
                    RegWre = 0;
                    ALUSrcA = 0;
                    ALUSrcB = 1;
                    PCSrc = 2'b00;
                    ALUOp = 3'b000;
                end
            //lw
            6'b100011:
                begin
                    ExtSel = 1;
                    RegDst = 0;
                    RegWre = 1;
                    ALUSrcA = 0;
                    ALUSrcB = 1;
                    PCSrc = 2'b00;
                    ALUOp = 3'b000;
                end
            //j
            6'b000010:
                begin
                    ExtSel = 0;
                    RegDst = 0;
                    RegWre = 0;
                    ALUSrcA = 0;
                    ALUSrcB = 0;
                    PCSrc = 2'b10;
                    ALUOp = 3'b000;
                end
            //halt
            6'b111111:
                begin
                    ExtSel = 0;
                    RegDst = 0;
                    RegWre = 0;
                    ALUSrcA = 0;
                    ALUSrcB = 0;
                    PCSrc = 2'b11;
                    ALUOp = 3'b000;
                end
        endcase
    end
endmodule
