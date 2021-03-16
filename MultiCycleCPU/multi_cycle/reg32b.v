`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:44:40 06/22/2019 
// Design Name: 
// Module Name:    reg32b 
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
module REG32(
	input clk,rst,CE,
	input [31:0] D,
	output reg [31:0] Q
    );
    initial begin
        Q<=0;
	 end	 
	 
	 always @ (posedge clk or posedge rst)
	 begin
		if(rst == 1)
			begin
			Q <= 32'b0;
			end
		else if(CE == 1)
			begin
			Q <= D;
			end
		else
		   Q<=Q;
	end
endmodule
