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
static const char *ng0 = "G:/multi_cycle/control.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {16U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {35U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {43U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {13U, 0U};
static unsigned int ng15[] = {14U, 0U};
static unsigned int ng16[] = {10U, 0U};
static unsigned int ng17[] = {15U, 0U};
static unsigned int ng18[] = {9U, 0U};
static unsigned int ng19[] = {31U, 0U};
static unsigned int ng20[] = {11U, 0U};
static unsigned int ng21[] = {606336U, 0U};
static unsigned int ng22[] = {384U, 0U};
static unsigned int ng23[] = {516U, 0U};
static unsigned int ng24[] = {768U, 0U};
static unsigned int ng25[] = {772U, 0U};
static unsigned int ng26[] = {263690U, 0U};
static unsigned int ng27[] = {526336U, 0U};
static unsigned int ng28[] = {196609U, 0U};
static unsigned int ng29[] = {163841U, 0U};
static unsigned int ng30[] = {80U, 0U};
static unsigned int ng31[] = {64U, 0U};
static unsigned int ng32[] = {4160U, 0U};
static unsigned int ng33[] = {8256U, 0U};
static unsigned int ng34[] = {263682U, 0U};
static unsigned int ng35[] = {538720U, 0U};
static unsigned int ng36[] = {527360U, 0U};
static unsigned int ng37[] = {32U, 0U};
static unsigned int ng38[] = {34U, 0U};
static unsigned int ng39[] = {36U, 0U};
static unsigned int ng40[] = {37U, 0U};
static unsigned int ng41[] = {39U, 0U};
static unsigned int ng42[] = {42U, 0U};



static void Cont_70_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 10784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 9864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11976);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 11848);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_73_1(char *t0)
{
    char t16[8];
    char t19[8];
    char t31[8];
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
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    unsigned int t17;
    int t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 11032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 11864);
    *((int *)t2) = 1;
    t3 = (t0 + 11064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 6104U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(75, ng0);

LAB9:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 9864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t5, 5);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng20)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng18)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB45;

LAB46:
LAB48:
LAB47:    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB49:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(74, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 5, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(78, ng0);

LAB50:    xsi_set_current_line(79, ng0);
    t11 = (t0 + 6264U);
    t12 = *((char **)t11);
    t11 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB53:    goto LAB49;

LAB13:    xsi_set_current_line(82, ng0);

LAB54:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 6744U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 26);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 26);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 63U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 63U);

LAB55:    t12 = ((char*)((ng1)));
    t18 = xsi_vlog_unsigned_case_compare(t16, 6, t12, 6);
    if (t18 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t13 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t13 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t13 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t13 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t13 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t13 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t13 == 1)
        goto LAB70;

LAB71:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t13 == 1)
        goto LAB72;

LAB73:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t13 == 1)
        goto LAB74;

LAB75:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t13 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t13 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t13 == 1)
        goto LAB80;

LAB81:
LAB83:
LAB82:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB84:    goto LAB49;

LAB15:    xsi_set_current_line(106, ng0);

LAB93:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 6744U);
    t5 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 26);
    *((unsigned int *)t31) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 26);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t10 & 63U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 63U);

LAB94:    t12 = ((char*)((ng6)));
    t18 = xsi_vlog_unsigned_case_compare(t31, 6, t12, 6);
    if (t18 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t31, 6, t2, 6);
    if (t13 == 1)
        goto LAB97;

LAB98:
LAB100:
LAB99:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB101:    goto LAB49;

LAB17:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB19:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB21:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB23:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB25:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB27:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB29:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB31:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB33:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB35:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB37:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB39:    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB41:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB43:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB45:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB49;

LAB51:    xsi_set_current_line(79, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 5, 0LL);
    goto LAB53;

LAB56:    xsi_set_current_line(85, ng0);
    t14 = (t0 + 6744U);
    t15 = *((char **)t14);
    memset(t19, 0, 8);
    t14 = (t19 + 4);
    t20 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = (t21 >> 0);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t14) = t24;
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t25 & 63U);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t26 & 63U);

