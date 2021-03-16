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
static const char *ng0 = "E:/English Ruanjian/ISE/CO/compute/MyALU002/Div_32bits.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {0U, 0U, 0U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {64, 0};
static unsigned int ng5[] = {1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static int ng6[] = {1, 0};



static void Always_33_0(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 64, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t6, 64, 64, 2U, t2, 32, t3, 32);
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 64, 0LL);
    goto LAB2;

}

static void Always_40_1(char *t0)
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

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4072);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlogtype_concat(t4, 128, 128, 2U, t8, 64, t7, 64);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 128);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t4, 128, 128, 2U, t6, 64, t2, 64);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 128);
    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
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

LAB8:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t20, 64, t5, 63, 0);
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t20, 0, 0, 64, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t20, 64, t5, 127, 64);
    t6 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t6, t20, 0, 0, 64, 0LL);
    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);

LAB9:    xsi_set_current_line(46, ng0);
    t8 = ((char*)((ng1)));
    t9 = (t0 + 1928);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_get_part_select_value(t16, 127, t18, 126, 0);
    xsi_vlogtype_concat(t4, 128, 128, 2U, t16, 127, t8, 1);
    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 128);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t20, 64, t5, 127, 64);
    t6 = (t0 + 2408);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_unsigned_greatereq(t21, 64, t20, 64, t8, 64);
    t9 = (t21 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t21);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 128);

LAB12:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t5, 32, t6, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB6;

LAB10:    xsi_set_current_line(48, ng0);
    t17 = (t0 + 1928);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t22 = (t0 + 2088);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_unsigned_minus(t4, 128, t19, 128, t24, 128);
    t25 = ((char*)((ng5)));
    xsi_vlog_unsigned_add(t16, 128, t4, 128, t25, 128);
    t26 = (t0 + 1928);
    xsi_vlogvar_assign_value(t26, t16, 0, 0, 128);
    goto LAB12;

}


extern void work_m_00000000001293985162_3261647891_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Always_40_1};
	xsi_register_didat("work_m_00000000001293985162_3261647891", "isim/Top_sim_isim_beh.exe.sim/work/m_00000000001293985162_3261647891.didat");
	xsi_register_executes(pe);
}
