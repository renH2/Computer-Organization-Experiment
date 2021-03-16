module float_sub(
  input [31:0]ix,
  input [31:0]iy,
  input clk,
  output reg [31:0]oz
  );
wire [31:0] result;
float_add(.ix(ix),.iy({~iy[31],iy[30:0]}),.clk(clk),.oz(result));

always @*
  begin
    oz <= result;
  end

endmodule
