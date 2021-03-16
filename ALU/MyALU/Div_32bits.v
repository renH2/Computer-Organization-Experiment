`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:03:12 08/15/2020 
// Design Name: 
// Module Name:    Div_32bits 
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
module Div_32bits(
		input[63:0] a, 
		input[31:0] b,
		output reg [63:0] shang,
		output reg [63:0] yu
		);
		
		reg[127:0] cuna;//������λ����ʱ�Ĳ������Լ��洢���ս��
		reg[127:0] cunb; 
		reg[63:0] ta;//��ab��ֵ�ó���
		reg[63:0] tb;
		
always @(a or b)//Ҫ��ѭ���ſ��Խ��и�ֵ ������﷨����
begin
    ta <= a;
    tb <= {32'b00000000_00000000_00000000_00000000,b};
end

integer j;//ѭ������ 
always @(ta or tb)//ģ�����������λ �����ͼ� �����Ͳ��ܼ�����λ
begin
    cuna = {64'b00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000,ta};//��ʼ�������Ȱѳ�ʼ�Ķ����Ž�ȥ
    cunb = {tb,64'b00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000}; 
    for(j=0;j < 64;j = j + 1)//ѭ������ ��λ32����ѭ�����
        begin
            cuna = {cuna[126:0],1'b0};//Ҫ����λ ��ǰ����Ƶ� ÿ����һλ
            if(cuna[127:64] >= tb)//����
                cuna = cuna - cunb + 1'b1;//ֱ�Ӽ� ��������1
            else
				cuna = cuna;//����Ͳ���
        end
 
    shang <= cuna[63:0];//���ǰ32λ������ ��32λ������
    yu <= cuna[127:64];
end
endmodule

