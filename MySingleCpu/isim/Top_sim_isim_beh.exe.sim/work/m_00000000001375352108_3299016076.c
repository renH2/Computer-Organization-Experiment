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
static const char *ng0 = "C:/Users/HP/Desktop/MySingleCpu/DataMEM.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {3, 0};
static unsigned int ng3[] = {0U, 255U};
static int ng4[] = {7, 0};
static int ng5[] = {0, 0};
static int ng6[] = {2, 0};
static int ng7[] = {15, 0};
static int ng8[] = {8, 0};
static int ng9[] = {1, 0};
static int ng10[] = {23, 0};
static int ng11[] = {16, 0};
static int ng12[] = {31, 0};
static int ng13[] = {24, 0};



static void Initial_41_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(41, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_47_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t21[8];
    char t30[8];
    char t37[8];
    char t38[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    int t47;
    char *t48;
    unsigned int t49;
    int t50;
    int t51;
    char *t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4304);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t6) != 0)
        goto LAB8;

LAB9:    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t14) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    memcpy(t4, t35, 8);

LAB18:    t36 = (t0 + 2248);
    t40 = (t0 + 2248);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng4)));
    t44 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t37, t38, t39, ((int*)(t42)), 2, t43, 32, 1, t44, 32, 1);
    t45 = (t37 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t38 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    t52 = (t39 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (!(t53));
    t55 = (t51 && t54);
    if (t55 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t2) != 0)
        goto LAB23;

LAB24:    t7 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB25;

LAB26:    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t7);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t7) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t5) > 0)
        goto LAB31;

LAB32:    memcpy(t4, t28, 8);

LAB33:    t29 = (t0 + 2248);
    t35 = (t0 + 2248);
    t36 = (t35 + 72U);
    t40 = *((char **)t36);
    t41 = ((char*)((ng7)));
    t42 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t37, t38, t39, ((int*)(t40)), 2, t41, 32, 1, t42, 32, 1);
    t43 = (t37 + 4);
    t46 = *((unsigned int *)t43);
    t47 = (!(t46));
    t44 = (t38 + 4);
    t49 = *((unsigned int *)t44);
    t50 = (!(t49));
    t51 = (t47 && t50);
    t45 = (t39 + 4);
    t53 = *((unsigned int *)t45);
    t54 = (!(t53));
    t55 = (t51 && t54);
    if (t55 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t2) != 0)
        goto LAB38;

LAB39:    t7 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB40;

LAB41:    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t7);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t7) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t5) > 0)
        goto LAB46;

LAB47:    memcpy(t4, t28, 8);

LAB48:    t29 = (t0 + 2248);
    t35 = (t0 + 2248);
    t36 = (t35 + 72U);
    t40 = *((char **)t36);
    t41 = ((char*)((ng10)));
    t42 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t37, t38, t39, ((int*)(t40)), 2, t41, 32, 1, t42, 32, 1);
    t43 = (t37 + 4);
    t46 = *((unsigned int *)t43);
    t47 = (!(t46));
    t44 = (t38 + 4);
    t49 = *((unsigned int *)t44);
    t50 = (!(t49));
    t51 = (t47 && t50);
    t45 = (t39 + 4);
    t53 = *((unsigned int *)t45);
    t54 = (!(t53));
    t55 = (t51 && t54);
    if (t55 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t2) != 0)
        goto LAB53;

LAB54:    t7 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB55;

LAB56:    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t7);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t7) > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t5) > 0)
        goto LAB61;

LAB62:    memcpy(t4, t26, 8);

