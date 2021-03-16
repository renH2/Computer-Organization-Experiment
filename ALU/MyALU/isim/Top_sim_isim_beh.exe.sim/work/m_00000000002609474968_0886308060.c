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
static const char *ng0 = "E:/English Ruanjian/ISE/CO/compute/MyALU002/ALU.v";
static const char *ng1 = "C_Mem.txt";
static int ng2[] = {0, 0};
static int ng3[] = {4, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {11U, 0U};
static unsigned int ng16[] = {12U, 0U};
static unsigned int ng17[] = {13U, 0U};
static unsigned int ng18[] = {14U, 0U};
static unsigned int ng19[] = {15U, 0U};



static void Initial_42_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 7368);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_47_1(char *t0)
{
    char t7[16];
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
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 8696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 11992);
    *((int *)t2) = 1;
    t3 = (t0 + 8728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 7368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 7368);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 7368);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t7, 64, t6, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t0 + 7528);
    xsi_vlogvar_wait_assign_value(t15, t7, 0, 0, 64, 0LL);
    goto LAB2;

}

static void Cont_54_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 8944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 12232);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t5, 8);
    xsi_driver_vfirst_trans(t36, 0, 31);
    t41 = (t0 + 12008);
    *((int *)t41) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

}

static void Cont_55_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 9192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t32 = (t0 + 12296);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t5, 8);
    xsi_driver_vfirst_trans(t32, 0, 31);
    t37 = (t0 + 12024);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

}

static void Cont_56_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 9440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t18 = (t0 + 12360);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t5, 8);
    xsi_driver_vfirst_trans(t18, 0, 31);
    t23 = (t0 + 12040);
    *((int *)t23) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    goto LAB6;

}

static void Cont_57_5(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 9688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    *((unsigned int *)t3) = t7;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB5;

LAB4:    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 4294967295U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 4294967295U);
    t14 = (t0 + 12424);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t3, 8);
    xsi_driver_vfirst_trans(t14, 0, 31);
    t19 = (t0 + 12056);
    *((int *)t19) = 1;

LAB1:    return;
LAB5:    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t8 | t9);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t2) = (t10 | t11);
    goto LAB4;

}

static void Cont_58_6(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 9936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    *((unsigned int *)t3) = t7;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB5;

LAB4:    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 4294967295U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 4294967295U);
    t14 = (t0 + 12488);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t3, 8);
    xsi_driver_vfirst_trans(t14, 0, 31);
    t19 = (t0 + 12072);
    *((int *)t19) = 1;

LAB1:    return;
LAB5:    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t8 | t9);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t2) = (t10 | t11);
    goto LAB4;

}

static void Cont_60_7(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 10184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_rshift(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 12552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 12088);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_61_8(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 10432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_lshift(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 12616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 12104);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_62_9(char *t0)
{
    char t3[8];
    char t4[8];
    char t13[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 10680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 4);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 4);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 268435455U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 268435455U);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 1368U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t15) = t24;
    xsi_vlog_mul_concat(t13, 4, 1, t14, 1U, t17, 1);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t13, 4, t4, 28);
    t25 = (t0 + 12680);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t3, 8);
    xsi_driver_vfirst_trans(t25, 0, 31);
    t30 = (t0 + 12120);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Cont_63_10(char *t0)
{
    char t3[8];
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 10928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 4);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 4);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 268435455U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 268435455U);
    t14 = (t0 + 1368U);
    t15 = *((char **)t14);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t16 = (t15 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (t17 >> 0);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t14) = t20;
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 15U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 15U);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t13, 4, t4, 28);
    t23 = (t0 + 12744);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t3, 8);
    xsi_driver_vfirst_trans(t23, 0, 31);
    t28 = (t0 + 12136);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Always_131_11(char *t0)
{
    char t7[16];
    char t11[8];
    char t12[8];
    char t19[8];
    char t28[8];
    char t38[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 11176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 12152);
    *((int *)t2) = 1;
    t3 = (t0 + 11208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(132, ng0);

LAB5:    xsi_set_current_line(134, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(135, ng0);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng4)));
    xsi_vlogtype_concat(t7, 64, 64, 2U, t8, 32, t9, 32);
    t10 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t10, t7, 0, 0, 64, 0LL);
    goto LAB39;

LAB9:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    xsi_vlogtype_concat(t7, 64, 64, 2U, t3, 32, t4, 32);
    t8 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB39;

LAB11:    xsi_set_current_line(138, ng0);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    xsi_vlogtype_concat(t7, 64, 64, 2U, t3, 32, t4, 32);
    t8 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB39;

LAB13:    xsi_set_current_line(139, ng0);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    xsi_vlogtype_concat(t7, 64, 64, 2U, t3, 32, t4, 32);
    t8 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB39;

