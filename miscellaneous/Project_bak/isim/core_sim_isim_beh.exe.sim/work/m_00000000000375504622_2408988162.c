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
static const char *ng0 = "D:/Documents/Materials/DENDEN/PROJ/Verilog/kao_ban_zi/core.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {163U, 0U};
static unsigned int ng6[] = {4293919746U, 0U, 4294967295U, 0U, 4294967295U, 0U, 4294967295U, 0U, 4194303U, 0U};
static unsigned int ng7[] = {4293955619U, 0U, 4294967295U, 0U, 4294967295U, 0U, 4294967295U, 0U, 4194303U, 0U};



static void Cont_86_0(char *t0)
{
    char t5[8];
    char t20[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;

LAB0:    t1 = (t0 + 9344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 7784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t28, t5, 8);

LAB10:    t60 = (t0 + 12632);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memset(t64, 0, 8);
    t65 = 1U;
    t66 = t65;
    t67 = (t28 + 4);
    t68 = *((unsigned int *)t28);
    t65 = (t65 & t68);
    t69 = *((unsigned int *)t67);
    t66 = (t66 & t69);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t71 | t65);
    t72 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t72 | t66);
    xsi_driver_vfirst_trans(t60, 0, 0);
    t73 = (t0 + 12392);
    *((int *)t73) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 7944);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t19);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t21) != 0)
        goto LAB13;

LAB14:    t29 = *((unsigned int *)t5);
    t30 = *((unsigned int *)t20);
    t31 = (t29 & t30);
    *((unsigned int *)t28) = t31;
    t32 = (t5 + 4);
    t33 = (t20 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t20) = 1;
    goto LAB14;

LAB13:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB14;

LAB15:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t5 + 4);
    t43 = (t20 + 4);
    t44 = *((unsigned int *)t5);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t20);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t55);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t54);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t55);
    goto LAB17;

}

static void Cont_89_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 9592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3384U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 9);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 9);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t32, 8);

LAB16:    t30 = (t0 + 12696);
    t33 = (t30 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t3 + 4);
    t40 = *((unsigned int *)t3);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t30, 0, 0);
    t45 = (t0 + 12408);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = ((char*)((ng1)));
    goto LAB9;

LAB10:    t30 = (t0 + 3224U);
    t31 = *((char **)t30);
    memcpy(t32, t31, 8);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t25, 32, t32, 32);
    goto LAB16;

LAB14:    memcpy(t3, t25, 8);
    goto LAB16;

}

static void Cont_106_2(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
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
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 9840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 7784);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t23 = (t0 + 12760);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t37 = (t0 + 12424);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t23 = (t0 + 6104U);
    t24 = *((char **)t23);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_107_3(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
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
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 10088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 7944);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t23 = (t0 + 12824);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t37 = (t0 + 12440);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t23 = (t0 + 6104U);
    t24 = *((char **)t23);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Always_113_4(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char t34[8];
    char t48[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;

LAB0:    t1 = (t0 + 10336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 12456);
    *((int *)t2) = 1;
    t3 = (t0 + 10368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(113, ng0);
    t6 = (t0 + 3384U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 8);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 8);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    memset(t5, 0, 8);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB5;

LAB6:    if (*((unsigned int *)t16) != 0)
        goto LAB7;

LAB8:    t23 = (t5 + 4);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB9;

LAB10:    t29 = *((unsigned int *)t5);
    t30 = (~(t29));
    t31 = *((unsigned int *)t23);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t23) > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t5) > 0)
        goto LAB15;

LAB16:    memcpy(t4, t55, 8);

LAB17:    t83 = (t0 + 7784);
    xsi_vlogvar_wait_assign_value(t83, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t5) = 1;
    goto LAB8;

LAB7:    t22 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB8;

LAB9:    t27 = (t0 + 1152);
    t28 = *((char **)t27);
    goto LAB10;

LAB11:    t27 = (t0 + 5464U);
    t33 = *((char **)t27);
    memset(t34, 0, 8);
    t27 = (t33 + 4);
    t35 = *((unsigned int *)t27);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t27) != 0)
        goto LAB20;

LAB21:    t41 = (t34 + 4);
    t42 = *((unsigned int *)t34);
    t43 = (!(t42));
    t44 = *((unsigned int *)t41);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB22;

LAB23:    memcpy(t55, t34, 8);

LAB24:    goto LAB12;

LAB13:    xsi_vlog_unsigned_bit_combine(t4, 32, t28, 32, t55, 32);
    goto LAB17;

LAB15:    memcpy(t4, t28, 8);
    goto LAB17;

LAB18:    *((unsigned int *)t34) = 1;
    goto LAB21;

LAB20:    t40 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB21;

LAB22:    t46 = (t0 + 5624U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    t46 = (t47 + 4);
    t49 = *((unsigned int *)t46);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t46) != 0)
        goto LAB27;

LAB28:    t56 = *((unsigned int *)t34);
    t57 = *((unsigned int *)t48);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = (t34 + 4);
    t60 = (t48 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t48) = 1;
    goto LAB28;

LAB27:    t54 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB28;

LAB29:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t34 + 4);
    t70 = (t48 + 4);
    t71 = *((unsigned int *)t69);
    t72 = (~(t71));
    t73 = *((unsigned int *)t34);
    t74 = (t73 & t72);
    t75 = *((unsigned int *)t70);
    t76 = (~(t75));
    t77 = *((unsigned int *)t48);
    t78 = (t77 & t76);
    t79 = (~(t74));
    t80 = (~(t78));
    t81 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t81 & t79);
    t82 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t82 & t80);
    goto LAB31;

}

