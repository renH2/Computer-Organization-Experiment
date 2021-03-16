`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:48:57 01/03/2019 
// Design Name: 
// Module Name:    clk_5s 
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
module clk_5s(clk,clk_5s);
input wire clk;
output reg clk_5s;
reg[31:0] cnt;
always@(posedge clk) begin
	if(cnt<250_000_000) begin
		cnt <=cnt+1;
	end
	else begin
		cnt<=0;
		clk_5s<=~clk_5s;
	end
end
endmodule

