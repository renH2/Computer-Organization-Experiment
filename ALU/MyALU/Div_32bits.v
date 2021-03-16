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
		
		reg[127:0] cuna;//进行移位操作时的操作数以及存储最终结果
		reg[127:0] cunb; 
		reg[63:0] ta;//把ab的值拿出来
		reg[63:0] tb;
		
always @(a or b)//要有循环才可以进行赋值 否则会语法错误
begin
    ta <= a;
    tb <= {32'b00000000_00000000_00000000_00000000,b};
end

integer j;//循环变量 
always @(ta or tb)//模拟除法进行移位 够除就减 不够就不管继续移位
begin
    cuna = {64'b00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000,ta};//初始操作，先把初始的东西放进去
    cunb = {tb,64'b00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000}; 
    for(j=0;j < 64;j = j + 1)//循环进行 移位32次则循环完成
        begin
            cuna = {cuna[126:0],1'b0};//要有移位 把前面的移掉 每次移一位
            if(cuna[127:64] >= tb)//够除
                cuna = cuna - cunb + 1'b1;//直接减 而且商是1
            else
				cuna = cuna;//否则就不动
        end
 
    shang <= cuna[63:0];//最后前32位是余数 后32位就是商
    yu <= cuna[127:64];
end
endmodule

