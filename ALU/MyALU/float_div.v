module float_div(
  input [31:0] ix,
  input [31:0] iy,
  input clk,
  input rst,
  output reg [31:0] oz,
  output reg [1:0] Yichu
  );

reg [1:0] overflow;
reg s1,s2,s3; //符号位
reg [7:0] exp1,exp2,exp3; //指数
reg [22:0] man1,man2,man3; //尾数
reg n;
reg [8:0] temp1;
reg [8:0] temp2;
reg [8:0] temp3;
reg [23:0] temp4;
reg [23:0] temp5;
reg [24:0] tepman1;
reg [24:0] tepman2;
reg [47:0] tepman3;
reg [1:0] state = 0;


always@(posedge clk) //浮点数除法状态机
  begin
    if (state == 0)
     begin
            if(iy==32'b0)
              begin
					 Yichu <=0;
					 oz <=32'hFFFFFF;
					 state<=0;
              end
            else if(ix==32'b0)
              begin
					 Yichu <=0;
					 oz <=32'h0;
					 state<=0;
              end
            else if(ix==32'h7F800000)
              begin
					 Yichu <=0;
					 oz <=32'h7F800000;
					 state<=0;
              end
			   else if(ix[30:23]==8'hFF&&ix[22:0]!=0)
              begin
					 Yichu <=0;
					 oz <=32'hFFFFFFFF;
					 state<=0;
              end
            else if(ix==32'b1100000000000000000_0000000000000)
              begin
                s1<=ix[31];
                exp1<=ix[30:23];
                man1<=ix[22:0];
                s2<=1'b0;
                exp2<=8'b00000000;
                man2<=23'b0;
					 state <= 2'b01;
              end
            else if(iy==32'b1100000000000000000_0000000000000)
              begin
                s2<=iy[31];
                exp2<=iy[30:23];
                man2<=iy[22:0];
                s1<=1'b0;
                exp1<=8'b00000000;
                man1<=23'b0;
					 state <= 2'b01;
              end
            else
				  begin
                s2<=iy[31];
                exp2<=iy[30:23];
                man2<=iy[22:0];
                s1<=ix[31];
                exp1<=ix[30:23];
                man1<=ix[22:0];
					 state <= 2'b01;
              end
    end

    if (state == 1)
     begin
      temp4 <= man1 + ~man2;
      temp5 <= temp4 +1;
      if(temp5[23] == 1)  //判断是否移位
        n<= 1'b1;
      else
        n<= 1'b0;
      if(n == 0)
      begin
      tepman1 <={n,1'b1,man1};
      tepman2 <={2'b01,man2};
      tepman3 <={tepman1,23'b0};
      man3 <= tepman3 / tepman2;
      end
      else
      begin
      tepman1 <={1'b1,man1,1'b0};
      tepman2 <={2'b01,man2};
      tepman3 <={tepman1,23'b0};
      man3 <= tepman3 / tepman2;
      end

      state <= 2;
    end

    if (state == 2)
     begin
      temp3 <= exp1-exp2+127- n;
      exp3 <= temp3[7:0];
      state <= 3;
   end

    if (state == 3)
     begin
        s3 <= s1^s2;
      Yichu <= temp3[8];
        oz <= {s3,exp3,man3[22:0]};
       state <= 0;
   end
  end

endmodule
