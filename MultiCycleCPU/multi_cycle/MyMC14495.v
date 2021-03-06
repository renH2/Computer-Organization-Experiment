`timescale 1ns / 1ps

module MyMC14495(D0, 
                 D1, 
                 D2, 
                 D3, 
                 LE, 
                 POINT, 
                 a, 
                 b, 
                 c, 
                 d, 
                 e, 
                 f, 
                 g, 
                 p);

    input D0;
    input D1;
    input D2;
    input D3;
    input LE;
    input POINT;
   output a;
   output b;
   output c;
   output d;
   output e;
   output f;
   output g;
   output p;
   
   wire X;
   wire XLXN_26;
   wire XLXN_27;
   wire XLXN_108;
   wire XLXN_109;
   wire XLXN_110;
   wire XLXN_111;
   wire XLXN_115;
   wire XLXN_116;
   wire XLXN_117;
   wire XLXN_120;
   wire XLXN_122;
   wire XLXN_123;
   wire XLXN_125;
   wire XLXN_129;
   wire XLXN_130;
   wire XLXN_132;
   wire XLXN_133;
   wire XLXN_134;
   wire XLXN_136;
   wire XLXN_137;
   wire XLXN_138;
   wire XLXN_141;
   wire XLXN_145;
   wire XLXN_146;
   wire XLXN_147;
   wire XLXN_152;
   wire XLXN_153;
   wire XLXN_154;
   wire XLXN_156;
   wire XLXN_157;
   wire XLXN_158;
   wire XLXN_159;
   wire _d0;
   
   INV  XLXI_1 (.I(D3), 
               .O(XLXN_129));
   INV  XLXI_2 (.I(D2), 
               .O(XLXN_141));
   INV  XLXI_3 (.I(D1), 
               .O(XLXN_130));
   INV  XLXI_4 (.I(D0), 
               .O(_d0));
   AND4  XLXI_9 (.I0(D0), 
                .I1(XLXN_130), 
                .I2(XLXN_141), 
                .I3(XLXN_129), 
                .O(XLXN_122));
   AND4  XLXI_10 (.I0(_d0), 
                 .I1(XLXN_130), 
                 .I2(D2), 
                 .I3(XLXN_129), 
                 .O(XLXN_120));
   AND4  XLXI_11 (.I0(D0), 
                 .I1(D1), 
                 .I2(XLXN_141), 
                 .I3(D3), 
                 .O(XLXN_26));
   AND4  XLXI_12 (.I0(D0), 
                 .I1(XLXN_130), 
                 .I2(D2), 
                 .I3(D3), 
                 .O(XLXN_27));
   OR4  XLXI_13 (.I0(XLXN_27), 
                .I1(XLXN_26), 
                .I2(XLXN_120), 
                .I3(XLXN_122), 
                .O(XLXN_152));
   AND4  XLXI_14 (.I0(D0), 
                 .I1(XLXN_130), 
                 .I2(D2), 
                 .I3(XLXN_129), 
                 .O(XLXN_108));
   AND3  XLXI_71 (.I0(_d0), 
                 .I1(D1), 
                 .I2(D2), 
                 .O(XLXN_109));
   AND3  XLXI_72 (.I0(_d0), 
                 .I1(D2), 
                 .I2(D3), 
                 .O(XLXN_110));
   AND3  XLXI_73 (.I0(D0), 
                 .I1(D1), 
                 .I2(D3), 
                 .O(XLXN_111));
   OR4  XLXI_74 (.I0(XLXN_111), 
                .I1(XLXN_110), 
                .I2(XLXN_109), 
                .I3(XLXN_108), 
                .O(XLXN_153));
   AND4  XLXI_75 (.I0(_d0), 
                 .I1(D1), 
                 .I2(XLXN_141), 
                 .I3(XLXN_129), 
                 .O(XLXN_115));
   AND3  XLXI_76 (.I0(_d0), 
                 .I1(D2), 
                 .I2(D3), 
                 .O(XLXN_116));
   AND3  XLXI_77 (.I0(D1), 
                 .I1(D2), 
                 .I2(D3), 
                 .O(XLXN_117));
   OR3  XLXI_78 (.I0(XLXN_117), 
                .I1(XLXN_116), 
                .I2(XLXN_115), 
                .O(XLXN_154));
   AND4  XLXI_79 (.I0(_d0), 
                 .I1(D1), 
                 .I2(XLXN_141), 
                 .I3(D3), 
                 .O(XLXN_123));
   AND3  XLXI_80 (.I0(D0), 
                 .I1(D1), 
                 .I2(D2), 
                 .O(XLXN_125));
   OR4  XLXI_81 (.I0(XLXN_125), 
                .I1(XLXN_123), 
                .I2(XLXN_120), 
                .I3(XLXN_122), 
                .O(XLXN_159));
   AND2  XLXI_82 (.I0(D0), 
                 .I1(XLXN_129), 
                 .O(XLXN_132));
   AND3  XLXI_83 (.I0(XLXN_130), 
                 .I1(D2), 
                 .I2(XLXN_129), 
                 .O(XLXN_133));
   AND3  XLXI_84 (.I0(D0), 
                 .I1(XLXN_130), 
                 .I2(XLXN_141), 
                 .O(XLXN_134));
   OR3  XLXI_85 (.I0(XLXN_134), 
                .I1(XLXN_133), 
                .I2(XLXN_132), 
                .O(XLXN_158));
   AND3  XLXI_86 (.I0(D0), 
                 .I1(XLXN_141), 
                 .I2(XLXN_129), 
                 .O(XLXN_136));
   AND3  XLXI_87 (.I0(D1), 
                 .I1(XLXN_141), 
                 .I2(XLXN_129), 
                 .O(XLXN_137));
   AND3  XLXI_88 (.I0(D0), 
                 .I1(D1), 
                 .I2(XLXN_129), 
                 .O(XLXN_138));
   OR4  XLXI_89 (.I0(XLXN_138), 
                .I1(XLXN_137), 
                .I2(XLXN_136), 
                .I3(XLXN_27), 
                .O(XLXN_157));
   AND3  XLXI_90 (.I0(XLXN_130), 
                 .I1(XLXN_141), 
                 .I2(XLXN_129), 
                 .O(XLXN_145));
   AND4  XLXI_91 (.I0(D0), 
                 .I1(D1), 
                 .I2(D2), 
                 .I3(XLXN_129), 
                 .O(XLXN_146));
   AND4  XLXI_92 (.I0(_d0), 
                 .I1(XLXN_130), 
                 .I2(D2), 
                 .I3(D3), 
                 .O(XLXN_147));
   OR3  XLXI_93 (.I0(XLXN_147), 
                .I1(XLXN_146), 
                .I2(XLXN_145), 
                .O(XLXN_156));
   OR2  XLXI_94 (.I0(X), 
                .I1(XLXN_153), 
                .O(b));
   OR2  XLXI_95 (.I0(X), 
                .I1(XLXN_154), 
                .O(c));
   OR2  XLXI_96 (.I0(X), 
                .I1(XLXN_159), 
                .O(d));
   OR2  XLXI_97 (.I0(X), 
                .I1(XLXN_158), 
                .O(e));
   OR2  XLXI_98 (.I0(X), 
                .I1(XLXN_157), 
                .O(f));
   OR2  XLXI_99 (.I0(X), 
                .I1(XLXN_156), 
                .O(g));
   OR2  XLXI_100 (.I0(X), 
                 .I1(XLXN_152), 
                 .O(a));
   INV  XLXI_102 (.I(LE), 
                 .O(X));
   INV  XLXI_103 (.I(POINT), 
                 .O(p));

    
endmodule
