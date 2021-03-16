`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:54:06 08/18/2020 
// Design Name: 
// Module Name:    Div_32bits_flag 
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
module Div_32bits_flag(
		input[63:0] a, 
		input[31:0] b,
		output reg [63:0] shang,
		output reg [63:0] yu
		);
		
		reg[125:0] cuna;//������λ����ʱ�Ĳ������Լ��洢���ս�� ��2
		reg[125:0] cunb; 
		reg[62:0] ta;//��ab��ֵ�ó���
		reg[62:0] tb;
		reg[1:0] flag;
		
always @(a or b)//Ҫ��ѭ���ſ��Խ��и�ֵ ������﷨����
begin
	if(a[63]==1'b1)
		ta <= (~a[62:0])+1;
	else
		ta <= a[62:0];
	if(b[31]==1'b1)
		tb <= {31'b00000000_00000000_00000000_0000000,(~b[30:0])+1};
	else
		tb <= {31'b00000000_00000000_00000000_0000000,b[30:0]};
	 flag={a[63],b[31]};
end

integer j;//ѭ������ 
always @(ta or tb)//ģ�����������λ �����ͼ� �����Ͳ��ܼ�����λ
begin
    cuna = {63'b00000000_00000000_00000000_00000000_00000000_00000000_00000000_0000000,ta};//��ʼ�������Ȱѳ�ʼ�Ķ����Ž�ȥ
    cunb = {tb,63'b00000000_00000000_00000000_00000000_00000000_00000000_00000000_0000000};
    for(j=0;j < 63;j = j + 1)//ѭ������ ��λ32����ѭ�����
        begin
            cuna = {cuna[124:0],1'b0};//Ҫ����λ ��ǰ����Ƶ� ÿ����һλ
            if(cuna[125:63] >= tb)//����
                cuna = cuna - cunb + 1'b1;//ֱ�Ӽ� ��������1
            else
				cuna = cuna;//����Ͳ���
        end
	 case(flag)
		2'b00:begin shang<={1'b0,cuna[62:0]};yu<={1'b0,cuna[125:63]};end
		2'b01:begin shang<={1'b1,cuna[62:0]};yu<={1'b0,cuna[125:63]};end
		2'b10:begin shang<={1'b1,cuna[62:0]};yu<={1'b1,cuna[125:63]};end
		2'b11:begin shang<={1'b0,cuna[62:0]};yu<={1'b1,cuna[125:63]};end
	 endcase
end
 
endmodule