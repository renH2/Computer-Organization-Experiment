module float_mul(
  input [31:0] ix,
  input [31:0] iy,
  input clk,
  input rst,
  output reg [31:0] oz,
  output reg Yichu
  );

reg s1,s2,s3;
reg [7:0] exp1,exp2,exp3;  //指数
reg [8:0] temp3;           //指数运算
reg [22:0] man1,man2,man3; //尾数
reg n;
reg [23:0] temp;
reg [45:0] comeout;
reg [23:0] all;            //状态机
reg [1:0] zheng; 
reg [2:0] state = 0;

always@(posedge clk) //浮点乘法状态机
  begin
    if (state == 0)//提取符号，指数，尾数
     begin
        s2 <= iy[31];
        exp2 <= iy[30:23];
        man2 <= iy[22:0];
        s1 <= ix[31];
        exp1 <= ix[30:23];
        man1 <= ix[22:0];
        state <= 1;
		  if(ix==0||iy==0)
		    begin
            Yichu <= 0;
            oz <= 32'h0;
            state <= 0;				
		    end
		  else if(exp1==8'hFF&&ix[22:0]==0)
		    begin
			   Yichu <= 0;
				oz <= 32'h7F800000;
				state <= 0;
			 end
			else if(exp1==8'hFF&&ix[22:0]!=0)
			 begin
			   Yichu <= 0;
				oz <= 32'hFFFFFFFF;
				state <=0;
			 end
    end

    if (state == 1)
     begin
        comeout <= man1 * man2;
        temp <= man1 + man2;    //1.m*1.n=1+(0.m+0.n)+(0.m*0.n)
      all <= temp[22:0] + comeout[45:23];
      zheng <= 1'b1 + temp[23] + all[23];
      state <= 4;
    end

    if (state == 4)
     begin
      if(zheng[1]==1)
          begin
            n <= 1'b1; //用于移位
            man3[22:0] <= {zheng[0],all[22:1]};
          end
      else
          begin
            n <= 1'b0;
            man3 <= all[22:0];
          end
      state <= 2;
    end

    if (state == 2)  //处理指数
     begin
       temp3 <= exp1 + exp2 - 127 + n;
       state <= 3;
   end

    if (state == 3)
     begin
        s3 <= s1^s2;
        Yichu <= temp3[8];
        oz <= {s3,temp3[7:0],man3[22:0]};
       state <= 0;
   end
  end

endmodule