static void Always_117_5(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char t34[8];
    char t48[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;

LAB0:    t1 = (t0 + 10584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 12472);
    *((int *)t2) = 1;
    t3 = (t0 + 10616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(117, ng0);
    t6 = (t0 + 3384U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 8);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 8);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    memset(t5, 0, 8);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB5;

LAB6:    if (*((unsigned int *)t16) != 0)
        goto LAB7;

LAB8:    t23 = (t5 + 4);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB9;

LAB10:    t29 = *((unsigned int *)t5);
    t30 = (~(t29));
    t31 = *((unsigned int *)t23);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t23) > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t5) > 0)
        goto LAB15;

LAB16:    memcpy(t4, t55, 8);

LAB17:    t83 = (t0 + 7944);
    xsi_vlogvar_wait_assign_value(t83, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t5) = 1;
    goto LAB8;

LAB7:    t22 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB8;

LAB9:    t27 = (t0 + 1288);
    t28 = *((char **)t27);
    goto LAB10;

LAB11:    t27 = (t0 + 5784U);
    t33 = *((char **)t27);
    memset(t34, 0, 8);
    t27 = (t33 + 4);
    t35 = *((unsigned int *)t27);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t27) != 0)
        goto LAB20;

LAB21:    t41 = (t34 + 4);
    t42 = *((unsigned int *)t34);
    t43 = (!(t42));
    t44 = *((unsigned int *)t41);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB22;

LAB23:    memcpy(t55, t34, 8);

LAB24:    goto LAB12;

LAB13:    xsi_vlog_unsigned_bit_combine(t4, 32, t28, 32, t55, 32);
    goto LAB17;

LAB15:    memcpy(t4, t28, 8);
    goto LAB17;

LAB18:    *((unsigned int *)t34) = 1;
    goto LAB21;

LAB20:    t40 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB21;

LAB22:    t46 = (t0 + 5944U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    t46 = (t47 + 4);
    t49 = *((unsigned int *)t46);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t46) != 0)
        goto LAB27;

LAB28:    t56 = *((unsigned int *)t34);
    t57 = *((unsigned int *)t48);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = (t34 + 4);
    t60 = (t48 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t48) = 1;
    goto LAB28;

LAB27:    t54 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB28;

LAB29:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t34 + 4);
    t70 = (t48 + 4);
    t71 = *((unsigned int *)t69);
    t72 = (~(t71));
    t73 = *((unsigned int *)t34);
    t74 = (t73 & t72);
    t75 = *((unsigned int *)t70);
    t76 = (~(t75));
    t77 = *((unsigned int *)t48);
    t78 = (t77 & t76);
    t79 = (~(t74));
    t80 = (~(t78));
    t81 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t81 & t79);
    t82 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t82 & t80);
    goto LAB31;

}

static void Always_128_6(char *t0)
{
    char t6[8];
    char t20[8];
    char t21[8];
    char t24[8];
    char t52[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;

LAB0:    t1 = (t0 + 10832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 12488);
    *((int *)t2) = 1;
    t3 = (t0 + 10864);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(128, ng0);

LAB5:    xsi_set_current_line(129, ng0);
    t4 = (t0 + 3384U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 10);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 10);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t6 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t21, 0, 8);
    t2 = (t21 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 8);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t20, 0, 8);
    t5 = (t21 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t21);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t5) != 0)
        goto LAB40;

LAB41:    t14 = (t20 + 4);
    t26 = *((unsigned int *)t20);
    t27 = *((unsigned int *)t14);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB42;

LAB43:    t29 = *((unsigned int *)t20);
    t30 = (~(t29));
    t31 = *((unsigned int *)t14);
    t33 = (t30 || t31);
    if (t33 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t14) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t20) > 0)
        goto LAB48;

LAB49:    memcpy(t6, t24, 8);

LAB50:    t38 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t38, t6, 0, 0, 2, 0LL);

LAB24:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(129, ng0);
    t22 = (t0 + 3384U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    t22 = (t24 + 4);
    t25 = (t23 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 8);
    t28 = (t27 & 1);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 8);
    t31 = (t30 & 1);
    *((unsigned int *)t22) = t31;
    memset(t21, 0, 8);
    t32 = (t24 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t24);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t32) != 0)
        goto LAB11;

LAB12:    t39 = (t21 + 4);
    t40 = *((unsigned int *)t21);
    t41 = *((unsigned int *)t39);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB13;

LAB14:    t45 = *((unsigned int *)t21);
    t46 = (~(t45));
    t47 = *((unsigned int *)t39);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t39) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t21) > 0)
        goto LAB19;

LAB20:    memcpy(t20, t52, 8);

LAB21:    t53 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t53, t20, 0, 0, 2, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB11:    t38 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB12;

LAB13:    t43 = (t0 + 1696);
    t44 = *((char **)t43);
    goto LAB14;

LAB15:    t43 = (t0 + 8104);
    t49 = (t43 + 56U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng3)));
    memset(t52, 0, 8);
    xsi_vlog_unsigned_add(t52, 32, t50, 2, t51, 32);
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t20, 32, t44, 32, t52, 32);
    goto LAB21;

LAB19:    memcpy(t20, t44, 8);
    goto LAB21;