LAB63:    t28 = (t0 + 2248);
    t29 = (t0 + 2248);
    t35 = (t29 + 72U);
    t36 = *((char **)t35);
    t40 = ((char*)((ng12)));
    t41 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t30, t37, t38, ((int*)(t36)), 2, t40, 32, 1, t41, 32, 1);
    t42 = (t30 + 4);
    t46 = *((unsigned int *)t42);
    t47 = (!(t46));
    t43 = (t37 + 4);
    t49 = *((unsigned int *)t43);
    t50 = (!(t49));
    t51 = (t47 && t50);
    t44 = (t38 + 4);
    t53 = *((unsigned int *)t44);
    t54 = (!(t53));
    t55 = (t51 && t54);
    if (t55 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t21, 0, 8);
    t6 = (t3 + 4);
    t7 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t15 = (t11 ^ t12);
    t16 = (t10 | t15);
    t17 = *((unsigned int *)t6);
    t31 = *((unsigned int *)t7);
    t32 = (t17 | t31);
    t33 = (~(t32));
    t34 = (t16 & t33);
    if (t34 != 0)
        goto LAB69;

LAB66:    if (t32 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t21) = 1;

LAB69:    memset(t5, 0, 8);
    t14 = (t21 + 4);
    t46 = *((unsigned int *)t14);
    t49 = (~(t46));
    t53 = *((unsigned int *)t21);
    t56 = (t53 & t49);
    t58 = (t56 & 1U);
    if (t58 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t14) != 0)
        goto LAB72;

LAB73:    t19 = (t5 + 4);
    t59 = *((unsigned int *)t5);
    t62 = *((unsigned int *)t19);
    t63 = (t59 || t62);
    if (t63 > 0)
        goto LAB74;

LAB75:    t64 = *((unsigned int *)t5);
    t65 = (~(t64));
    t66 = *((unsigned int *)t19);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t19) > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t5) > 0)
        goto LAB80;

LAB81:    memcpy(t4, t24, 8);

LAB82:    t25 = (t0 + 2408);
    xsi_vlogvar_assign_value(t25, t4, 0, 0, 32);
    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 2568);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t22 = (t0 + 2568);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2568);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 1688U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t29, 32, t28, 32);
    xsi_vlog_generic_get_array_select_value(t21, 8, t20, t24, t27, 2, 1, t30, 32, 2);
    goto LAB11;

LAB12:    t35 = ((char*)((ng3)));
    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 8, t21, 8, t35, 8);
    goto LAB18;

LAB16:    memcpy(t4, t21, 8);
    goto LAB18;

LAB19:    t56 = *((unsigned int *)t39);
    t57 = (t56 + 0);
    t58 = *((unsigned int *)t37);
    t59 = *((unsigned int *)t38);
    t60 = (t58 - t59);
    t61 = (t60 + 1);
    xsi_vlogvar_assign_value(t36, t4, t57, *((unsigned int *)t38), t61);
    goto LAB20;

LAB21:    *((unsigned int *)t5) = 1;
    goto LAB24;

LAB23:    t6 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB24;

LAB25:    t13 = (t0 + 2568);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    t19 = (t0 + 2568);
    t20 = (t19 + 72U);
    t22 = *((char **)t20);
    t23 = (t0 + 2568);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng6)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t27, 32, t26, 32);
    xsi_vlog_generic_get_array_select_value(t21, 8, t18, t22, t25, 2, 1, t30, 32, 2);
    goto LAB26;

LAB27:    t28 = ((char*)((ng3)));
    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t4, 8, t21, 8, t28, 8);
    goto LAB33;

LAB31:    memcpy(t4, t21, 8);
    goto LAB33;

LAB34:    t56 = *((unsigned int *)t39);
    t57 = (t56 + 0);
    t58 = *((unsigned int *)t37);
    t59 = *((unsigned int *)t38);
    t60 = (t58 - t59);
    t61 = (t60 + 1);
    xsi_vlogvar_assign_value(t29, t4, t57, *((unsigned int *)t38), t61);
    goto LAB35;

LAB36:    *((unsigned int *)t5) = 1;
    goto LAB39;

LAB38:    t6 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB39;

LAB40:    t13 = (t0 + 2568);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    t19 = (t0 + 2568);
    t20 = (t19 + 72U);
    t22 = *((char **)t20);
    t23 = (t0 + 2568);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng9)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t27, 32, t26, 32);
    xsi_vlog_generic_get_array_select_value(t21, 8, t18, t22, t25, 2, 1, t30, 32, 2);
    goto LAB41;

LAB42:    t28 = ((char*)((ng3)));
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t4, 8, t21, 8, t28, 8);
    goto LAB48;