LAB15:    xsi_set_current_line(140, ng0);
    t3 = (t0 + 2488U);
    t4 = *((char **)t3);
    t3 = (t0 + 2648U);
    t8 = *((char **)t3);
    xsi_vlogtype_concat(t7, 64, 64, 2U, t8, 32, t4, 32);
    t3 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t3, t7, 0, 0, 64, 0LL);
    goto LAB39;

LAB17:    xsi_set_current_line(141, ng0);
    t3 = (t0 + 2808U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    xsi_vlogtype_concat(t7, 64, 64, 2U, t3, 32, t4, 32);
    t8 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB39;

LAB19:    xsi_set_current_line(143, ng0);
    t3 = (t0 + 3288U);
    t4 = *((char **)t3);
    t3 = (t0 + 3128U);
    t8 = *((char **)t3);
    xsi_vlogtype_concat(t7, 64, 64, 2U, t8, 32, t4, 32);
    t3 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t3, t7, 0, 0, 64, 0LL);
    goto LAB39;

LAB21:    xsi_set_current_line(144, ng0);
    t3 = (t0 + 3448U);
    t4 = *((char **)t3);
    t3 = (t0 + 3608U);
    t8 = *((char **)t3);
    xsi_vlogtype_concat(t7, 64, 64, 2U, t8, 32, t4, 32);
    t3 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t3, t7, 0, 0, 64, 0LL);
    goto LAB39;

LAB23:    xsi_set_current_line(146, ng0);

LAB40:    xsi_set_current_line(147, ng0);
    t3 = (t0 + 3768U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    xsi_vlogtype_concat(t7, 64, 64, 2U, t3, 32, t4, 32);
    t8 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 6168U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t12 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t2) = t18;
    t8 = (t0 + 6008U);
    t9 = *((char **)t8);
    memset(t19, 0, 8);
    t8 = (t19 + 4);
    t10 = (t9 + 4);
    t20 = *((unsigned int *)t9);
    t21 = (t20 >> 0);
    t22 = (t21 & 1);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t10);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t8) = t25;
    t26 = (t0 + 5848U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    t26 = (t28 + 4);
    t29 = (t27 + 4);
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 0);
    t32 = (t31 & 1);
    *((unsigned int *)t28) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 0);
    t35 = (t34 & 1);
    *((unsigned int *)t26) = t35;
    t36 = (t0 + 5688U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    t36 = (t38 + 4);
    t39 = (t37 + 4);
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 0);
    t42 = (t41 & 1);
    *((unsigned int *)t38) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 >> 0);
    t45 = (t44 & 1);
    *((unsigned int *)t36) = t45;
    t46 = (t0 + 5528U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    t46 = (t48 + 4);
    t49 = (t47 + 4);
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 0);
    t52 = (t51 & 1);
    *((unsigned int *)t48) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 >> 0);
    t55 = (t54 & 1);
    *((unsigned int *)t46) = t55;
    xsi_vlogtype_concat(t11, 5, 5, 5U, t48, 1, t38, 1, t28, 1, t19, 1, t12, 1);
    t56 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t56, t11, 0, 0, 5, 0LL);
    goto LAB39;

LAB25:    xsi_set_current_line(152, ng0);

LAB41:    xsi_set_current_line(153, ng0);
    t3 = (t0 + 3928U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    xsi_vlogtype_concat(t7, 64, 64, 2U, t3, 32, t4, 32);
    t8 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 6168U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t12 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t2) = t18;
    t8 = (t0 + 6008U);
    t9 = *((char **)t8);
    memset(t19, 0, 8);
    t8 = (t19 + 4);
    t10 = (t9 + 4);
    t20 = *((unsigned int *)t9);
    t21 = (t20 >> 1);
    t22 = (t21 & 1);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t10);
    t24 = (t23 >> 1);
    t25 = (t24 & 1);
    *((unsigned int *)t8) = t25;
    t26 = (t0 + 5848U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    t26 = (t28 + 4);
    t29 = (t27 + 4);
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 1);
    t32 = (t31 & 1);
    *((unsigned int *)t28) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 1);
    t35 = (t34 & 1);
    *((unsigned int *)t26) = t35;
    t36 = (t0 + 5688U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    t36 = (t38 + 4);
    t39 = (t37 + 4);
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 1);
    t42 = (t41 & 1);
    *((unsigned int *)t38) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 >> 1);
    t45 = (t44 & 1);
    *((unsigned int *)t36) = t45;
    t46 = (t0 + 5528U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    t46 = (t48 + 4);
    t49 = (t47 + 4);
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 1);
    t52 = (t51 & 1);
    *((unsigned int *)t48) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 >> 1);
    t55 = (t54 & 1);
    *((unsigned int *)t46) = t55;
    xsi_vlogtype_concat(t11, 5, 5, 5U, t48, 1, t38, 1, t28, 1, t19, 1, t12, 1);
    t56 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t56, t11, 0, 0, 5, 0LL);
    goto LAB39;