LAB22:    xsi_set_current_line(130, ng0);
    t7 = (t0 + 3384U);
    t14 = *((char **)t7);
    memset(t24, 0, 8);
    t7 = (t24 + 4);
    t22 = (t14 + 4);
    t26 = *((unsigned int *)t14);
    t27 = (t26 >> 8);
    t28 = (t27 & 1);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t22);
    t30 = (t29 >> 8);
    t31 = (t30 & 1);
    *((unsigned int *)t7) = t31;
    memset(t21, 0, 8);
    t23 = (t24 + 4);
    t33 = *((unsigned int *)t23);
    t34 = (~(t33));
    t35 = *((unsigned int *)t24);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t23) != 0)
        goto LAB27;

LAB28:    t32 = (t21 + 4);
    t40 = *((unsigned int *)t21);
    t41 = *((unsigned int *)t32);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB29;

LAB30:    t45 = *((unsigned int *)t21);
    t46 = (~(t45));
    t47 = *((unsigned int *)t32);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t32) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t21) > 0)
        goto LAB35;

LAB36:    memcpy(t20, t52, 8);

LAB37:    t50 = (t0 + 8104);
    xsi_vlogvar_wait_assign_value(t50, t20, 0, 0, 2, 0LL);
    goto LAB24;

LAB25:    *((unsigned int *)t21) = 1;
    goto LAB28;

LAB27:    t25 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB28;

LAB29:    t38 = (t0 + 1696);
    t39 = *((char **)t38);
    goto LAB30;

LAB31:    t38 = (t0 + 8104);
    t43 = (t38 + 56U);
    t44 = *((char **)t43);
    t49 = ((char*)((ng3)));
    memset(t52, 0, 8);
    xsi_vlog_unsigned_minus(t52, 32, t44, 2, t49, 32);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t20, 32, t39, 32, t52, 32);
    goto LAB37;

LAB35:    memcpy(t20, t39, 8);
    goto LAB37;

LAB38:    *((unsigned int *)t20) = 1;
    goto LAB41;

LAB40:    t7 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB41;

LAB42:    t22 = (t0 + 1696);
    t23 = *((char **)t22);
    goto LAB43;

LAB44:    t22 = (t0 + 8104);
    t25 = (t22 + 56U);
    t32 = *((char **)t25);
    memcpy(t24, t32, 8);
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t6, 32, t23, 32, t24, 32);
    goto LAB50;

LAB48:    memcpy(t6, t23, 8);
    goto LAB50;

}

static void Always_137_7(char *t0)
{
    char t6[8];
    char t17[8];
    char t38[8];
    char t46[8];
    char t84[8];
    char t85[8];
    char t88[8];
    char t114[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;

LAB0:    t1 = (t0 + 11080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 12504);
    *((int *)t2) = 1;
    t3 = (t0 + 11112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(137, ng0);

LAB5:    xsi_set_current_line(138, ng0);
    t4 = (t0 + 6104U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t46, t6, 8);

LAB12:    t78 = (t46 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t46);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 6104U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB98;

LAB96:    if (*((unsigned int *)t2) == 0)
        goto LAB95;

LAB97:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB98:    t5 = (t6 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB100;

LAB99:    t25 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t25 & 1U);
    t26 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t26 & 1U);
    t13 = (t6 + 4);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t6);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(146, ng0);

LAB117:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t38, 0, 8);
    t2 = (t38 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t38) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t17, 0, 8);
    t5 = (t38 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t22 = *((unsigned int *)t38);
    t23 = (t22 & t16);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t5) != 0)
        goto LAB120;

LAB121:    t13 = (t17 + 4);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t13);
    t30 = (t25 || t26);
    if (t30 > 0)
        goto LAB122;

LAB123:    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t13) > 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t17) > 0)
        goto LAB128;

LAB129:    memcpy(t6, t46, 8);

LAB130:    t27 = (t0 + 7144);
    xsi_vlogvar_wait_assign_value(t27, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t38, 0, 8);
    t2 = (t38 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t38) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t17, 0, 8);
    t5 = (t38 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t22 = *((unsigned int *)t38);
    t23 = (t22 & t16);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB131;

LAB132:    if (*((unsigned int *)t5) != 0)
        goto LAB133;

LAB134:    t13 = (t17 + 4);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t13);
    t30 = (t25 || t26);
    if (t30 > 0)
        goto LAB135;

LAB136:    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t13) > 0)
        goto LAB139;

LAB140:    if (*((unsigned int *)t17) > 0)
        goto LAB141;

LAB142:    memcpy(t6, t46, 8);

LAB143:    t27 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t27, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t38, 0, 8);
    t2 = (t38 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t38) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t17, 0, 8);
    t5 = (t38 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t22 = *((unsigned int *)t38);
    t23 = (t22 & t16);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t5) != 0)
        goto LAB146;

LAB147:    t13 = (t17 + 4);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t13);
    t30 = (t25 || t26);
    if (t30 > 0)
        goto LAB148;

LAB149:    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t13) > 0)
        goto LAB152;

LAB153:    if (*((unsigned int *)t17) > 0)
        goto LAB154;

LAB155:    memcpy(t6, t21, 8);

LAB156:    t27 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t27, t6, 0, 0, 10, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t38, 0, 8);
    t2 = (t38 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t38) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t17, 0, 8);
    t5 = (t38 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t22 = *((unsigned int *)t38);
    t23 = (t22 & t16);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t5) != 0)
        goto LAB159;

LAB160:    t13 = (t17 + 4);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t13);
    t30 = (t25 || t26);
    if (t30 > 0)
        goto LAB161;

LAB162:    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB163;

LAB164:    if (*((unsigned int *)t13) > 0)
        goto LAB165;

LAB166:    if (*((unsigned int *)t17) > 0)
        goto LAB167;

