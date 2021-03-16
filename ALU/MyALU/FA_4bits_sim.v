`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:31:24 08/20/2020
// Design Name:   FA_4bits
// Module Name:   E:/English Ruanjian/ISE/CO/compute/MyALU002/FA_4bits_sim.v
// Project Name:  MyALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FA_4bits
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FA_4bits_sim;

	// Inputs
	reg Ctrl;
	reg [3:0] A;
	reg [3:0] B;
	reg C0;

	// Outputs
	wire [3:0] s;
	wire OF;
	wire CF;
	wire ZF;
	wire SF;
	wire PF;

	// Instantiate the Unit Under Test (UUT)
	FA_4bits uut (
		.Ctrl(Ctrl), 
		.A(A), 
		.B(B), 
		.C0(C0), 
		.s(s), 
		.OF(OF), 
		.CF(CF), 
		.ZF(ZF), 
		.SF(SF), 
		.PF(PF)
	);

	initial begin
		Ctrl = 1;
		A = 4'b1100;
		B = 4'b1011;
		C0 = 1;

		// Wait 100 ns for global reset to finish
		#100;
		A=4'b0000;
		B=4'b0000;
		C0=0;
		#100;
		Ctrl=1;
		A=4'b0010;
		B=4'b1100;
        
		// Add stimulus here

	end
      
endmodule

