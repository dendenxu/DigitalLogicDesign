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
static const char *ng0 = "D:/Documents/Materials/DENDEN/PROJ/Verilog/kao_ban_zi/collision_check.v";
static int ng1[] = {0, 0};
static int ng2[] = {10, 0};
static int ng3[] = {1, 0};



static void Initial_16_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(16, ng0);

LAB2:    xsi_set_current_line(17, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2656);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(18, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2816);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_20_1(char *t0)
{
    char t13[8];
    char t16[8];
    char t26[8];
    char t36[8];
    char t37[8];
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
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 4464);
    *((int *)t2) = 1;
    t3 = (t0 + 4176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 2256U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(24, ng0);

LAB10:    xsi_set_current_line(25, ng0);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB11:    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1776U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB13;

LAB12:    t12 = (t11 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB13;

LAB16:    if (*((unsigned int *)t4) < *((unsigned int *)t11))
        goto LAB14;

LAB15:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(28, ng0);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB27:    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1936U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB29;

LAB28:    t12 = (t11 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB29;

LAB32:    if (*((unsigned int *)t4) < *((unsigned int *)t11))
        goto LAB30;

LAB31:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB33;

LAB34:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(21, ng0);

LAB9:    xsi_set_current_line(22, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB13:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB15;

LAB14:    *((unsigned int *)t13) = 1;
    goto LAB15;

LAB17:    xsi_set_current_line(25, ng0);

LAB19:    xsi_set_current_line(26, ng0);
    t17 = (t0 + 1616U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t17) = t23;
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 1023U);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 1023U);
    t27 = (t0 + 1456U);
    t28 = *((char **)t27);
    t27 = (t0 + 1416U);
    t29 = (t27 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 2976);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 608);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_multiply(t36, 32, t33, 4, t35, 32);
    t34 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t26, 10, t28, ((int*)(t30)), 2, t36, 32, 2, t34, 32, 1, 1);
    memset(t37, 0, 8);
    t38 = (t16 + 4);
    t39 = (t26 + 4);
    t40 = *((unsigned int *)t16);
    t41 = *((unsigned int *)t26);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB23;

LAB20:    if (t49 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t37) = 1;

LAB23:    t53 = (t37 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 2976);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 4);
    goto LAB11;

LAB22:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(26, ng0);
    t59 = ((char*)((ng3)));
    t60 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t60, t59, 0, 0, 1, 0LL);
    goto LAB26;

LAB29:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB31;

LAB30:    *((unsigned int *)t13) = 1;
    goto LAB31;

LAB33:    xsi_set_current_line(28, ng0);

LAB35:    xsi_set_current_line(29, ng0);
    t17 = (t0 + 1456U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t17) = t23;
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 1023U);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 1023U);
    t27 = (t0 + 1616U);
    t28 = *((char **)t27);
    t27 = (t0 + 1576U);
    t29 = (t27 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 2976);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 608);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_multiply(t36, 32, t33, 4, t35, 32);
    t34 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t26, 10, t28, ((int*)(t30)), 2, t36, 32, 2, t34, 32, 1, 1);
    memset(t37, 0, 8);
    t38 = (t16 + 4);
    t39 = (t26 + 4);
    t40 = *((unsigned int *)t16);
    t41 = *((unsigned int *)t26);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB39;

LAB36:    if (t49 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t37) = 1;

LAB39:    t53 = (t37 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 2976);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 4);
    goto LAB27;

LAB38:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(29, ng0);
    t59 = ((char*)((ng3)));
    t60 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t60, t59, 0, 0, 1, 0LL);
    goto LAB42;

}


extern void work_m_00000000001893646705_1882570853_init()
{
	static char *pe[] = {(void *)Initial_16_0,(void *)Always_20_1};
	xsi_register_didat("work_m_00000000001893646705_1882570853", "isim/core_sim_isim_beh.exe.sim/work/m_00000000001893646705_1882570853.didat");
	xsi_register_executes(pe);
}
