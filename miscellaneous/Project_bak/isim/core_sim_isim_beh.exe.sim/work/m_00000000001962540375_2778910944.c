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
static const char *ng0 = "D:/Documents/Materials/DENDEN/PROJ/Verilog/kao_ban_zi/core_sim.v";
static unsigned int ng1[] = {130U, 0U};
static unsigned int ng2[] = {34U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {9, 0};
static unsigned int ng5[] = {136U, 0U};
static int ng6[] = {8, 0};
static int ng7[] = {0, 0};



static void Initial_15_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    int t12;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);

LAB4:    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(18, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 12);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(19, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1448);
    t6 = (t0 + 1448);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB7:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB8;

LAB9:    xsi_set_current_line(20, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 12);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(21, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1448);
    t6 = (t0 + 1448);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB11:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB12;

LAB13:    xsi_set_current_line(22, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1448);
    t6 = (t0 + 1448);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB14:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB15;

LAB16:    xsi_set_current_line(23, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1448);
    t6 = (t0 + 1448);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB17:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB18;

LAB19:    xsi_set_current_line(24, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1448);
    t6 = (t0 + 1448);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 4000000000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB20:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB21;

LAB22:    xsi_set_current_line(25, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 12);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    t4 = (t0 + 1448);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB23:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB24;

LAB25:    xsi_set_current_line(26, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1448);
    t6 = (t0 + 1448);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB26:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB27;

LAB28:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 12);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1448);
    t6 = (t0 + 1448);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB30:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB31;

LAB32:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1448);
    t6 = (t0 + 1448);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB33;

LAB34:    goto LAB1;

LAB33:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB34;

}

static void Initial_35_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);

LAB4:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2424);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1288);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1288);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}


extern void work_m_00000000001962540375_2778910944_init()
{
	static char *pe[] = {(void *)Initial_15_0,(void *)Initial_35_1};
	xsi_register_didat("work_m_00000000001962540375_2778910944", "isim/core_sim_isim_beh.exe.sim/work/m_00000000001962540375_2778910944.didat");
	xsi_register_executes(pe);
}