LAB27:    xsi_set_current_line(156, ng0);
    t3 = (t0 + 4088U);
    t4 = *((char **)t3);
    xsi_vlogtype_concat(t7, 64, 64, 1U, t4, 64);
    t3 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t3, t7, 0, 0, 64, 0LL);
    goto LAB39;

LAB29:    xsi_set_current_line(157, ng0);

LAB42:    xsi_set_current_line(158, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t8 = (t4 + 4);
    t9 = (t3 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t3);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t20 = (t15 | t18);
    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB46;

LAB43:    if (t23 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t11) = 1;

LAB46:    t26 = (t11 + 4);
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t8 = (t2 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    t20 = (t15 | t18);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB53;

LAB50:    if (t23 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t11) = 1;

LAB53:    t10 = (t11 + 4);
    t30 = *((unsigned int *)t10);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t8 = (t2 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    t20 = (t15 | t18);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB60;

LAB57:    if (t23 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t11) = 1;

LAB60:    t10 = (t11 + 4);
    t30 = *((unsigned int *)t10);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t8 = (t2 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    t20 = (t15 | t18);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB67;

LAB64:    if (t23 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t11) = 1;

LAB67:    t10 = (t11 + 4);
    t30 = *((unsigned int *)t10);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 0);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 3U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 3U);
    t8 = ((char*)((ng6)));
    memset(t12, 0, 8);
    t9 = (t11 + 4);
    t10 = (t8 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t8);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t10);
    t25 = (t23 ^ t24);
    t30 = (t22 | t25);
    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t10);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB74;

LAB71:    if (t33 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t12) = 1;

LAB74:    t27 = (t12 + 4);
    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t42 = *((unsigned int *)t12);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB75;

LAB76:
LAB77:
LAB70:
LAB63:
LAB56:
LAB49:    goto LAB39;

LAB31:    xsi_set_current_line(170, ng0);
    t3 = (t0 + 5048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    xsi_vlogtype_concat(t7, 64, 64, 2U, t3, 32, t4, 32);
    t8 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB39;

LAB33:    xsi_set_current_line(171, ng0);
    t3 = (t0 + 4888U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    xsi_vlogtype_concat(t7, 64, 64, 2U, t3, 32, t4, 32);
    t8 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB39;

LAB35:    xsi_set_current_line(172, ng0);
    t3 = (t0 + 5208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    xsi_vlogtype_concat(t7, 64, 64, 2U, t3, 32, t4, 32);
    t8 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 64, 0LL);
    goto LAB39;

LAB37:    xsi_set_current_line(173, ng0);
    t3 = (t0 + 5368U);
    t4 = *((char **)t3);
    t3 = (t0 + 6328U);
    t8 = *((char **)t3);
    t3 = ((char*)((ng4)));
    xsi_vlogtype_concat(t7, 64, 64, 3U, t3, 30, t8, 2, t4, 32);
    t9 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 64, 0LL);
    goto LAB39;

LAB45:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(159, ng0);
    t27 = (t0 + 4248U);
    t29 = *((char **)t27);
    t27 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t27, t29, 0, 0, 64, 0LL);
    goto LAB49;

LAB52:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(161, ng0);
    t26 = (t0 + 4568U);
    t27 = *((char **)t26);
    t26 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t26, t27, 0, 0, 64, 0LL);
    goto LAB56;

LAB59:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(163, ng0);
    t26 = (t0 + 4408U);
    t27 = *((char **)t26);
    t26 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t26, t27, 0, 0, 64, 0LL);
    goto LAB63;

LAB66:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(165, ng0);
    t26 = (t0 + 4728U);
    t27 = *((char **)t26);
    t26 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t26, t27, 0, 0, 64, 0LL);
    goto LAB70;

LAB73:    t26 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(167, ng0);
    t29 = (t0 + 7528);
    t36 = (t29 + 56U);
    t37 = *((char **)t36);
    t39 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t39, t37, 0, 0, 64, 0LL);
    goto LAB77;

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

LAB0:    t1 = (t0 + 11424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 12808);
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

LAB0:    t1 = (t0 + 11672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng5)));
    t3 = (t0 + 12872);
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


extern void work_m_00000000002609474968_0886308060_init()
{
	static char *pe[] = {(void *)Initial_42_0,(void *)Always_47_1,(void *)Cont_54_2,(void *)Cont_55_3,(void *)Cont_56_4,(void *)Cont_57_5,(void *)Cont_58_6,(void *)Cont_60_7,(void *)Cont_61_8,(void *)Cont_62_9,(void *)Cont_63_10,(void *)Always_131_11,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000002609474968_0886308060", "isim/Top_sim_isim_beh.exe.sim/work/m_00000000002609474968_0886308060.didat");
	xsi_register_executes(pe);
}
