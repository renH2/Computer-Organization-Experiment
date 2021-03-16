`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:11:00 08/20/2020
// Design Name:   FA
// Module Name:   E:/English Ruanjian/ISE/CO/compute/MyALU002/FA_sim.v
// Project Name:  MyALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FA
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FA_sim;

	// Inputs
	reg a;
	reg b;
	reg c0;

	// Outputs
	wire s;
	wire Ca;

	// Instantiate the Unit Under Test (UUT)
	FA uut (
		.a(a), 
		.b(b), 
		.c0(c0), 
		.s(s), 
		.Ca(Ca)
	);

	initial begin
		// Initialize Inputs
		a = 1;
		b = 1;
		c0 = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		a=1;
		b=0;
		c0=0;
        
		// Add stimulus here

	end
      
endmodule

