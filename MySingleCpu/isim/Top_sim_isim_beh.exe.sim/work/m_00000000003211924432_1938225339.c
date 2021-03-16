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
static const char *ng0 = "C:/Users/HP/Desktop/MySingleCpu/ControlUnit.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {63U, 0U};
static unsigned int ng4[] = {38U, 0U};
static unsigned int ng5[] = {39U, 0U};
static unsigned int ng6[] = {8U, 0U};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {13U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {32U, 0U};
static unsigned int ng11[] = {34U, 0U};
static unsigned int ng12[] = {1U, 0U};
static unsigned int ng13[] = {36U, 0U};
static unsigned int ng14[] = {4U, 0U};
static unsigned int ng15[] = {37U, 0U};
static unsigned int ng16[] = {2U, 0U};
static unsigned int ng17[] = {5U, 0U};
static unsigned int ng18[] = {10U, 0U};
static unsigned int ng19[] = {43U, 0U};
static unsigned int ng20[] = {35U, 0U};



static void Initial_40_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_48_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    int t42;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5016);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t5, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t24) != 0)
        goto LAB12;

LAB13:    t31 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t31) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t5) > 0)
        goto LAB20;

LAB21:    memcpy(t4, t40, 8);

LAB22:    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t4, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t3 + 4);
    t7 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB26;

LAB23:    if (t20 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t8) = 1;

LAB26:    memset(t5, 0, 8);
    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t10) != 0)
        goto LAB29;

LAB30:    t24 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t24);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB31;

LAB32:    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t24);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t24) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t5) > 0)
        goto LAB37;

LAB38:    memcpy(t4, t31, 8);

LAB39:    t35 = (t0 + 2088);
    xsi_vlogvar_assign_value(t35, t4, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t6 = (t3 + 4);
    t7 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB43;

LAB40:    if (t20 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t8) = 1;

LAB43:    memset(t5, 0, 8);
    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t10) != 0)
        goto LAB46;

LAB47:    t24 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t24);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB48;

LAB49:    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t24);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t24) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t5) > 0)
        goto LAB54;

LAB55:    memcpy(t4, t31, 8);

LAB56:    t35 = (t0 + 3368);
    xsi_vlogvar_assign_value(t35, t4, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t3 + 4);
    t7 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB60;

LAB57:    if (t20 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t8) = 1;

LAB60:    memset(t5, 0, 8);
    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t10) != 0)
        goto LAB63;

LAB64:    t24 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t24);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB65;

LAB66:    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t24);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t24) > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t5) > 0)
        goto LAB71;

LAB72:    memcpy(t4, t31, 8);

LAB73:    t35 = (t0 + 3208);
    xsi_vlogvar_assign_value(t35, t4, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t3 + 4);
    t7 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB77;

LAB74:    if (t20 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t8) = 1;

LAB77:    memset(t5, 0, 8);
    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t10) != 0)
        goto LAB80;

LAB81:    t24 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t24);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB82;

LAB83:    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t24);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t24) > 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t5) > 0)
        goto LAB88;

LAB89:    memcpy(t4, t31, 8);

