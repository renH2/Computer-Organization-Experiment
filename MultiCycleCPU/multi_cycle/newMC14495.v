`timescale 1ns / 1ps

module newMC14495(
    input [7:0] alnum,
    output a,b,c,d,e,f,g,p
);
    reg [7:0] h2a;
    assign p = h2a[7];
    assign g = h2a[6];
    assign f = h2a[5];
    assign e = h2a[4];
    assign d = h2a[3];
    assign c = h2a[2];
    assign b = h2a[1];
    assign a = h2a[0];
    
    always @(*) begin
        case(alnum)
            8'd0 : h2a <= 8'hc0;
            8'd1 : h2a <= 8'hf9;
            8'd2 : h2a <= 8'ha4;
            8'd3 : h2a <= 8'hb0;
            8'd4 : h2a <= 8'h99;
            8'd5 : h2a <= 8'h92;
            8'd6 : h2a <= 8'h82;
            8'd7 : h2a <= 8'hf8;
            8'd8 : h2a <= 8'h80;
            8'd9 : h2a <= 8'h90;
            8'd10: h2a <= 8'h88;
            8'd11: h2a <= 8'h83;
            8'd12: h2a <= 8'hc6;
            8'd13: h2a <= 8'ha1;
            8'd14: h2a <= 8'h86;
            8'd15: h2a <= 8'h8e;
            8'd16: h2a <= 8'hc2;
            8'd17: h2a <= 8'h8b;
            8'd18: h2a <= 8'hcf;
            8'd19: h2a <= 8'hf1;
            8'd20: h2a <= 8'h00;
            8'd21: h2a <= 8'hc7;
            8'd22: h2a <= 8'h00;
            8'd23: h2a <= 8'hab;
            8'd24: h2a <= 8'ha3;
            8'd25: h2a <= 8'h8c;
            8'd26: h2a <= 8'h98;
            8'd27: h2a <= 8'haf;
            8'd28: h2a <= 8'h00;
            8'd29: h2a <= 8'h00;
            8'd30: h2a <= 8'hc1;
            8'd31: h2a <= 8'he3;
            8'd32: h2a <= 8'h00;
            8'd33: h2a <= 8'h00;
            8'd34: h2a <= 8'h00;
            8'd35: h2a <= 8'h00;
				default: h2a <= 8'h00;
        endcase    
    end

endmodule
