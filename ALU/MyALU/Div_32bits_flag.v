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
		
		reg[125:0] cuna;//进行移位操作时的操作数以及存储最终结果 少2
		reg[125:0] cunb; 
		reg[62:0] ta;//把ab的值拿出来
		reg[62:0] tb;
		reg[1:0] flag;
		
always @(a or b)//要有循环才可以进行赋值 否则会语法错误
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

integer j;//循环变量 
always @(ta or tb)//模拟除法进行移位 够除就减 不够就不管继续移位
begin
    cuna = {63'b00000000_00000000_00000000_00000000_00000000_00000000_00000000_0000000,ta};//初始操作，先把初始的东西放进去
    cunb = {tb,63'b00000000_00000000_00000000_00000000_00000000_00000000_00000000_0000000};
    for(j=0;j < 63;j = j + 1)//循环进行 移位32次则循环完成
        begin
            cuna = {cuna[124:0],1'b0};//要有移位 把前面的移掉 每次移一位
            if(cuna[125:63] >= tb)//够除
                cuna = cuna - cunb + 1'b1;//直接减 而且商是1
            else
				cuna = cuna;//否则就不动
        end
	 case(flag)
		2'b00:begin shang<={1'b0,cuna[62:0]};yu<={1'b0,cuna[125:63]};end
		2'b01:begin shang<={1'b1,cuna[62:0]};yu<={1'b0,cuna[125:63]};end
		2'b10:begin shang<={1'b1,cuna[62:0]};yu<={1'b1,cuna[125:63]};end
		2'b11:begin shang<={1'b0,cuna[62:0]};yu<={1'b1,cuna[125:63]};end
	 endcase
end
 
endmodule