LAB90:    t35 = (t0 + 3528);
    xsi_vlogvar_assign_value(t35, t4, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB91:    t2 = ((char*)((ng6)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t42 == 1)
        goto LAB92;

LAB93:    t2 = ((char*)((ng8)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t42 == 1)
        goto LAB94;

LAB95:    t2 = ((char*)((ng7)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t42 == 1)
        goto LAB96;

LAB97:    t2 = ((char*)((ng17)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t42 == 1)
        goto LAB98;

LAB99:    t2 = ((char*)((ng18)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t42 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng14)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t42 == 1)
        goto LAB102;

LAB103:    t2 = ((char*)((ng19)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t42 == 1)
        goto LAB104;

LAB105:    t2 = ((char*)((ng20)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t42 == 1)
        goto LAB106;

LAB107:    t2 = ((char*)((ng16)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t42 == 1)
        goto LAB108;

LAB109:    t2 = ((char*)((ng3)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t42 == 1)
        goto LAB110;

LAB111:
LAB112:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t5) = 1;
    goto LAB13;

LAB12:    t30 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB13;

LAB14:    t35 = ((char*)((ng2)));
    goto LAB15;

LAB16:    t40 = ((char*)((ng1)));
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t4, 32, t35, 32, t40, 32);
    goto LAB22;

LAB20:    memcpy(t4, t35, 8);
    goto LAB22;

LAB25:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t5) = 1;
    goto LAB30;

LAB29:    t23 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB30;

LAB31:    t30 = ((char*)((ng2)));
    goto LAB32;

LAB33:    t31 = ((char*)((ng1)));
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t4, 32, t30, 32, t31, 32);
    goto LAB39;

LAB37:    memcpy(t4, t30, 8);
    goto LAB39;

LAB42:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t5) = 1;
    goto LAB47;

LAB46:    t23 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB47;

LAB48:    t30 = ((char*)((ng1)));
    goto LAB49;

LAB50:    t31 = ((char*)((ng2)));
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t4, 32, t30, 32, t31, 32);
    goto LAB56;

LAB54:    memcpy(t4, t30, 8);
    goto LAB56;

LAB59:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB60;

LAB61:    *((unsigned int *)t5) = 1;
    goto LAB64;

LAB63:    t23 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB64;

LAB65:    t30 = ((char*)((ng1)));
    goto LAB66;

LAB67:    t31 = ((char*)((ng2)));
    goto LAB68;

LAB69:    xsi_vlog_unsigned_bit_combine(t4, 32, t30, 32, t31, 32);
    goto LAB73;

LAB71:    memcpy(t4, t30, 8);
    goto LAB73;

LAB76:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB77;

LAB78:    *((unsigned int *)t5) = 1;
    goto LAB81;

LAB80:    t23 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB81;

LAB82:    t30 = ((char*)((ng1)));
    goto LAB83;

LAB84:    t31 = ((char*)((ng2)));
    goto LAB85;

LAB86:    xsi_vlog_unsigned_bit_combine(t4, 32, t30, 32, t31, 32);
    goto LAB90;

LAB88:    memcpy(t4, t30, 8);
    goto LAB90;

LAB92:    xsi_set_current_line(59, ng0);

LAB113:    xsi_set_current_line(60, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB112;

LAB94:    xsi_set_current_line(70, ng0);

LAB114:    xsi_set_current_line(71, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng9)));
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB112;

LAB96:    xsi_set_current_line(80, ng0);

LAB115:    xsi_set_current_line(81, ng0);
    t6 = (t0 + 1368U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB119;

LAB116:    if (t20 != 0)
        goto LAB118;

LAB117:    *((unsigned int *)t4) = 1;

LAB119:    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1368U);
    t6 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t9 = (t2 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB127;

LAB124:    if (t20 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t4) = 1;

LAB127:    t23 = (t4 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB128;

LAB129:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1368U);
    t6 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t9 = (t2 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB135;

LAB132:    if (t20 != 0)
        goto LAB134;

LAB133:    *((unsigned int *)t4) = 1;

LAB135:    t23 = (t4 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB136;

LAB137:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1368U);
    t6 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t9 = (t2 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB143;

LAB140:    if (t20 != 0)
        goto LAB142;

LAB141:    *((unsigned int *)t4) = 1;

LAB143:    t23 = (t4 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB144;

LAB145:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1368U);
    t6 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t9 = (t2 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB151;

LAB148:    if (t20 != 0)
        goto LAB150;

LAB149:    *((unsigned int *)t4) = 1;

LAB151:    t23 = (t4 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB152;

LAB153:
LAB154:
LAB146:
LAB138:
LAB130:
LAB122:    goto LAB112;

LAB98:    xsi_set_current_line(130, ng0);

LAB156:    xsi_set_current_line(131, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t2) != 0)
        goto LAB159;

LAB160:    t9 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t9);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB161;

LAB162:    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t9);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB163;

LAB164:    if (*((unsigned int *)t9) > 0)
        goto LAB165;

LAB166:    if (*((unsigned int *)t5) > 0)
        goto LAB167;

LAB168:    memcpy(t4, t23, 8);

LAB169:    t24 = (t0 + 2888);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 2);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng12)));
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB112;

