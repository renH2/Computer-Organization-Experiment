`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:52:54 08/10/2020 
// Design Name: 
// Module Name:    PC 
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
module PC(
       input CLK,               //ʱ��
       input Reset,             //�Ƿ����õ�ַ��0-��ʼ��PC����������µ�ַ
       input PCWre,             //�Ƿ�����µĵ�ַ��0-�����ģ�1-���Ը���
       input [1:0] PCSrc,             //����ѡ��������
       input [31:0] nextPC,  //��ָ���ַ
       output reg[31:0] curPC //��ǰָ��ĵ�ַ
    );

    initial begin
        curPC <= 0;
    end

    always@(posedge CLK or negedge Reset)
    begin
        if(!Reset) // Reset == 0, PC = 0
            begin
                curPC <= 0;//���ð�ť
            end
        else 
            begin
                if(PCWre) // PCWre == 1 ���Ըı��ʱ��
                    begin 
                        curPC <= nextPC;//�ı���µĵ�ַ
                    end
                else    // PCWre == 0, halt ���ܸı��ͣ��
                    begin
                        curPC <= curPC;
                    end
            end
    end
endmodule
