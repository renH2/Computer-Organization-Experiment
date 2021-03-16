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
        input zero,         //ALU运算结果是否为0，为0时候为1
        input [5:0] op,     //指令的操作码
		  input [5:0] func,	 //后面六位操作func码，根据这个判断1是哪一条R指令
        output reg PCWre,       //PC是否更改的信号量，为0时候不更改，否则可以更改
        output reg ExtSel,      //立即数扩展的信号量，为0时候为0扩展，否则为符号扩展
        output reg InsMemRW,    //指令寄存器的状态操作符，为0的时候写指令寄存器，否则为读指令寄存器
        output reg RegDst,      //写寄存器组寄存器的地址，为0的时候地址来自rt，为1的时候地址来自rd
        output reg RegWre,      //寄存器组写使能，为1的时候可写
        output reg ALUSrcA,     //控制ALU数据A的选择端的输入，为0的时候，来自寄存器堆data1输出，为1的时候来自移位数sa
        output reg ALUSrcB,     //控制ALU数据B的选择端的输入，为0的时候，来自寄存器堆data2输出，为1时候来自扩展过的立即数
        output reg [1:0]PCSrc,  //获取下一个pc的地址的数据选择器的选择端输入
        output reg [2:0]ALUOp,  //ALU 8种运算功能选择(000-111)
        output reg mRD,         //数据存储器读控制信号，为0读
        output reg mWR,         //数据存储器写控制信号，为0写
        output reg DBDataSrc    //数据保存的选择端，为0来自ALU运算结果的输出，为1来自数据寄存器（Data MEM）的输出        
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
