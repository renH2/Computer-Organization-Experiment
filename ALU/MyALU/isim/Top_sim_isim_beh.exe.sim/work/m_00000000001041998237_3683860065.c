/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/English Ruanjian/ISE/CO/compute/MyALU002/Top.v";
static const char *ng1 = "A_Mem.txt";
static const char *ng2 = "B_Mem.txt";
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {8U, 0U};
static unsigned int ng8[] = {9U, 0U};



static void Initial_31_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 5128);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 5288);
    xsi_vlogfile_readmemb(ng2, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_36_1(char *t0)
{
    char t7[8];
    char t14[8];
    char t32[8];
    char t39[8];
    char t49[8];
    char t56[8];
    char t71[8];
    char t79[8];
    char t112[8];
    char t113[8];
    char t116[8];
    char t117[8];
    char t128[8];
    char t129[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t114;
    char *t115;
    char *t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;

LAB0:    t1 = (t0 + 6776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 9576);
    *((int *)t2) = 1;
    t3 = (t0 + 6808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 5128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 5128);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5128);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 13);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 13);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 7U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 7U);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t14, 3, 2);
    t24 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t24, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5288);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 5288);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t13 + 4);
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 10);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 10);
    *((unsigned int *)t12) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 7U);
    t23 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t23 & 7U);
    xsi_vlog_generic_get_array_select_value(t7, 32, t4, t8, t11, 2, 1, t14, 3, 2);
    t16 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t16, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (t18 >> 4);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t4);
    t21 = (t20 >> 4);
    *((unsigned int *)t2) = t21;
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 3U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 3U);

LAB6:    t5 = ((char*)((ng3)));
    t25 = xsi_vlog_unsigned_case_compare(t7, 2, t5, 2);
    if (t25 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t25 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t25 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t25 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t25 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t25 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t25 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t4);
    t21 = (t20 >> 0);
    *((unsigned int *)t2) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 15U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 15U);
    t5 = ((char*)((ng7)));
    memset(t32, 0, 8);
    t6 = (t14 + 4);
    t8 = (t5 + 4);
    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t5);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t8);
    t31 = (t29 ^ t30);
    t33 = (t28 | t31);
    t34 = *((unsigned int *)t6);
    t35 = *((unsigned int *)t8);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB19;

LAB16:    if (t36 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t32) = 1;

LAB19:    memset(t39, 0, 8);
    t10 = (t32 + 4);
    t40 = *((unsigned int *)t10);
    t41 = (~(t40));
    t42 = *((unsigned int *)t32);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t10) != 0)
        goto LAB22;

LAB23:    t12 = (t39 + 4);
    t45 = *((unsigned int *)t39);
    t46 = (!(t45));
    t47 = *((unsigned int *)t12);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB24;

LAB25:    memcpy(t79, t39, 8);

LAB26:    t106 = (t79 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t79);
    t110 = (t109 & t108);
    t111 = (t110 != 0);
    if (t111 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t32, 0, 8);
    t2 = (t32 + 4);
    t4 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (t18 >> 0);
    *((unsigned int *)t32) = t19;
    t20 = *((unsigned int *)t4);
    t21 = (t20 >> 0);
    *((unsigned int *)t2) = t21;
    t22 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t22 & 15U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 15U);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t49, 0, 8);
    t5 = (t49 + 4);
    t8 = (t6 + 4);
    t26 = *((unsigned int *)t6);
    t27 = (t26 >> 4);
    *((unsigned int *)t49) = t27;
    t28 = *((unsigned int *)t8);
    t29 = (t28 >> 4);
    *((unsigned int *)t5) = t29;
    t30 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t30 & 3U);
    t31 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t31 & 3U);
    t9 = ((char*)((ng3)));
    xsi_vlogtype_concat(t39, 4, 4, 2U, t9, 2, t49, 2);
    t10 = (t0 + 1208U);
    t11 = *((char **)t10);
    memset(t71, 0, 8);
    t10 = (t71 + 4);
    t12 = (t11 + 4);
    t33 = *((unsigned int *)t11);
    t34 = (t33 >> 10);
    *((unsigned int *)t71) = t34;
    t35 = *((unsigned int *)t12);
    t36 = (t35 >> 10);
    *((unsigned int *)t10) = t36;
    t37 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t37 & 7U);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & 7U);
    t13 = ((char*)((ng3)));
    xsi_vlogtype_concat(t56, 4, 4, 2U, t13, 1, t71, 3);
    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    memset(t112, 0, 8);
    t15 = (t112 + 4);
    t17 = (t16 + 4);
    t40 = *((unsigned int *)t16);
    t41 = (t40 >> 13);
    *((unsigned int *)t112) = t41;
    t42 = *((unsigned int *)t17);
    t43 = (t42 >> 13);
    *((unsigned int *)t15) = t43;
    t44 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t44 & 7U);
    t45 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t45 & 7U);
    t24 = ((char*)((ng3)));
    xsi_vlogtype_concat(t79, 4, 4, 2U, t24, 1, t112, 3);
    xsi_vlogtype_concat(t14, 16, 16, 4U, t79, 4, t56, 4, t39, 4, t32, 4);
    t57 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t57, t14, 0, 0, 16, 0LL);

