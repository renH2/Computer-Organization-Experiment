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
static const char *ng0 = "E:/English Ruanjian/ISE/CO/compute/MyALU002/Div_32bits_flag.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {1, 0, 0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {0U, 0U, 0U, 0U};
static int ng6[] = {0, 0};
static int ng7[] = {63, 0};
static unsigned int ng8[] = {1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {3U, 0U};



static void Always_34_0(char *t0)
{
    char t6[8];
    char t16[8];
    char t38[16];
    char t39[16];
    char t42[16];
    char t44[8];
    char t45[8];
    char t60[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t61;
    char *t62;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 8);
    t8 = (t5 + 12);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t4) = t14;
    t15 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t6 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB9;

LAB6:    if (t28 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t16) = 1;

LAB9:    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t38, 63, t3, 62, 0);
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t38, 0, 0, 63, 0LL);

LAB12:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t5);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t8);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB16;

LAB13:    if (t28 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t16) = 1;

LAB16:    t17 = (t16 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 2147483647U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 2147483647U);
    t5 = ((char*)((ng4)));
    xsi_vlogtype_concat(t38, 63, 62, 2U, t5, 31, t6, 31);
    t7 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t7, t38, 0, 0, 63, 0LL);

LAB19:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t16 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    memset(t44, 0, 8);
    t5 = (t44 + 4);
    t8 = (t7 + 8);
    t15 = (t7 + 12);
    t19 = *((unsigned int *)t8);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t44) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t5) = t24;
    xsi_vlogtype_concat(t6, 2, 2, 2U, t44, 1, t16, 1);
    t17 = (t0 + 2568);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 2);
    goto LAB2;

LAB8:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);
    t40 = (t0 + 1048U);
    t41 = *((char **)t40);
    xsi_vlog_get_part_select_value(t39, 63, t41, 62, 0);
    xsi_vlogtype_unsigned_bit_neg(t38, 63, t39, 63);
    t40 = ((char*)((ng2)));
    xsi_vlog_unsigned_add(t42, 63, t38, 63, t40, 32);
    t43 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t43, t42, 0, 0, 63, 0LL);
    goto LAB12;

LAB15:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(41, ng0);
    t18 = (t0 + 1208U);
    t31 = *((char **)t18);
    memset(t45, 0, 8);
    t18 = (t45 + 4);
    t32 = (t31 + 4);
    t46 = *((unsigned int *)t31);
    t47 = (t46 >> 0);
    *((unsigned int *)t45) = t47;
    t48 = *((unsigned int *)t32);
    t49 = (t48 >> 0);
    *((unsigned int *)t18) = t49;
    t50 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t50 & 2147483647U);
    t51 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t51 & 2147483647U);
    memset(t44, 0, 8);
    t40 = (t44 + 4);
    t41 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    *((unsigned int *)t44) = t53;
    *((unsigned int *)t40) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB21;

LAB20:    t58 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t58 & 4294967295U);
    t59 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t59 & 4294967295U);
    t43 = ((char*)((ng3)));
    memset(t60, 0, 8);
    xsi_vlog_unsigned_add(t60, 32, t44, 32, t43, 32);
    t61 = ((char*)((ng4)));
    xsi_vlogtype_concat(t38, 63, 63, 2U, t61, 31, t60, 32);
    t62 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t62, t38, 0, 0, 63, 0LL);
    goto LAB19;

LAB21:    t54 = *((unsigned int *)t44);
    t55 = *((unsigned int *)t41);
    *((unsigned int *)t44) = (t54 | t55);
    t56 = *((unsigned int *)t40);
    t57 = *((unsigned int *)t41);
    *((unsigned int *)t40) = (t56 | t57);
    goto LAB20;

}

static void Always_48_1(char *t0)
{
    char t4[32];
    char t10[8];
    char t16[32];
    char t20[16];
    char t21[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4232);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng5)));
    xsi_vlogtype_concat(t4, 126, 126, 2U, t8, 63, t7, 63);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 126);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t4, 126, 126, 2U, t6, 63, t2, 63);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 126);
    xsi_set_current_line(52, ng0);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t5, 32, t6, 32);
    t7 = (t10 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB13:    t6 = ((char*)((ng4)));
    t27 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t27 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng1)));
    t27 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t27 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng9)));
    t27 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t27 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng10)));
    t27 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t27 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB7:    xsi_set_current_line(53, ng0);

LAB9:    xsi_set_current_line(54, ng0);
    t8 = ((char*)((ng4)));
    t9 = (t0 + 1928);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_get_part_select_value(t16, 125, t18, 124, 0);
    xsi_vlogtype_concat(t4, 126, 126, 2U, t16, 125, t8, 1);
    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 126);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t20, 63, t5, 125, 63);
    t6 = (t0 + 2408);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_unsigned_greatereq(t21, 63, t20, 63, t8, 63);
    t9 = (t21 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t21);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 126);

LAB12:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t5, 32, t6, 32);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB6;

LAB10:    xsi_set_current_line(56, ng0);
    t17 = (t0 + 1928);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t22 = (t0 + 2088);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_unsigned_minus(t4, 126, t19, 126, t24, 126);
    t25 = ((char*)((ng8)));
    xsi_vlog_unsigned_add(t16, 126, t4, 126, t25, 126);
    t26 = (t0 + 1928);
    xsi_vlogvar_assign_value(t26, t16, 0, 0, 126);
    goto LAB12;

LAB14:    xsi_set_current_line(61, ng0);

LAB23:    xsi_set_current_line(61, ng0);
    t7 = (t0 + 1928);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_get_part_select_value(t21, 63, t9, 62, 0);
    t17 = ((char*)((ng4)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t17, 1, t21, 63);
    t18 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t18, t20, 0, 0, 64, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    xsi_vlog_get_part_select_value(t21, 63, t6, 125, 63);
    t7 = ((char*)((ng4)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t7, 1, t21, 63);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t20, 0, 0, 64, 0LL);
    goto LAB22;

LAB16:    xsi_set_current_line(62, ng0);

LAB24:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1928);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_get_part_select_value(t21, 63, t7, 62, 0);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t8, 1, t21, 63);
    t9 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t9, t20, 0, 0, 64, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    xsi_vlog_get_part_select_value(t21, 63, t6, 125, 63);
    t7 = ((char*)((ng4)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t7, 1, t21, 63);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t20, 0, 0, 64, 0LL);
    goto LAB22;

LAB18:    xsi_set_current_line(63, ng0);

LAB25:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1928);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_get_part_select_value(t21, 63, t7, 62, 0);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t8, 1, t21, 63);
    t9 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t9, t20, 0, 0, 64, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    xsi_vlog_get_part_select_value(t21, 63, t6, 125, 63);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t7, 1, t21, 63);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t20, 0, 0, 64, 0LL);
    goto LAB22;

LAB20:    xsi_set_current_line(64, ng0);

LAB26:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1928);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_get_part_select_value(t21, 63, t7, 62, 0);
    t8 = ((char*)((ng4)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t8, 1, t21, 63);
    t9 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t9, t20, 0, 0, 64, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    xsi_vlog_get_part_select_value(t21, 63, t6, 125, 63);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t20, 64, 64, 2U, t7, 1, t21, 63);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t20, 0, 0, 64, 0LL);
    goto LAB22;

}


extern void work_m_00000000004057432616_3718726063_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Always_48_1};
	xsi_register_didat("work_m_00000000004057432616_3718726063", "isim/Top_sim_isim_beh.exe.sim/work/m_00000000004057432616_3718726063.didat");
	xsi_register_executes(pe);
}
