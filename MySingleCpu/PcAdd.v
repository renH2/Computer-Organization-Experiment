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
        input CLK,               //ʱ��
        input [1:0] PCSrc,             //����ѡ��������
        input [31:0] immediate,  //ƫ����
        input [25:0] addr,
        input [31:0] curPC,
		  input nextIns,
        output reg[31:0] nextPC  //��ָ���ַ
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
                2'b00: nextPC <= curPC + 4;//00������4
                2'b01: nextPC <= curPC + 4 + immediate * 4;//01����ƫ������������beq��ָ��
                2'b10: nextPC <= {pc[31:28],addr,2'b00};// 10 jָ�� ������32λ
                2'b11: nextPC <= nextPC;//11���Ǳ��ֲ���
            endcase
        end
    end
endmodule
