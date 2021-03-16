`timescale 1ns / 1ps

module vmem(
    input real_clk,
    input clk,
    input wea,
    input ena,
    input [2:0] addra,
    input [31:0] dina,
    output [31:0] douta,
    output reg [63:0] show_data
);

    
    reg [2:0] addrb;
    wire [31:0] doutb;
    reg [31:0] show_char;
    reg [63:0] show_buf;

    reg [7:0] state = 0;

    show_mem mod_vmem (
        .clka(clk),       // input clka
        .wea(wea),        // input [0 : 0] wea
        .ena(ena),        // input [0 : 0] ena
        .addra(addra),    // input [2 : 0] addra
        .dina(dina),      // input [31 : 0] dina
        .douta(douta),    // output [31 : 0] douta

        .clkb(real_clk),  // input clkb
        .web(1'b0),       // input [0 : 0] web
        .addrb(addrb),    // input [2 : 0] addrb
        .dinb(32'd0),     // input [31 : 0] dinb
        .doutb(doutb)     // output [31 : 0] doutb
    );

    always @(*) begin
       if(doutb >= 32'h30 && doutb <= 32'h39) begin
           show_char <= doutb - 32'h30;
       end else if(doutb >= 32'd65 && doutb <= 32'd90) begin
           show_char <= doutb - 32'd55;
       end else if(doutb >= 32'd97 && doutb <= 32'd122) begin
           show_char <= doutb - 32'd87;
       end else begin
           show_char <= 0;
       end
    end

    always @(posedge real_clk) begin
        if(state == 0) begin
            show_buf <= 0;
            addrb <= 0;
            state <= state + 1;
        end else if(state == 1) begin
            addrb <= addrb + 1;
            state <= state + 1;
        end else if(state >= 2 && state <= 9) begin
            addrb <= addrb + 1;
            state <= state + 1;
            show_buf <= {show_buf[55:0],show_char[7:0]};
        end else if(state == 10) begin
            show_data <= show_buf;
            state <= 0;
        end
    end
endmodule