LAB168:    memcpy(t6, t21, 8);

LAB169:    t27 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t27, t6, 0, 0, 10, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t38, 0, 8);
    t2 = (t38 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t38) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t17, 0, 8);
    t5 = (t38 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t22 = *((unsigned int *)t38);
    t23 = (t22 & t16);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB170;

LAB171:    if (*((unsigned int *)t5) != 0)
        goto LAB172;

LAB173:    t13 = (t17 + 4);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t13);
    t30 = (t25 || t26);
    if (t30 > 0)
        goto LAB174;

LAB175:    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB176;

LAB177:    if (*((unsigned int *)t13) > 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t17) > 0)
        goto LAB180;

LAB181:    memcpy(t6, t46, 8);

LAB182:    t27 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t27, t6, 0, 0, 1, 0LL);

LAB103:
LAB28:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 8264);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t21) == 0)
        goto LAB13;

LAB15:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;

LAB16:    t28 = (t17 + 4);
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t20);
    t31 = (~(t30));
    *((unsigned int *)t17) = t31;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB18;

LAB17:    t36 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t36 & 1U);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t37 & 1U);
    memset(t38, 0, 8);
    t39 = (t17 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t17);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t39) != 0)
        goto LAB21;

LAB22:    t47 = *((unsigned int *)t6);
    t48 = *((unsigned int *)t38);
    t49 = (t47 & t48);
    *((unsigned int *)t46) = t49;
    t50 = (t6 + 4);
    t51 = (t38 + 4);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB12;

LAB13:    *((unsigned int *)t17) = 1;
    goto LAB16;

LAB18:    t32 = *((unsigned int *)t17);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t17) = (t32 | t33);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t34 | t35);
    goto LAB17;

LAB19:    *((unsigned int *)t38) = 1;
    goto LAB22;

LAB21:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB22;

LAB23:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t46) = (t58 | t59);
    t60 = (t6 + 4);
    t61 = (t38 + 4);
    t62 = *((unsigned int *)t6);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t38);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t70 = (t63 & t65);
    t71 = (t67 & t69);
    t72 = (~(t70));
    t73 = (~(t71));
    t74 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t74 & t72);
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & t73);
    t76 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t76 & t72);
    t77 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t77 & t73);
    goto LAB25;

LAB26:    xsi_set_current_line(138, ng0);

LAB29:    xsi_set_current_line(139, ng0);
    t86 = (t0 + 3384U);
    t87 = *((char **)t86);
    memset(t88, 0, 8);
    t86 = (t88 + 4);
    t89 = (t87 + 4);
    t90 = *((unsigned int *)t87);
    t91 = (t90 >> 8);
    t92 = (t91 & 1);
    *((unsigned int *)t88) = t92;
    t93 = *((unsigned int *)t89);
    t94 = (t93 >> 8);
    t95 = (t94 & 1);
    *((unsigned int *)t86) = t95;
    memset(t85, 0, 8);
    t96 = (t88 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t88);
    t100 = (t99 & t98);
    t101 = (t100 & 1U);
    if (t101 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t96) != 0)
        goto LAB32;

LAB33:    t103 = (t85 + 4);
    t104 = *((unsigned int *)t85);
    t105 = *((unsigned int *)t103);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB34;

LAB35:    t109 = *((unsigned int *)t85);
    t110 = (~(t109));
    t111 = *((unsigned int *)t103);
    t112 = (t110 || t111);
    if (t112 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t103) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t85) > 0)
        goto LAB40;

LAB41:    memcpy(t84, t114, 8);

LAB42:    t107 = (t0 + 7144);
    xsi_vlogvar_wait_assign_value(t107, t84, 0, 0, 4, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t38, 0, 8);
    t2 = (t38 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t38) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t17, 0, 8);
    t5 = (t38 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t22 = *((unsigned int *)t38);
    t23 = (t22 & t16);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t5) != 0)
        goto LAB45;

LAB46:    t13 = (t17 + 4);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t13);
    t30 = (t25 || t26);
    if (t30 > 0)
        goto LAB47;

LAB48:    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t13) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t17) > 0)
        goto LAB53;

LAB54:    memcpy(t6, t46, 8);

LAB55:    t18 = (t0 + 7304);
    xsi_vlogvar_wait_assign_value(t18, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t38, 0, 8);
    t2 = (t38 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t38) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t17, 0, 8);
    t5 = (t38 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t22 = *((unsigned int *)t38);
    t23 = (t22 & t16);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t5) != 0)
        goto LAB58;

LAB59:    t13 = (t17 + 4);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t13);
    t30 = (t25 || t26);
    if (t30 > 0)
        goto LAB60;

LAB61:    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t13) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t17) > 0)
        goto LAB66;

LAB67:    memcpy(t6, t20, 8);

LAB68:    t19 = (t0 + 7464);
    xsi_vlogvar_wait_assign_value(t19, t6, 0, 0, 10, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t38, 0, 8);
    t2 = (t38 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t38) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t17, 0, 8);
    t5 = (t38 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t22 = *((unsigned int *)t38);
    t23 = (t22 & t16);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t5) != 0)
        goto LAB71;

LAB72:    t13 = (t17 + 4);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t13);
    t30 = (t25 || t26);
    if (t30 > 0)
        goto LAB73;

LAB74:    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t13) > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t17) > 0)
        goto LAB79;

LAB80:    memcpy(t6, t20, 8);

