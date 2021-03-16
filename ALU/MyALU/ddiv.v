`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:40:34 08/18/2020
// Design Name:   float_div
// Module Name:   D:/MyALU002/ddiv.v
// Project Name:  MyALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: float_div
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ddiv;

	// Inputs
	reg [31:0] ix;
	reg [31:0] iy;
	reg clk;
	reg rst;

	// Outputs
	wire [31:0] oz;
	wire [1:0] Yichu;

	// Instantiate the Unit Under Test (UUT)
	float_div uut (
		.ix(ix), 
		.iy(iy), 
		.clk(clk), 
		.rst(rst), 
		.oz(oz), 
		.Yichu(Yichu)
	);

	initial begin
		// Initialize Inputs
		ix = 0;
		iy = 0;
		clk = 0;
		rst = 0;
		// Wait 100 ns for global reset to finish
		#100;
	   //1.6
		ix = 32'h3FCCCCCC;
		//1.2
		iy = 32'h3F999999;
	end
	always #25 clk=~clk;
      
endmodule

