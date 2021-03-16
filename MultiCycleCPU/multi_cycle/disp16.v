`timescale 1ns / 1ps

module disp16(
    input clk,
    input [15:0] number,
    output [3:0] enable,
    output [7:0] segment
);

reg [31:0] clk_div;
wire [3:0] data;
wire [1:0] choice;

initial begin
	clk_div <= 0;
end

always @(posedge clk) begin
    clk_div <= clk_div + 1'b1;
end

assign choice = clk_div[18:17];

assign data =   (choice == 2'b00)   ? number[15:12] :
                (choice == 2'b01)   ? number[11:8]  :
                (choice == 2'b10)   ? number[7:4]   :
                                      number[3:0]   ;

assign enable = (choice == 2'b00) ? 4'b0111 :
                (choice == 2'b01) ? 4'b1011 :
                (choice == 2'b10) ? 4'b1101 :
                                    4'b1110 ;
        

MyMC14495 mc(
    data[0],data[1],data[2],data[3],
	 1'b1,1'b0,
    segment[0],segment[1],segment[2],segment[3],
    segment[4],segment[5],segment[6],segment[7]
);

endmodule
