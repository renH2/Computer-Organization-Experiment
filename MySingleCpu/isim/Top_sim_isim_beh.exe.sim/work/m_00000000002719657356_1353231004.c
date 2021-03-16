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
static const char *ng0 = "C:/Users/HP/Desktop/MySingleCpu/Top_sim.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {5, 0};
static unsigned int ng4[] = {7U, 0U};
static int ng5[] = {15, 0};
static int ng6[] = {13, 0};
static unsigned int ng7[] = {29U, 0U};
static int ng8[] = {4, 0};



static void Initial_52_0(char *t0)
{
    char t4[8];
    char t14[8];
    char t23[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);

LAB4:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t6) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 5);
    t9 = (t8 & 1);
    *((unsigned int *)t14) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 5);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    memset(t4, 0, 8);
    t13 = (t14 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t13) == 0)
        goto LAB9;

LAB11:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;

LAB12:    t22 = (t0 + 2568);
    t24 = (t0 + 2568);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t23, t26, 2, t27, 32, 1);
    t28 = (t23 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    if (t30 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng5)));
    t21 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t4, t14, t23, ((int*)(t12)), 2, t13, 32, 1, t21, 32, 1);
    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t30 = (!(t7));
    t24 = (t14 + 4);
    t8 = *((unsigned int *)t24);
    t31 = (!(t8));
    t32 = (t30 && t31);
    t25 = (t23 + 4);
    t9 = *((unsigned int *)t25);
    t33 = (!(t9));
    t34 = (t32 && t33);
    if (t34 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2568);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng8)));
    t21 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t4, t14, t23, ((int*)(t12)), 2, t13, 32, 1, t21, 32, 1);
    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t30 = (!(t7));
    t24 = (t14 + 4);
    t8 = *((unsigned int *)t24);
    t31 = (!(t8));
    t32 = (t30 && t31);
    t25 = (t23 + 4);
    t9 = *((unsigned int *)t25);
    t33 = (!(t9));
    t34 = (t32 && t33);
    if (t34 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(63, ng0);

LAB19:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB20;

LAB1:    return;
LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB13:    xsi_vlogvar_assign_value(t22, t4, 0, *((unsigned int *)t23), 1);
    goto LAB14;

LAB15:    t10 = *((unsigned int *)t23);
    t35 = (t10 + 0);
    t11 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t14);
    t36 = (t11 - t15);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t3, t2, t35, *((unsigned int *)t14), t37);
    goto LAB16;

LAB17:    t10 = *((unsigned int *)t23);
    t35 = (t10 + 0);
    t11 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t14);
    t36 = (t11 - t15);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t3, t2, t35, *((unsigned int *)t14), t37);
    goto LAB18;

LAB20:    xsi_set_current_line(64, ng0);

LAB21:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t12) == 0)
        goto LAB22;

LAB24:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB25:    t21 = (t0 + 2248);
    xsi_vlogvar_assign_value(t21, t4, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 5);
    t9 = (t8 & 1);
    *((unsigned int *)t14) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 5);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    memset(t4, 0, 8);
    t13 = (t14 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t13) == 0)
        goto LAB26;

LAB28:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;

LAB29:    t22 = (t0 + 2568);
    t24 = (t0 + 2568);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t23, t26, 2, t27, 32, 1);
    t28 = (t23 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    if (t30 == 1)
        goto LAB30;

LAB31:    goto LAB19;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB30:    xsi_vlogvar_assign_value(t22, t4, 0, *((unsigned int *)t23), 1);
    goto LAB31;

LAB32:    goto LAB1;

}


extern void work_m_00000000002719657356_1353231004_init()
{
	static char *pe[] = {(void *)Initial_52_0};
	xsi_register_didat("work_m_00000000002719657356_1353231004", "isim/Top_sim_isim_beh.exe.sim/work/m_00000000002719657356_1353231004.didat");
	xsi_register_executes(pe);
}
