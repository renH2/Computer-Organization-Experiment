`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:35:35 08/13/2020
// Design Name:   extension
// Module Name:   D:/multi_cycle/xsax.v
// Project Name:  multi_cycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: extension
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module xsax;

	// Inputs
	reg [15:0] a;

	// Outputs
	wire [31:0] b;

	// Instantiate the Unit Under Test (UUT)
	extension uut (
		.a(a), 
		.b(b)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here
		a=16'hFFFF;
		#100;
		a=16'h0000;
	end
      
endmodule