LAB81:    t19 = (t0 + 7624);
    xsi_vlogvar_wait_assign_value(t19, t6, 0, 0, 10, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t38, 0, 8);
    t2 = (t38 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t38) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t17, 0, 8);
    t5 = (t38 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t22 = *((unsigned int *)t38);
    t23 = (t22 & t16);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t5) != 0)
        goto LAB84;

LAB85:    t13 = (t17 + 4);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t13);
    t30 = (t25 || t26);
    if (t30 > 0)
        goto LAB86;

LAB87:    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t13) > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t17) > 0)
        goto LAB92;

LAB93:    memcpy(t6, t18, 8);

LAB94:    t20 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t20, t6, 0, 0, 1, 0LL);
    goto LAB28;

LAB30:    *((unsigned int *)t85) = 1;
    goto LAB33;

LAB32:    t102 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB33;

LAB34:    t107 = (t0 + 2104);
    t108 = *((char **)t107);
    goto LAB35;

LAB36:    t107 = (t0 + 4504U);
    t113 = *((char **)t107);
    memcpy(t114, t113, 8);
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t84, 32, t108, 32, t114, 32);
    goto LAB42;

LAB40:    memcpy(t84, t108, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t17) = 1;
    goto LAB46;

LAB45:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB46;

LAB47:    t18 = (t0 + 2240);
    t19 = *((char **)t18);
    goto LAB48;

LAB49:    t18 = (t0 + 4664U);
    t20 = *((char **)t18);
    memcpy(t46, t20, 8);
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t6, 32, t19, 32, t46, 32);
    goto LAB55;

LAB53:    memcpy(t6, t19, 8);
    goto LAB55;

LAB56:    *((unsigned int *)t17) = 1;
    goto LAB59;

LAB58:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB59;

LAB60:    t18 = ((char*)((ng4)));
    goto LAB61;

LAB62:    t19 = (t0 + 4824U);
    t20 = *((char **)t19);
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t6, 10, t18, 10, t20, 10);
    goto LAB68;

LAB66:    memcpy(t6, t18, 8);
    goto LAB68;

LAB69:    *((unsigned int *)t17) = 1;
    goto LAB72;

LAB71:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB72;

LAB73:    t18 = ((char*)((ng5)));
    goto LAB74;

LAB75:    t19 = (t0 + 4984U);
    t20 = *((char **)t19);
    goto LAB76;

LAB77:    xsi_vlog_unsigned_bit_combine(t6, 10, t18, 10, t20, 10);
    goto LAB81;

LAB79:    memcpy(t6, t18, 8);
    goto LAB81;

LAB82:    *((unsigned int *)t17) = 1;
    goto LAB85;

LAB84:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB85;

LAB86:    t18 = (t0 + 1560);
    t19 = *((char **)t18);
    goto LAB87;

LAB88:    t18 = ((char*)((ng3)));
    goto LAB89;

LAB90:    xsi_vlog_unsigned_bit_combine(t6, 32, t19, 32, t18, 32);
    goto LAB94;

LAB92:    memcpy(t6, t19, 8);
    goto LAB94;

LAB95:    *((unsigned int *)t6) = 1;
    goto LAB98;

LAB100:    t16 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t16 | t22);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t12);
    *((unsigned int *)t5) = (t23 | t24);
    goto LAB99;

LAB101:    xsi_set_current_line(145, ng0);
    t18 = (t0 + 3384U);
    t19 = *((char **)t18);
    memset(t46, 0, 8);
    t18 = (t46 + 4);
    t20 = (t19 + 4);
    t35 = *((unsigned int *)t19);
    t36 = (t35 >> 8);
    t37 = (t36 & 1);
    *((unsigned int *)t46) = t37;
    t40 = *((unsigned int *)t20);
    t41 = (t40 >> 8);
    t42 = (t41 & 1);
    *((unsigned int *)t18) = t42;
    memset(t38, 0, 8);
    t21 = (t46 + 4);
    t43 = *((unsigned int *)t21);
    t44 = (~(t43));
    t47 = *((unsigned int *)t46);
    t48 = (t47 & t44);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t21) != 0)
        goto LAB106;

LAB107:    t28 = (t38 + 4);
    t53 = *((unsigned int *)t38);
    t54 = *((unsigned int *)t28);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB108;

LAB109:    t56 = *((unsigned int *)t38);
    t57 = (~(t56));
    t58 = *((unsigned int *)t28);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t28) > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t38) > 0)
        goto LAB114;

LAB115:    memcpy(t17, t29, 8);

LAB116:    t45 = (t0 + 8264);
    xsi_vlogvar_wait_assign_value(t45, t17, 0, 0, 1, 0LL);
    goto LAB103;

LAB104:    *((unsigned int *)t38) = 1;
    goto LAB107;

LAB106:    t27 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB107;

LAB108:    t29 = (t0 + 1560);
    t39 = *((char **)t29);
    goto LAB109;

LAB110:    t29 = ((char*)((ng1)));
    goto LAB111;

LAB112:    xsi_vlog_unsigned_bit_combine(t17, 32, t39, 32, t29, 32);
    goto LAB116;

LAB114:    memcpy(t17, t39, 8);
    goto LAB116;

LAB118:    *((unsigned int *)t17) = 1;
    goto LAB121;

LAB120:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB121;

LAB122:    t18 = (t0 + 2104);
    t19 = *((char **)t18);
    goto LAB123;

LAB124:    t18 = (t0 + 7144);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t46, t21, 8);
    goto LAB125;

LAB126:    xsi_vlog_unsigned_bit_combine(t6, 32, t19, 32, t46, 32);
    goto LAB130;

LAB128:    memcpy(t6, t19, 8);
    goto LAB130;