LAB40:    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);
    t6 = (t0 + 2968U);
    t8 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t9 = (t8 + 4);
    t26 = *((unsigned int *)t8);
    t27 = (t26 >> 0);
    *((unsigned int *)t14) = t27;
    t28 = *((unsigned int *)t9);
    t29 = (t28 >> 0);
    *((unsigned int *)t6) = t29;
    t30 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t30 & 4294967295U);
    t31 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t31 & 4294967295U);
    t10 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t10, t14, 0, 0, 32, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 2968U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t5 = (t4 + 8);
    t6 = (t4 + 12);
    t18 = *((unsigned int *)t5);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t6);
    t21 = (t20 >> 0);
    *((unsigned int *)t3) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 4294967295U);
    t23 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t23 & 4294967295U);
    t8 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t8, t14, 0, 0, 32, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 4808);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 4968);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    goto LAB15;

LAB18:    t9 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t39) = 1;
    goto LAB23;

LAB22:    t11 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB23;

LAB24:    t13 = (t0 + 1208U);
    t15 = *((char **)t13);
    memset(t49, 0, 8);
    t13 = (t49 + 4);
    t16 = (t15 + 4);
    t50 = *((unsigned int *)t15);
    t51 = (t50 >> 0);
    *((unsigned int *)t49) = t51;
    t52 = *((unsigned int *)t16);
    t53 = (t52 >> 0);
    *((unsigned int *)t13) = t53;
    t54 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t54 & 15U);
    t55 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t55 & 15U);
    t17 = ((char*)((ng8)));
    memset(t56, 0, 8);
    t24 = (t49 + 4);
    t57 = (t17 + 4);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t17);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t24);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t24);
    t66 = *((unsigned int *)t57);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB30;

LAB27:    if (t67 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t56) = 1;

LAB30:    memset(t71, 0, 8);
    t72 = (t56 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t56);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t72) != 0)
        goto LAB33;

LAB34:    t80 = *((unsigned int *)t39);
    t81 = *((unsigned int *)t71);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = (t39 + 4);
    t84 = (t71 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB26;

LAB29:    t70 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t71) = 1;
    goto LAB34;

LAB33:    t78 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB34;

LAB35:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t39 + 4);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t93);
    t96 = (~(t95));
    t97 = *((unsigned int *)t39);
    t25 = (t97 & t96);
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t71);
    t101 = (t100 & t99);
    t102 = (~(t25));
    t103 = (~(t101));
    t104 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t104 & t102);
    t105 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t105 & t103);
    goto LAB37;

LAB38:    xsi_set_current_line(46, ng0);
    t114 = (t0 + 3128U);
    t115 = *((char **)t114);
    t114 = ((char*)((ng3)));
    xsi_vlogtype_concat(t113, 8, 8, 2U, t114, 3, t115, 5);
    t118 = (t0 + 1208U);
    t119 = *((char **)t118);
    memset(t117, 0, 8);
    t118 = (t117 + 4);
    t120 = (t119 + 4);
    t121 = *((unsigned int *)t119);
    t122 = (t121 >> 10);
    *((unsigned int *)t117) = t122;
    t123 = *((unsigned int *)t120);
    t124 = (t123 >> 10);
    *((unsigned int *)t118) = t124;
    t125 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t125 & 7U);
    t126 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t126 & 7U);
    t127 = ((char*)((ng3)));
    xsi_vlogtype_concat(t116, 4, 4, 2U, t127, 1, t117, 3);
    t130 = (t0 + 1208U);
    t131 = *((char **)t130);
    memset(t129, 0, 8);
    t130 = (t129 + 4);
    t132 = (t131 + 4);
    t133 = *((unsigned int *)t131);
    t134 = (t133 >> 13);
    *((unsigned int *)t129) = t134;
    t135 = *((unsigned int *)t132);
    t136 = (t135 >> 13);
    *((unsigned int *)t130) = t136;
    t137 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t137 & 7U);
    t138 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t138 & 7U);
    t139 = ((char*)((ng3)));
    xsi_vlogtype_concat(t128, 4, 4, 2U, t139, 1, t129, 3);
    xsi_vlogtype_concat(t112, 16, 16, 3U, t128, 4, t116, 4, t113, 8);
    t140 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t140, t112, 0, 0, 16, 0LL);
    goto LAB40;

}

static void Cont_55_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 9720);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 9592);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_56_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 9784);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 9608);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_57_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 9848);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 9624);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_58_5(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 9912);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 9640);
    *((int *)t25) = 1;

LAB1:    return;
}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 9976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 10040);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 3);

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 10104);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 3);

LAB1:    return;
}

static void implSig4_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 10168);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig5_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 9008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 10232);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}

static void implSig6_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 9256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 10296);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}


extern void work_m_00000000001041998237_3683860065_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_36_1,(void *)Cont_55_2,(void *)Cont_56_3,(void *)Cont_57_4,(void *)Cont_58_5,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute,(void *)implSig5_execute,(void *)implSig6_execute};
	xsi_register_didat("work_m_00000000001041998237_3683860065", "isim/Top_sim_isim_beh.exe.sim/work/m_00000000001041998237_3683860065.didat");
	xsi_register_executes(pe);
}
