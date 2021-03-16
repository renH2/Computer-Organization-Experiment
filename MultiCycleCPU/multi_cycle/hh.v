`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:25:50 08/13/2020
// Design Name:   RAM
// Module Name:   D:/multi_cycle/hh.v
// Project Name:  multi_cycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module hh;

	// Inputs
	reg clka;
	reg [0:0] wea;
	reg [9:0] addra;
	reg [31:0] dina;

	// Outputs
	wire [31:0] douta;

	// Instantiate the Unit Under Test (UUT)
	RAM uut (
		.clka(clka), 
		.wea(wea), 
		.addra(addra), 
		.dina(dina), 
		.douta(douta)
	);

	initial begin
		// Initialize Inputs
		clka = 0;
		wea = 0;
		addra = 0;
		dina = 0;
		// Wait 100 ns for global reset to finish
		#100;
		addra=1;
		#100;
		addra=2;
		#100;
		addra=3;
		#100;
		// Add stimulus here
	end
	always #20 clka<=~clka;
endmodule