LAB100:    xsi_set_current_line(141, ng0);

LAB170:    xsi_set_current_line(142, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng17)));
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB112;

LAB102:    xsi_set_current_line(152, ng0);

LAB171:    xsi_set_current_line(153, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB172;

LAB173:    if (*((unsigned int *)t2) != 0)
        goto LAB174;

LAB175:    t9 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t9);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB176;

LAB177:    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t9);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t9) > 0)
        goto LAB180;

LAB181:    if (*((unsigned int *)t5) > 0)
        goto LAB182;

LAB183:    memcpy(t4, t23, 8);

LAB184:    t24 = (t0 + 2888);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 2);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng12)));
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB112;

LAB104:    xsi_set_current_line(163, ng0);

LAB185:    xsi_set_current_line(164, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB112;

LAB106:    xsi_set_current_line(174, ng0);

LAB186:    xsi_set_current_line(175, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB112;

LAB108:    xsi_set_current_line(185, ng0);

LAB187:    xsi_set_current_line(186, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng16)));
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB112;

LAB110:    xsi_set_current_line(196, ng0);

LAB188:    xsi_set_current_line(197, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng9)));
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB112;

LAB118:    t23 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB119;

LAB120:    xsi_set_current_line(81, ng0);

LAB123:    xsi_set_current_line(82, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 1928);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB122;

LAB126:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB127;

LAB128:    xsi_set_current_line(90, ng0);

LAB131:    xsi_set_current_line(91, ng0);
    t24 = ((char*)((ng1)));
    t30 = (t0 + 1928);
    xsi_vlogvar_assign_value(t30, t24, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng12)));
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB130;

LAB134:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB135;

LAB136:    xsi_set_current_line(99, ng0);

LAB139:    xsi_set_current_line(100, ng0);
    t24 = ((char*)((ng2)));
    t30 = (t0 + 1928);
    xsi_vlogvar_assign_value(t30, t24, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng14)));
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB138;

LAB142:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB143;

LAB144:    xsi_set_current_line(108, ng0);

LAB147:    xsi_set_current_line(109, ng0);
    t24 = ((char*)((ng2)));
    t30 = (t0 + 1928);
    xsi_vlogvar_assign_value(t30, t24, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng9)));
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB146;

LAB150:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB151;

LAB152:    xsi_set_current_line(117, ng0);

LAB155:    xsi_set_current_line(118, ng0);
    t24 = ((char*)((ng2)));
    t30 = (t0 + 1928);
    xsi_vlogvar_assign_value(t30, t24, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng16)));
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 3);
    goto LAB154;

LAB157:    *((unsigned int *)t5) = 1;
    goto LAB160;

LAB159:    t7 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB160;

LAB161:    t10 = ((char*)((ng7)));
    goto LAB162;

LAB163:    t23 = ((char*)((ng12)));
    goto LAB164;

LAB165:    xsi_vlog_unsigned_bit_combine(t4, 2, t10, 2, t23, 2);
    goto LAB169;

LAB167:    memcpy(t4, t10, 8);
    goto LAB169;

LAB172:    *((unsigned int *)t5) = 1;
    goto LAB175;

LAB174:    t7 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB175;

LAB176:    t10 = ((char*)((ng12)));
    goto LAB177;

LAB178:    t23 = ((char*)((ng7)));
    goto LAB179;

LAB180:    xsi_vlog_unsigned_bit_combine(t4, 2, t10, 2, t23, 2);
    goto LAB184;

LAB182:    memcpy(t4, t10, 8);
    goto LAB184;

}


extern void work_m_00000000003211924432_1938225339_init()
{
	static char *pe[] = {(void *)Initial_40_0,(void *)Always_48_1};
	xsi_register_didat("work_m_00000000003211924432_1938225339", "isim/Top_sim_isim_beh.exe.sim/work/m_00000000003211924432_1938225339.didat");
	xsi_register_executes(pe);
}
