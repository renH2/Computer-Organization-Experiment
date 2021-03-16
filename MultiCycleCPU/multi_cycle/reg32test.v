`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:44:43 08/13/2020
// Design Name:   REG32
// Module Name:   D:/multi_cycle/reg32test.v
// Project Name:  multi_cycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: REG32
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module reg32test;

	// Inputs
	reg clk;
	reg rst;
	reg CE;
	reg [31:0] D;

	// Outputs
	wire [31:0] Q;

	// Instantiate the Unit Under Test (UUT)
	REG32 uut (
		.clk(clk), 
		.rst(rst), 
		.CE(CE), 
		.D(D), 
		.Q(Q)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		CE = 0;
		D = 0;
	   // Wait 100 ns for global reset to finish
		#100;
		CE=1;
		D=7;
		#100;
		CE=0;
		D=2;
		#100;
		CE=1;
	end
	always #20 clk<=~clk;
      
endmodule