LAB131:    *((unsigned int *)t17) = 1;
    goto LAB134;

LAB133:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB134;

LAB135:    t18 = (t0 + 2240);
    t19 = *((char **)t18);
    goto LAB136;

LAB137:    t18 = (t0 + 7304);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t46, t21, 8);
    goto LAB138;

LAB139:    xsi_vlog_unsigned_bit_combine(t6, 32, t19, 32, t46, 32);
    goto LAB143;

LAB141:    memcpy(t6, t19, 8);
    goto LAB143;

LAB144:    *((unsigned int *)t17) = 1;
    goto LAB147;

LAB146:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB147;

LAB148:    t18 = ((char*)((ng4)));
    goto LAB149;

LAB150:    t19 = (t0 + 7464);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    goto LAB151;

LAB152:    xsi_vlog_unsigned_bit_combine(t6, 10, t18, 10, t21, 10);
    goto LAB156;

LAB154:    memcpy(t6, t18, 8);
    goto LAB156;

LAB157:    *((unsigned int *)t17) = 1;
    goto LAB160;

LAB159:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB160;

LAB161:    t18 = ((char*)((ng5)));
    goto LAB162;

LAB163:    t19 = (t0 + 7624);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    goto LAB164;

LAB165:    xsi_vlog_unsigned_bit_combine(t6, 10, t18, 10, t21, 10);
    goto LAB169;

LAB167:    memcpy(t6, t18, 8);
    goto LAB169;

LAB170:    *((unsigned int *)t17) = 1;
    goto LAB173;

LAB172:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB173;

LAB174:    t18 = (t0 + 1560);
    t19 = *((char **)t18);
    goto LAB175;

LAB176:    t18 = (t0 + 8264);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t46, t21, 8);
    goto LAB177;

LAB178:    xsi_vlog_unsigned_bit_combine(t6, 32, t19, 32, t46, 32);
    goto LAB182;

LAB180:    memcpy(t6, t19, 8);
    goto LAB182;

}

static void Always_155_8(char *t0)
{
    char t6[8];
    char t17[8];
    char t38[8];
    char t46[8];
    char t84[40];
    char t85[8];
    char t88[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;

LAB0:    t1 = (t0 + 11328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 12520);
    *((int *)t2) = 1;
    t3 = (t0 + 11360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(155, ng0);

LAB5:    xsi_set_current_line(156, ng0);
    t4 = (t0 + 6104U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t46, t6, 8);

LAB12:    t78 = (t46 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t46);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 6104U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB72;

LAB70:    if (*((unsigned int *)t2) == 0)
        goto LAB69;

LAB71:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB72:    t5 = (t6 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB74;

LAB73:    t25 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t25 & 1U);
    t26 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t26 & 1U);
    t13 = (t6 + 4);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t6);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(162, ng0);

LAB91:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t17 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t6, 0, 8);
    t5 = (t17 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t22 = *((unsigned int *)t17);
    t23 = (t22 & t16);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t5) != 0)
        goto LAB94;

LAB95:    t13 = (t6 + 4);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t13);
    t30 = (t25 || t26);
    if (t30 > 0)
        goto LAB96;

LAB97:    t31 = *((unsigned int *)t6);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t13) > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t6) > 0)
        goto LAB102;

LAB103:    memcpy(t84, t21, 40);

LAB104:    t27 = (t0 + 6824);
    xsi_vlogvar_wait_assign_value(t27, t84, 0, 0, 150, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t17 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t6, 0, 8);
    t5 = (t17 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t22 = *((unsigned int *)t17);
    t23 = (t22 & t16);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t5) != 0)
        goto LAB107;

LAB108:    t13 = (t6 + 4);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t13);
    t30 = (t25 || t26);
    if (t30 > 0)
        goto LAB109;

LAB110:    t31 = *((unsigned int *)t6);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t13) > 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t6) > 0)
        goto LAB115;

LAB116:    memcpy(t84, t21, 40);

LAB117:    t27 = (t0 + 6984);
    xsi_vlogvar_wait_assign_value(t27, t84, 0, 0, 150, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t38, 0, 8);
    t2 = (t38 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t38) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t17, 0, 8);
    t5 = (t38 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t22 = *((unsigned int *)t38);
    t23 = (t22 & t16);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t5) != 0)
        goto LAB120;

LAB121:    t13 = (t17 + 4);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t13);
    t30 = (t25 || t26);
    if (t30 > 0)
        goto LAB122;

LAB123:    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t13) > 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t17) > 0)
        goto LAB128;

LAB129:    memcpy(t6, t46, 8);

LAB130:    t27 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t27, t6, 0, 0, 1, 0LL);

LAB77:
LAB28:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 8424);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t21) == 0)
        goto LAB13;

LAB15:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;

LAB16:    t28 = (t17 + 4);
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t20);
    t31 = (~(t30));
    *((unsigned int *)t17) = t31;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB18;

LAB17:    t36 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t36 & 1U);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t37 & 1U);
    memset(t38, 0, 8);
    t39 = (t17 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t17);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t39) != 0)
        goto LAB21;

LAB22:    t47 = *((unsigned int *)t6);
    t48 = *((unsigned int *)t38);
    t49 = (t47 & t48);
    *((unsigned int *)t46) = t49;
    t50 = (t6 + 4);
    t51 = (t38 + 4);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB12;

LAB13:    *((unsigned int *)t17) = 1;
    goto LAB16;

LAB18:    t32 = *((unsigned int *)t17);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t17) = (t32 | t33);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t34 | t35);
    goto LAB17;

