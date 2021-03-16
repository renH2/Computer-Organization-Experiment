`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:36:58 08/14/2020
// Design Name:   MUX4_32
// Module Name:   D:/multi_cycle/d.v
// Project Name:  multi_cycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MUX4_32
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module d;

	// Inputs
	reg [1:0] s;
	reg [31:0] I0;
	reg [31:0] I1;
	reg [31:0] I2;
	reg [31:0] I3;

	// Outputs
	wire [31:0] o;

	// Instantiate the Unit Under Test (UUT)
	MUX4_32 uut (
		.s(s), 
		.I0(I0), 
		.I1(I1), 
		.I2(I2), 
		.I3(I3), 
		.o(o)
	);

	initial begin
		// Initialize Inputs
		s = 0;
		I0 = 0;
		I1 = 1;
		I2 = 0;
		I3 = 0;
		// Wait 100 ns for global reset to finish
		#100;
		s=1;
		#100;
        
		// Add stimulus here

	end
      
endmodule

