`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:49:14 08/10/2020 
// Design Name: 
// Module Name:    PcAdd 
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
module pcAdd(
        input Reset,
        input CLK,               //时钟
        input [1:0] PCSrc,             //数据选择器输入
        input [31:0] immediate,  //偏移量
        input [25:0] addr,
        input [31:0] curPC,
		  input nextIns,
        output reg[31:0] nextPC  //新指令地址
    );

    initial begin
        nextPC <= 0;
    end

    reg [31:0] pc;

    //always@(negedge CLK or negedge Reset)
	 always@(posedge nextIns)
    begin
        if(!Reset) begin
            nextPC <= 0;
        end
        else if(nextIns==1) begin
            pc <= curPC + 4;
            case(PCSrc)
                2'b00: nextPC <= curPC + 4;//00正常加4
                2'b01: nextPC <= curPC + 4 + immediate * 4;//01加上偏移量，适用于beq等指令
                2'b10: nextPC <= {pc[31:28],addr,2'b00};// 10 j指令 扩充至32位
                2'b11: nextPC <= nextPC;//11就是保持不变
            endcase
        end
    end
endmodule
