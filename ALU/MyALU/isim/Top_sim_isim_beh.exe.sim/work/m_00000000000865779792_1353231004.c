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
static const char *ng0 = "E:/English Ruanjian/ISE/CO/compute/MyALU002/Top_sim.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {3U, 0U};
static int ng3[] = {15, 0};
static int ng4[] = {13, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {12, 0};
static int ng7[] = {10, 0};
static int ng8[] = {3, 0};
static int ng9[] = {1, 0};
static int ng10[] = {8, 0};
static int ng11[] = {9, 0};
static int ng12[] = {11, 0};
static int ng13[] = {7, 0};
static int ng14[] = {14, 0};
static unsigned int ng15[] = {1U, 0U};
static int ng16[] = {6, 0};



static void Initial_53_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    int t28;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);

LAB4:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    t11 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    t11 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB6:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB7;

LAB8:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB9;

LAB10:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB11:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB12;

LAB13:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB14:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB15;

LAB16:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB17:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB18;

LAB19:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB20:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB21;

LAB22:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB23:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB24;

LAB25:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB26:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB27;

LAB28:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB29:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB30;

LAB31:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB32:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB33;

LAB34:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB35:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB36;

LAB37:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB38:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB39;

LAB40:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB41:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB42;

LAB43:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB44:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB45;

LAB46:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng16)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB47:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB48;

LAB49:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB50:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB51;

LAB52:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB53;

LAB54:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB53:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB54;

LAB55:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB56:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB57;

LAB58:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB59:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB60;

LAB61:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB62:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB63;

LAB64:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB65:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB66;

LAB67:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB68;

LAB69:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB68:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB69;

LAB70:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB71;

LAB72:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB71:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB72;

LAB73:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB74:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB75;

LAB76:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB77;

LAB78:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB77:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB78;

LAB79:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB80;

LAB81:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB80:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB81;

LAB82:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB83;

LAB84:    goto LAB1;

LAB83:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB84;

}

static void Initial_88_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);

LAB4:    xsi_set_current_line(88, ng0);

LAB5:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    goto LAB4;

LAB8:    goto LAB1;

}


extern void work_m_00000000000865779792_1353231004_init()
{
	static char *pe[] = {(void *)Initial_53_0,(void *)Initial_88_1};
	xsi_register_didat("work_m_00000000000865779792_1353231004", "isim/Top_sim_isim_beh.exe.sim/work/m_00000000000865779792_1353231004.didat");
	xsi_register_executes(pe);
}
