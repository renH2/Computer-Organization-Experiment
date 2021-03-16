`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:23:40 08/15/2020
// Design Name:   ALU
// Module Name:   E:/English Ruanjian/ISE/CO/compute/MyALU/MyALU002/ALU_sim.v
// Project Name:  MyALU
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

module ALU_sim;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] A;
	reg [31:0] B;
	reg [31:0] AHigh;
	reg [3:0] mode;

	// Outputs
	wire [63:0] ALU_out;
	wire cf;
	wire sf;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.clk(clk), 
		.rst(rst), 
		.A(A), 
		.B(B), 
		.AHigh(AHigh), 
		.mode(mode), 
		.ALU_out(ALU_out), 
		.cf(cf), 
		.sf(sf)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		//1.6
		A = 32'h3FCCCCCC;
		//A=32'b01111111100000000000000000000000;
		//A=32'hFFFFFFFF;
		//A=32'h0;
		//A=32'h7F011111;
		//1.2
		//B=32'h00811111;
		B = 32'h3F999999;
		AHigh = 0;
		mode = 0;
		// Wait 100 ns for global reset to finish
		#50;
		mode=0;
		#50;
		mode=1;
		#50;
		mode=2;
		#50;
		mode=3;
		#50;
		mode=4;
		#50;
		mode=5;
		#50;
		mode=6;
		#50;
		mode=7;
		#50;
		mode=8;
		#50;
		mode=9;
		#50;
		mode=10;
		#50;
		mode=11;
		#50;
		mode=12;
		#50;
		mode=13;
		#50;
		mode=14;
		#50;
		mode=15;
	end
	always #20 clk=~clk;
endmodule

