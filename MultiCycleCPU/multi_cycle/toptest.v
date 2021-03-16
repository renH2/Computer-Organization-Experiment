`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:44:49 08/13/2020
// Design Name:   top
// Module Name:   D:/multi_cycle/toptest.v
// Project Name:  multi_cycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module toptest;

	// Inputs
	reg clk;
	reg rst;
	reg [15:0] SW;

	// Outputs
	wire [3:0] AN;
	wire [7:0] SEGMENT;
	wire SEGLED_CLK;
	wire SEGLED_CLR;
	wire SEGLED_DO;
	wire SEGLED_PEN;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst(rst), 
		.SW(SW), 
		.AN(AN), 
		.SEGMENT(SEGMENT), 
		.SEGLED_CLK(SEGLED_CLK), 
		.SEGLED_CLR(SEGLED_CLR), 
		.SEGLED_DO(SEGLED_DO), 
		.SEGLED_PEN(SEGLED_PEN)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst =0;
		SW = 0;
		// Wait 100 ns for global reset to finish
		#5;
		rst=1;
		#5;
		rst=0;
		
		// Add stimulus here
		forever #5
      begin // 产生时钟信号，周期为50s
         clk = !clk;
      end
	end
	//always #20 clk<=~clk;
      
endmodule

