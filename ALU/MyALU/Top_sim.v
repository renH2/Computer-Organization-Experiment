`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:26:22 08/16/2020
// Design Name:   Top
// Module Name:   E:/English Ruanjian/ISE/CO/compute/MyALU/MyALU002/Top_sim.v
// Project Name:  MyALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Top_sim;

	// Inputs
	reg clk;
	reg [15:0] SW;
	reg RSTN;

	// Outputs
	wire [7:0] SEGMENT;
	wire [3:0] AN;
	wire SEGLED_CLK;
	wire SEGLED_CLR;
	wire SEGLED_DO;
	wire SEGLED_PEN;

	// Instantiate the Unit Under Test (UUT)
	Top uut (
		.clk(clk), 
		.SW(SW), 
		.RSTN(RSTN), 
		.SEGMENT(SEGMENT), 
		.AN(AN), 
		.SEGLED_CLK(SEGLED_CLK), 
		.SEGLED_CLR(SEGLED_CLR), 
		.SEGLED_DO(SEGLED_DO), 
		.SEGLED_PEN(SEGLED_PEN)
	);

	initial begin
		// Initialize Inputs
		SW = 0;
		RSTN = 0;
	#100;SW[15:13]=3'b011;
		  SW[12:10]=3'b010;
		  
	#50;SW[3:0]=0;
	#50;SW[3:0]=1;
	#50;SW[3:0]=8;
	#50;SW[3:0]=9;
	#50;SW[3:0]=10;
	#50;SW[3:0]=11;
	#50;SW[7]=1;
	#50;SW[7]=0;
	#50;SW[3:0]=12;
	#50;SW[3:0]=13;
	#50;SW[3:0]=14;
	#50;SW[3:0]=15;
	
	#100;SW[6]=1'b1;
	#50;SW[3:0]=0;
	#50;SW[3:0]=1;
	#50;SW[3:0]=8;
	#50;SW[3:0]=9;
	#50;SW[3:0]=10;#50;SW[8]=1;
	#50;SW[3:0]=11;
	
	#50;SW[7]=0;
	#50;SW[3:0]=12;
	#50;SW[3:0]=13;
	#50;SW[3:0]=14;
	#50;SW[3:0]=15;	 
	
	end
	initial forever begin 
	clk=0;#25;
	clk=1;#25;
   end   
	
endmodule

