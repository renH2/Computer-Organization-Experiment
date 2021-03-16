`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:58:41 04/04/2019
// Design Name:   Top
// Module Name:   G:/ISE14.7/14.7/MyALU-1/MyALU/FADD_test.v
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

module FADD_test;

	// Inputs
	reg clk;
	reg [15:0] SW;
	reg RSTN;

	// Outputs
	wire [7:0] SEGMENT;
	wire [3:0] AN;
	wire [7:0] LED;
	wire LED_CLK;
	wire LED_CLR;
	wire LED_DO;
	wire LED_PEN;
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
		.LED(LED), 
		.LED_CLK(LED_CLK), 
		.LED_CLR(LED_CLR), 
		.LED_DO(LED_DO), 
		.LED_PEN(LED_PEN), 
		.SEGLED_CLK(SEGLED_CLK), 
		.SEGLED_CLR(SEGLED_CLR), 
		.SEGLED_DO(SEGLED_DO), 
		.SEGLED_PEN(SEGLED_PEN)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		SW = 0;
		RSTN = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

