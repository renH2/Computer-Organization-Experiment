`timescale 1ns / 1ps

module mem(
    input real_clk,
    input clk,
    input mem_read,
    input mem_write,
    input [31:0] wdata,
    input [31:0] addr,
    output [31:0] out_data,
    output [63:0] show_data
);

wire wea = mem_write;
wire [31:0] out1,out2;
MUX2T1_32 mux(out1,out2,addr[15],out_data);

code_mem mod_ram(
    .clka(clk),
    .ena(~addr[15]),
    .wea(wea),
    .addra(addr[14:2]),
    .dina(wdata),
    .douta(out1)
);

vmem mod_vmem(
    .real_clk(real_clk),
    .clk(clk),
    .ena(addr[15]),
    .wea(wea),
    .addra(addr[4:2]),
    .dina(wdata),
    .douta(out2),
    .show_data(show_data)
);

endmodule