LAB19:    *((unsigned int *)t38) = 1;
    goto LAB22;

LAB21:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB22;

LAB23:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t46) = (t58 | t59);
    t60 = (t6 + 4);
    t61 = (t38 + 4);
    t62 = *((unsigned int *)t6);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t38);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t70 = (t63 & t65);
    t71 = (t67 & t69);
    t72 = (~(t70));
    t73 = (~(t71));
    t74 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t74 & t72);
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & t73);
    t76 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t76 & t72);
    t77 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t77 & t73);
    goto LAB25;

LAB26:    xsi_set_current_line(156, ng0);

LAB29:    xsi_set_current_line(157, ng0);
    t86 = (t0 + 3384U);
    t87 = *((char **)t86);
    memset(t88, 0, 8);
    t86 = (t88 + 4);
    t89 = (t87 + 4);
    t90 = *((unsigned int *)t87);
    t91 = (t90 >> 8);
    t92 = (t91 & 1);
    *((unsigned int *)t88) = t92;
    t93 = *((unsigned int *)t89);
    t94 = (t93 >> 8);
    t95 = (t94 & 1);
    *((unsigned int *)t86) = t95;
    memset(t85, 0, 8);
    t96 = (t88 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t88);
    t100 = (t99 & t98);
    t101 = (t100 & 1U);
    if (t101 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t96) != 0)
        goto LAB32;

LAB33:    t103 = (t85 + 4);
    t104 = *((unsigned int *)t85);
    t105 = *((unsigned int *)t103);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB34;

LAB35:    t108 = *((unsigned int *)t85);
    t109 = (~(t108));
    t110 = *((unsigned int *)t103);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t103) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t85) > 0)
        goto LAB40;

LAB41:    memcpy(t84, t113, 40);

LAB42:    t112 = (t0 + 6824);
    xsi_vlogvar_wait_assign_value(t112, t84, 0, 0, 150, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t17 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t6, 0, 8);
    t5 = (t17 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t22 = *((unsigned int *)t17);
    t23 = (t22 & t16);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t5) != 0)
        goto LAB45;

LAB46:    t13 = (t6 + 4);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t13);
    t30 = (t25 || t26);
    if (t30 > 0)
        goto LAB47;

LAB48:    t31 = *((unsigned int *)t6);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t13) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t6) > 0)
        goto LAB53;

LAB54:    memcpy(t84, t20, 40);

LAB55:    t19 = (t0 + 6984);
    xsi_vlogvar_wait_assign_value(t19, t84, 0, 0, 150, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    memset(t38, 0, 8);
    t2 = (t38 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t38) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t17, 0, 8);
    t5 = (t38 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t22 = *((unsigned int *)t38);
    t23 = (t22 & t16);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t5) != 0)
        goto LAB58;

LAB59:    t13 = (t17 + 4);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t13);
    t30 = (t25 || t26);
    if (t30 > 0)
        goto LAB60;

LAB61:    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t13) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t17) > 0)
        goto LAB66;

LAB67:    memcpy(t6, t18, 8);

LAB68:    t20 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t20, t6, 0, 0, 1, 0LL);
    goto LAB28;

LAB30:    *((unsigned int *)t85) = 1;
    goto LAB33;

LAB32:    t102 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB33;

LAB34:    t107 = ((char*)((ng6)));
    goto LAB35;

LAB36:    t112 = (t0 + 4184U);
    t113 = *((char **)t112);
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t84, 150, t107, 150, t113, 150);
    goto LAB42;

LAB40:    memcpy(t84, t107, 40);
    goto LAB42;

LAB43:    *((unsigned int *)t6) = 1;
    goto LAB46;

LAB45:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB46;

LAB47:    t18 = ((char*)((ng7)));
    goto LAB48;

LAB49:    t19 = (t0 + 4344U);
    t20 = *((char **)t19);
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t84, 150, t18, 150, t20, 150);
    goto LAB55;

LAB53:    memcpy(t84, t18, 40);
    goto LAB55;

LAB56:    *((unsigned int *)t17) = 1;
    goto LAB59;

LAB58:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB59;

LAB60:    t18 = (t0 + 1424);
    t19 = *((char **)t18);
    goto LAB61;

LAB62:    t18 = ((char*)((ng3)));
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t6, 32, t19, 32, t18, 32);
    goto LAB68;

LAB66:    memcpy(t6, t19, 8);
    goto LAB68;

LAB69:    *((unsigned int *)t6) = 1;
    goto LAB72;

LAB74:    t16 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t16 | t22);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t12);
    *((unsigned int *)t5) = (t23 | t24);
    goto LAB73;

LAB75:    xsi_set_current_line(161, ng0);
    t18 = (t0 + 3384U);
    t19 = *((char **)t18);
    memset(t46, 0, 8);
    t18 = (t46 + 4);
    t20 = (t19 + 4);
    t35 = *((unsigned int *)t19);
    t36 = (t35 >> 8);
    t37 = (t36 & 1);
    *((unsigned int *)t46) = t37;
    t40 = *((unsigned int *)t20);
    t41 = (t40 >> 8);
    t42 = (t41 & 1);
    *((unsigned int *)t18) = t42;
    memset(t38, 0, 8);
    t21 = (t46 + 4);
    t43 = *((unsigned int *)t21);
    t44 = (~(t43));
    t47 = *((unsigned int *)t46);
    t48 = (t47 & t44);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t21) != 0)
        goto LAB80;

LAB81:    t28 = (t38 + 4);
    t53 = *((unsigned int *)t38);
    t54 = *((unsigned int *)t28);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB82;