LAB46:    memcpy(t4, t21, 8);
    goto LAB48;

LAB49:    t56 = *((unsigned int *)t39);
    t57 = (t56 + 0);
    t58 = *((unsigned int *)t37);
    t59 = *((unsigned int *)t38);
    t60 = (t58 - t59);
    t61 = (t60 + 1);
    xsi_vlogvar_assign_value(t29, t4, t57, *((unsigned int *)t38), t61);
    goto LAB50;

LAB51:    *((unsigned int *)t5) = 1;
    goto LAB54;

LAB53:    t6 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB54;

LAB55:    t13 = (t0 + 2568);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    t19 = (t0 + 2568);
    t20 = (t19 + 72U);
    t22 = *((char **)t20);
    t23 = (t0 + 2568);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t21, 8, t18, t22, t25, 2, 1, t27, 32, 2);
    goto LAB56;

LAB57:    t26 = ((char*)((ng3)));
    goto LAB58;

LAB59:    xsi_vlog_unsigned_bit_combine(t4, 8, t21, 8, t26, 8);
    goto LAB63;

LAB61:    memcpy(t4, t21, 8);
    goto LAB63;

LAB64:    t56 = *((unsigned int *)t38);
    t57 = (t56 + 0);
    t58 = *((unsigned int *)t30);
    t59 = *((unsigned int *)t37);
    t60 = (t58 - t59);
    t61 = (t60 + 1);
    xsi_vlogvar_assign_value(t28, t4, t57, *((unsigned int *)t37), t61);
    goto LAB65;

LAB68:    t13 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t5) = 1;
    goto LAB73;

LAB72:    t18 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB73;

LAB74:    t20 = (t0 + 1688U);
    t22 = *((char **)t20);
    goto LAB75;

LAB76:    t20 = (t0 + 2248);
    t23 = (t20 + 56U);
    t24 = *((char **)t23);
    goto LAB77;

LAB78:    xsi_vlog_unsigned_bit_combine(t4, 32, t22, 32, t24, 32);
    goto LAB82;

LAB80:    memcpy(t4, t22, 8);
    goto LAB82;

}

static void Always_58_2(char *t0)
{
    char t11[8];
    char t22[8];
    char t23[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4320);
    *((int *)t2) = 1;
    t3 = (t0 + 4016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(62, ng0);

LAB9:    xsi_set_current_line(63, ng0);
    t12 = (t0 + 1848U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 24);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 24);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 255U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 255U);
    t21 = (t0 + 2568);
    t24 = (t0 + 2568);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 2568);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = (t0 + 1688U);
    t31 = *((char **)t30);
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t31, 32, 2);
    t30 = (t22 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 2568);
    t12 = (t0 + 2568);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t21 = (t0 + 2568);
    t24 = (t21 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng9)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t27, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t42, 32, 2);
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t33 = (!(t16));
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t36 = (!(t17));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 2568);
    t12 = (t0 + 2568);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t21 = (t0 + 2568);
    t24 = (t21 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng6)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t27, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t42, 32, 2);
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t33 = (!(t16));
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t36 = (!(t17));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 2568);
    t12 = (t0 + 2568);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t21 = (t0 + 2568);
    t24 = (t21 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng2)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t27, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t42, 32, 2);
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t33 = (!(t16));
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t36 = (!(t17));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB16;

LAB17:    goto LAB8;

LAB10:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t11, 0, *((unsigned int *)t23), t41);
    goto LAB11;

LAB12:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t40 = (t18 - t19);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t23), t41);
    goto LAB13;

LAB14:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t40 = (t18 - t19);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t23), t41);
    goto LAB15;

LAB16:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t40 = (t18 - t19);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t23), t41);
    goto LAB17;

}


extern void work_m_00000000001375352108_3299016076_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Always_47_1,(void *)Always_58_2};
	xsi_register_didat("work_m_00000000001375352108_3299016076", "isim/Top_sim_isim_beh.exe.sim/work/m_00000000001375352108_3299016076.didat");
	xsi_register_executes(pe);
}
