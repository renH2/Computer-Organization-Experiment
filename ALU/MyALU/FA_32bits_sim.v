`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:32:09 08/20/2020
// Design Name:   FA_32bits
// Module Name:   E:/English Ruanjian/ISE/CO/compute/MyALU002/FA_32bits_sim.v
// Project Name:  MyALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FA_32bits
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FA_32bits_sim;

	// Inputs
	reg Ctrl;
	reg [31:0] A;
	reg [31:0] B;

	// Outputs
	wire [31:0] s;
	wire OF;
	wire CF;
	wire ZF;
	wire SF;
	wire PF;

	// Instantiate the Unit Under Test (UUT)
	FA_32bits uut (
		.Ctrl(Ctrl), 
		.A(A), 
		.B(B), 
		.s(s), 
		.OF(OF), 
		.CF(CF), 
		.ZF(ZF), 
		.SF(SF), 
		.PF(PF)
	);

	initial begin
		// Initialize Inputs
		Ctrl = 0;
		A = 32'b01001011110111100101010100010101;
		B = 32'b11010111010001010001110101010010;

		// Wait 100 ns for global reset to finish
		#100;
		Ctrl=1;
        
		// Add stimulus here

	end
      
endmodule

