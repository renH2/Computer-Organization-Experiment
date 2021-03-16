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
static const char *ng0 = "C:/Users/HP/Desktop/MySingleCpu/PcAdd.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {4, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};



static void Initial_32_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_39_1(char *t0)
{
    char t4[8];
    char t28[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    int t30;
    char *t32;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t4) = 1;

LAB17:    t13 = (t4 + 4);
    t23 = *((unsigned int *)t13);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);

LAB13:    xsi_set_current_line(42, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    goto LAB12;

LAB16:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(44, ng0);

LAB21:    xsi_set_current_line(45, ng0);
    t19 = (t0 + 1848U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng3)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t20, 32, t19, 32);
    t29 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB22:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t30 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB20;

LAB23:    xsi_set_current_line(47, ng0);
    t5 = (t0 + 1848U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 32, t5, 32);
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 32, 0LL);
    goto LAB31;

LAB25:    xsi_set_current_line(48, ng0);
    t5 = (t0 + 1848U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 32, t5, 32);
    t12 = (t0 + 1528U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng3)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_multiply(t28, 32, t13, 32, t12, 32);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t4, 32, t28, 32);
    t19 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t19, t31, 0, 0, 32, 0LL);
    goto LAB31;

LAB27:    xsi_set_current_line(49, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t0 + 1688U);
    t12 = *((char **)t6);
    t6 = (t0 + 2568);
    t13 = (t6 + 56U);
    t19 = *((char **)t13);
    memset(t28, 0, 8);
    t20 = (t28 + 4);
    t29 = (t19 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (t7 >> 28);
    *((unsigned int *)t28) = t8;
    t9 = *((unsigned int *)t29);
    t10 = (t9 >> 28);
    *((unsigned int *)t20) = t10;
    t11 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t11 & 15U);
    t14 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t14 & 15U);
    xsi_vlogtype_concat(t4, 32, 32, 3U, t28, 4, t12, 26, t5, 2);
    t32 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t32, t4, 0, 0, 32, 0LL);
    goto LAB31;

LAB29:    xsi_set_current_line(50, ng0);
    t5 = (t0 + 2408);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 32, 0LL);
    goto LAB31;

}


extern void work_m_00000000002768246497_0582474567_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Always_39_1};
	xsi_register_didat("work_m_00000000002768246497_0582474567", "isim/Top_sim_isim_beh.exe.sim/work/m_00000000002768246497_0582474567.didat");
	xsi_register_executes(pe);
}