LAB85:    t27 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t19, 6, t27, 6);
    if (t28 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t19, 6, t2, 6);
    if (t13 == 1)
        goto LAB88;

LAB89:
LAB91:
LAB90:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB92:    goto LAB84;

LAB58:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB84;

LAB60:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB84;

LAB62:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB84;

LAB64:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB84;

LAB66:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB84;

LAB68:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB84;

LAB70:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB84;

LAB72:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB84;

LAB74:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB84;

LAB76:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB84;

LAB78:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB84;

LAB80:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB84;

LAB86:    xsi_set_current_line(86, ng0);
    t29 = ((char*)((ng4)));
    t30 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 5, 0LL);
    goto LAB92;

LAB88:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB92;

LAB95:    xsi_set_current_line(108, ng0);
    t14 = ((char*)((ng20)));
    t15 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 5, 0LL);
    goto LAB101;

LAB97:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 9864);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB101;

}

static void Always_134_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 11280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 11880);
    *((int *)t2) = 1;
    t3 = (t0 + 11312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(134, ng0);

LAB5:    xsi_set_current_line(135, ng0);
    t4 = (t0 + 9864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB39;

LAB40:
LAB42:
LAB41:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t4 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t4, t2, 1, 0, 2, 0LL);
    t5 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t5, t2, 3, 0, 1, 0LL);
    t7 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t7, t2, 4, 0, 2, 0LL);
    t9 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t9, t2, 6, 0, 1, 0LL);
    t10 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t10, t2, 7, 0, 2, 0LL);
    t11 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t11, t2, 9, 0, 1, 0LL);
    t12 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t12, t2, 10, 0, 2, 0LL);
    t13 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t13, t2, 12, 0, 2, 0LL);
    t14 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t14, t2, 14, 0, 1, 0LL);
    t15 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t15, t2, 15, 0, 1, 0LL);
    t16 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t16, t2, 16, 0, 1, 0LL);
    t17 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t17, t2, 17, 0, 1, 0LL);
    t18 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t18, t2, 18, 0, 1, 0LL);
    t19 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t19, t2, 19, 0, 1, 0LL);

LAB43:    goto LAB2;

LAB7:    xsi_set_current_line(136, ng0);
    t9 = ((char*)((ng21)));
    t10 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    t11 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t11, t9, 1, 0, 2, 0LL);
    t12 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t12, t9, 3, 0, 1, 0LL);
    t13 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t13, t9, 4, 0, 2, 0LL);
    t14 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t14, t9, 6, 0, 1, 0LL);
    t15 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t15, t9, 7, 0, 2, 0LL);
    t16 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t16, t9, 9, 0, 1, 0LL);
    t17 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t17, t9, 10, 0, 2, 0LL);
    t18 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t18, t9, 12, 0, 2, 0LL);
    t19 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t19, t9, 14, 0, 1, 0LL);
    t20 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t20, t9, 15, 0, 1, 0LL);
    t21 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t21, t9, 16, 0, 1, 0LL);
    t22 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t22, t9, 17, 0, 1, 0LL);
    t23 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t23, t9, 18, 0, 1, 0LL);
    t24 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t24, t9, 19, 0, 1, 0LL);
    goto LAB43;