LAB83:    t56 = *((unsigned int *)t38);
    t57 = (~(t56));
    t58 = *((unsigned int *)t28);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t28) > 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t38) > 0)
        goto LAB88;

LAB89:    memcpy(t17, t29, 8);

LAB90:    t45 = (t0 + 8424);
    xsi_vlogvar_wait_assign_value(t45, t17, 0, 0, 1, 0LL);
    goto LAB77;

LAB78:    *((unsigned int *)t38) = 1;
    goto LAB81;

LAB80:    t27 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB81;

LAB82:    t29 = (t0 + 1424);
    t39 = *((char **)t29);
    goto LAB83;

LAB84:    t29 = ((char*)((ng1)));
    goto LAB85;

LAB86:    xsi_vlog_unsigned_bit_combine(t17, 32, t39, 32, t29, 32);
    goto LAB90;

LAB88:    memcpy(t17, t39, 8);
    goto LAB90;

LAB92:    *((unsigned int *)t6) = 1;
    goto LAB95;

LAB94:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB95;

LAB96:    t18 = ((char*)((ng6)));
    goto LAB97;

LAB98:    t19 = (t0 + 6824);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    goto LAB99;

LAB100:    xsi_vlog_unsigned_bit_combine(t84, 150, t18, 150, t21, 150);
    goto LAB104;

LAB102:    memcpy(t84, t18, 40);
    goto LAB104;

LAB105:    *((unsigned int *)t6) = 1;
    goto LAB108;

LAB107:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB108;

LAB109:    t18 = ((char*)((ng7)));
    goto LAB110;

LAB111:    t19 = (t0 + 6984);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    goto LAB112;

LAB113:    xsi_vlog_unsigned_bit_combine(t84, 150, t18, 150, t21, 150);
    goto LAB117;

LAB115:    memcpy(t84, t18, 40);
    goto LAB117;

LAB118:    *((unsigned int *)t17) = 1;
    goto LAB121;

LAB120:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB121;

LAB122:    t18 = (t0 + 1424);
    t19 = *((char **)t18);
    goto LAB123;

LAB124:    t18 = (t0 + 8424);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t46, t21, 8);
    goto LAB125;

LAB126:    xsi_vlog_unsigned_bit_combine(t6, 32, t19, 32, t46, 32);
    goto LAB130;

LAB128:    memcpy(t6, t19, 8);
    goto LAB130;

}

static void Initial_185_9(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(185, ng0);

LAB2:    xsi_set_current_line(186, ng0);
    t1 = (t0 + 1152);
    t2 = *((char **)t1);
    t1 = (t0 + 7784);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 1);
    xsi_set_current_line(187, ng0);
    t1 = (t0 + 1288);
    t2 = *((char **)t1);
    t1 = (t0 + 7944);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 1);
    xsi_set_current_line(188, ng0);
    t1 = (t0 + 1424);
    t2 = *((char **)t1);
    t1 = (t0 + 8424);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 1);
    xsi_set_current_line(189, ng0);
    t1 = (t0 + 1560);
    t2 = *((char **)t1);
    t1 = (t0 + 8264);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t1 = (t0 + 1696);
    t2 = *((char **)t1);
    t1 = (t0 + 8104);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 2);
    xsi_set_current_line(192, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 7464);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 10);
    xsi_set_current_line(193, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 7624);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 10);
    xsi_set_current_line(195, ng0);
    t1 = (t0 + 2104);
    t2 = *((char **)t1);
    t1 = (t0 + 7144);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 4);
    xsi_set_current_line(196, ng0);
    t1 = (t0 + 2240);
    t2 = *((char **)t1);
    t1 = (t0 + 7304);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 4);
    xsi_set_current_line(197, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 6824);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 150);
    xsi_set_current_line(198, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 6984);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 150);

LAB1:    return;
}

static void implSig1_execute(char *t0)
{
    char t3[40];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 11824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3384U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t32, 40);

LAB16:    t33 = (t0 + 12888);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_bit_copy(t37, 0, t3, 0, 150);
    xsi_driver_vfirst_trans(t33, 0, 149);
    t38 = (t0 + 12536);
    *((int *)t38) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = ((char*)((ng6)));
    goto LAB9;

LAB10:    t30 = (t0 + 6824);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 150, t25, 150, t32, 150);
    goto LAB16;

LAB14:    memcpy(t3, t25, 40);
    goto LAB16;

}

static void implSig2_execute(char *t0)
{
    char t3[40];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 12072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3384U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t32, 40);

LAB16:    t33 = (t0 + 12952);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_bit_copy(t37, 0, t3, 0, 150);
    xsi_driver_vfirst_trans(t33, 0, 149);
    t38 = (t0 + 12552);
    *((int *)t38) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = ((char*)((ng7)));
    goto LAB9;

LAB10:    t30 = (t0 + 6984);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 150, t25, 150, t32, 150);
    goto LAB16;

LAB14:    memcpy(t3, t25, 40);
    goto LAB16;

}


extern void work_m_00000000000375504622_2408988162_init()
{
	static char *pe[] = {(void *)Cont_86_0,(void *)Cont_89_1,(void *)Cont_106_2,(void *)Cont_107_3,(void *)Always_113_4,(void *)Always_117_5,(void *)Always_128_6,(void *)Always_137_7,(void *)Always_155_8,(void *)Initial_185_9,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000000375504622_2408988162", "isim/core_sim_isim_beh.exe.sim/work/m_00000000000375504622_2408988162.didat");
	xsi_register_executes(pe);
}
