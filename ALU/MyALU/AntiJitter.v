`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:59:03 01/10/2019 
// Design Name: 
// Module Name:    AntiJitter 
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
module AntiJitter(
	input clk, input I, output reg O
);

	parameter WIDTH = 20;//显示宽度为1
	reg [WIDTH-1:0] cnt = 0;

	always @ (posedge clk)
	begin
		if(I)//如果程序运行
		begin
			if(&cnt)//如果重置按钮没有按下
				O <= 1'b1;
			else
				cnt <= cnt + 1'b1;
		end
		else
		begin
			if(|cnt)
				cnt <= cnt - 1'b1;
			else
				O <= 1'b0;
		end
	end

endmodule