LAB9:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB11:    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB13:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB15:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB17:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB19:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB21:    xsi_set_current_line(143, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB23:    xsi_set_current_line(144, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB25:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng30)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB27:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng31)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB29:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng32)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB31:    xsi_set_current_line(148, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB33:    xsi_set_current_line(149, ng0);
    t3 = ((char*)((ng33)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB35:    xsi_set_current_line(150, ng0);
    t3 = ((char*)((ng34)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB37:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng35)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

LAB39:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng36)));
    t4 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    t5 = (t0 + 9704);
    xsi_vlogvar_wait_assign_value(t5, t3, 1, 0, 2, 0LL);
    t7 = (t0 + 8744);
    xsi_vlogvar_wait_assign_value(t7, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 8904);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 2, 0LL);
    t10 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t10, t3, 6, 0, 1, 0LL);
    t11 = (t0 + 9224);
    xsi_vlogvar_wait_assign_value(t11, t3, 7, 0, 2, 0LL);
    t12 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t12, t3, 9, 0, 1, 0LL);
    t13 = (t0 + 9384);
    xsi_vlogvar_wait_assign_value(t13, t3, 10, 0, 2, 0LL);
    t14 = (t0 + 9064);
    xsi_vlogvar_wait_assign_value(t14, t3, 12, 0, 2, 0LL);
    t15 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t15, t3, 14, 0, 1, 0LL);
    t16 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t16, t3, 15, 0, 1, 0LL);
    t17 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t17, t3, 16, 0, 1, 0LL);
    t18 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t18, t3, 17, 0, 1, 0LL);
    t19 = (t0 + 8584);
    xsi_vlogvar_wait_assign_value(t19, t3, 18, 0, 1, 0LL);
    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t3, 19, 0, 1, 0LL);
    goto LAB43;

}

static void Always_157_3(char *t0)
{
    char t11[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 11528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 11896);
    *((int *)t2) = 1;
    t3 = (t0 + 11560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(157, ng0);

LAB5:    xsi_set_current_line(158, ng0);
    t4 = (t0 + 9704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(159, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 9544);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 3);
    goto LAB13;

LAB9:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 9544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB13;

LAB11:    xsi_set_current_line(162, ng0);
    t3 = (t0 + 6744U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 26);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 26);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 63U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 63U);

LAB14:    t7 = ((char*)((ng1)));
    t18 = xsi_vlog_unsigned_case_compare(t11, 6, t7, 6);
    if (t18 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t8 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB13;

LAB15:    xsi_set_current_line(164, ng0);
    t9 = (t0 + 6744U);
    t10 = *((char **)t9);
    memset(t19, 0, 8);
    t9 = (t19 + 4);
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t10);
    t22 = (t21 >> 0);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t9) = t24;
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t25 & 63U);
    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 63U);

LAB28:    t27 = ((char*)((ng37)));
    t28 = xsi_vlog_unsigned_case_compare(t19, 6, t27, 6);
    if (t28 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng38)));
    t8 = xsi_vlog_unsigned_case_compare(t19, 6, t2, 6);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng39)));
    t8 = xsi_vlog_unsigned_case_compare(t19, 6, t2, 6);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng40)));
    t8 = xsi_vlog_unsigned_case_compare(t19, 6, t2, 6);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng41)));
    t8 = xsi_vlog_unsigned_case_compare(t19, 6, t2, 6);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng42)));
    t8 = xsi_vlog_unsigned_case_compare(t19, 6, t2, 6);
    if (t8 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t19, 6, t2, 6);
    if (t8 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t19, 6, t2, 6);
    if (t8 == 1)
        goto LAB43;

LAB44:
LAB46:
LAB45:    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB47:    goto LAB27;

LAB17:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 9544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB27;

LAB19:    xsi_set_current_line(176, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 9544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB27;

LAB21:    xsi_set_current_line(177, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 9544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB27;

LAB23:    xsi_set_current_line(178, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 9544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB27;

LAB25:    xsi_set_current_line(179, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 9544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB27;

LAB29:    xsi_set_current_line(165, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 9544);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB47;

LAB31:    xsi_set_current_line(166, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 9544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB47;

LAB33:    xsi_set_current_line(167, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 9544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB47;

LAB35:    xsi_set_current_line(168, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 9544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB47;

LAB37:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 9544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB47;

LAB39:    xsi_set_current_line(170, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 9544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB47;

LAB41:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 9544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB47;

LAB43:    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 9544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB47;

}


extern void work_m_00000000002456021402_3037777339_init()
{
	static char *pe[] = {(void *)Cont_70_0,(void *)Always_73_1,(void *)Always_134_2,(void *)Always_157_3};
	xsi_register_didat("work_m_00000000002456021402_3037777339", "isim/toptest_isim_beh.exe.sim/work/m_00000000002456021402_3037777339.didat");
	xsi_register_executes(pe);
}
