`timescale 1ns / 1ps

module disp64(
    input clk,
    input rst,
    input [63:0] data,
    output segclk,
    output segclrn,
    output segsout,
    output segen
);
             
    wire [63:0] SEG_TXT;
    wire Start;
    
    reg [31:0] clk_div = 0;
    
    always @(posedge clk) begin
        if(rst) begin
            clk_div <= 0;
        end else begin
            clk_div <= clk_div + 32'd1;
        end
    end
    
    assign Start = clk_div[10];
    
    newMC14495 M0(.alnum(data[7:0]), .a(SEG_TXT[63]), .b(SEG_TXT[62]), .c(SEG_TXT[61]), .d(SEG_TXT[60]), .e(SEG_TXT[59]), .f(SEG_TXT[58]), .g(SEG_TXT[57]), .p(SEG_TXT[56]));
    newMC14495 M1(.alnum(data[15:8]), .a(SEG_TXT[55]), .b(SEG_TXT[54]), .c(SEG_TXT[53]), .d(SEG_TXT[52]), .e(SEG_TXT[51]), .f(SEG_TXT[50]), .g(SEG_TXT[49]), .p(SEG_TXT[48]));
    newMC14495 M2(.alnum(data[23:16]), .a(SEG_TXT[47]), .b(SEG_TXT[46]), .c(SEG_TXT[45]), .d(SEG_TXT[44]), .e(SEG_TXT[43]), .f(SEG_TXT[42]), .g(SEG_TXT[41]), .p(SEG_TXT[40]));
    newMC14495 M3(.alnum(data[31:24]), .a(SEG_TXT[39]), .b(SEG_TXT[38]), .c(SEG_TXT[37]), .d(SEG_TXT[36]), .e(SEG_TXT[35]), .f(SEG_TXT[34]), .g(SEG_TXT[33]), .p(SEG_TXT[32]));
    newMC14495 M4(.alnum(data[39:32]), .a(SEG_TXT[31]), .b(SEG_TXT[30]), .c(SEG_TXT[29]), .d(SEG_TXT[28]), .e(SEG_TXT[27]), .f(SEG_TXT[26]), .g(SEG_TXT[25]), .p(SEG_TXT[24]));
    newMC14495 M5(.alnum(data[47:40]), .a(SEG_TXT[23]), .b(SEG_TXT[22]), .c(SEG_TXT[21]), .d(SEG_TXT[20]), .e(SEG_TXT[19]), .f(SEG_TXT[18]), .g(SEG_TXT[17]), .p(SEG_TXT[16]));
    newMC14495 M6(.alnum(data[55:48]), .a(SEG_TXT[15]), .b(SEG_TXT[14]), .c(SEG_TXT[13]), .d(SEG_TXT[12]), .e(SEG_TXT[11]), .f(SEG_TXT[10]), .g(SEG_TXT[9]), .p(SEG_TXT[8]));
    newMC14495 M7(.alnum(data[63:56]),.a(SEG_TXT[7]), .b(SEG_TXT[6]), .c(SEG_TXT[5]), .d(SEG_TXT[4]), .e(SEG_TXT[3]), .f(SEG_TXT[2]), .g(SEG_TXT[1]), .p(SEG_TXT[0]));
    
    P2S M_PS2(.clk(clk), .rst(rst), .Serial(Start), .P_Data(SEG_TXT), .s_clk(segclk), .s_clrn(segclrn), .sout(segsout), .EN(segen));

endmodule
