`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:39:47 06/30/2020
// Design Name:   ALU
// Module Name:   D:/multi_cycle/ALUtest.v
// Project Name:  multi_cycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALUtest;

	// Inputs
	reg [31:0] Adat;
	reg [31:0] Bdat;
	reg [2:0] ALUop;

	// Outputs
	wire [31:0] result;
	wire zero;
	wire overflow;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.Adat(Adat), 
		.Bdat(Bdat), 
		.ALUop(ALUop), 
		.result(result), 
		.zero(zero), 
		.overflow(overflow)
	);

	initial begin
		// Initialize Inputs
		Adat = 0;
		Bdat = 0;
		ALUop = 0;

		// Wait 100 ns for global reset to finish
		#100;
      Adat=5;
		Bdat=2;
		ALUop=3'b000;
		#50;
		Adat=5;
		Bdat=2;
		ALUop=3'b001;
		#50;
		Adat=0;
		Bdat=4;
		ALUop=3'b010;
		#50;
		Adat=5;
		Bdat=7;
		ALUop=3'b011;
		#50;
		Adat=5;
		Bdat=7;
		ALUop=3'b110;
		#50;
		Adat=5;
		Bdat=7;
		ALUop=3'b100;
		#50;
		Adat=5;
		Bdat=7;
		ALUop=3'b111;
		#50;
		Adat=5;
		Bdat=7;
		ALUop=3'b111;
		#50; 

	end
      
endmodule

