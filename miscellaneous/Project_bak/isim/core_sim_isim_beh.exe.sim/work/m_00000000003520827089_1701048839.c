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
static const char *ng0 = "D:/Documents/Materials/DENDEN/PROJ/Verilog/kao_ban_zi/moving_snake.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {10, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};



static void Initial_20_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;

LAB0:    xsi_set_current_line(20, ng0);

LAB2:    xsi_set_current_line(21, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(22, ng0);
    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    memset(t3, 0, 8);
    t1 = (t3 + 4);
    t4 = (t2 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (t5 >> 0);
    *((unsigned int *)t3) = t6;
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t1) = t8;
    t9 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t9 & 1023U);
    t10 = *((unsigned int *)t1);
    *((unsigned int *)t1) = (t10 & 1023U);
    t11 = (t0 + 3088);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 10);

LAB1:    return;
}

static void Cont_28_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t22[8];
    char t29[8];
    char t68[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;

LAB0:    t1 = (t0 + 4256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2928);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    memcpy(t29, t7, 8);

LAB10:    memset(t4, 0, 8);
    t57 = (t29 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t29);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t57) != 0)
        goto LAB20;

LAB21:    t64 = (t4 + 4);
    t65 = *((unsigned int *)t4);
    t66 = *((unsigned int *)t64);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB22;

LAB23:    t78 = *((unsigned int *)t4);
    t79 = (~(t78));
    t80 = *((unsigned int *)t64);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t64) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t84, 8);

LAB30:    t85 = (t0 + 5184);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    memset(t89, 0, 8);
    t90 = 1023U;
    t91 = t90;
    t92 = (t3 + 4);
    t93 = *((unsigned int *)t3);
    t90 = (t90 & t93);
    t94 = *((unsigned int *)t92);
    t91 = (t91 & t94);
    t95 = (t89 + 4);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t96 | t90);
    t97 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t97 | t91);
    xsi_driver_vfirst_trans(t85, 0, 9);
    t98 = (t0 + 5072);
    *((int *)t98) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 1888U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t20 = (t21 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t20) != 0)
        goto LAB13;

LAB14:    t30 = *((unsigned int *)t7);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = (t7 + 4);
    t34 = (t22 + 4);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t33);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t22) = 1;
    goto LAB14;

LAB13:    t28 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB14;

LAB15:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t29) = (t41 | t42);
    t43 = (t7 + 4);
    t44 = (t22 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (~(t45));
    t47 = *((unsigned int *)t7);
    t48 = (t47 & t46);
    t49 = *((unsigned int *)t44);
    t50 = (~(t49));
    t51 = *((unsigned int *)t22);
    t52 = (t51 & t50);
    t53 = (~(t48));
    t54 = (~(t52));
    t55 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t55 & t53);
    t56 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t56 & t54);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t63 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB21;

LAB22:    t69 = (t0 + 2368U);
    t70 = *((char **)t69);
    memset(t68, 0, 8);
    t69 = (t68 + 4);
    t71 = (t70 + 4);
    t72 = *((unsigned int *)t70);
    t73 = (t72 >> 0);
    *((unsigned int *)t68) = t73;
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 0);
    *((unsigned int *)t69) = t75;
    t76 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t76 & 1023U);
    t77 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t77 & 1023U);
    goto LAB23;

LAB24:    t82 = (t0 + 3088);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 10, t68, 10, t84, 10);
    goto LAB30;

LAB28:    memcpy(t3, t68, 8);
    goto LAB30;

}

static void Cont_29_2(char *t0)
{
    char t3[40];
    char t4[8];
    char t7[8];
    char t22[8];
    char t29[8];
    char t68[40];
    char t75[40];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;

LAB0:    t1 = (t0 + 4504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2928);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    memcpy(t29, t7, 8);

LAB10:    memset(t4, 0, 8);
    t57 = (t29 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t29);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t57) != 0)
        goto LAB20;

LAB21:    t64 = (t4 + 4);
    t65 = *((unsigned int *)t4);
    t66 = *((unsigned int *)t64);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB22;

LAB23:    t71 = *((unsigned int *)t4);
    t72 = (~(t71));
    t73 = *((unsigned int *)t64);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t64) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t75, 40);

LAB30:    t69 = (t0 + 5248);
    t77 = (t69 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    xsi_vlog_bit_copy(t80, 0, t3, 0, 140);
    xsi_driver_vfirst_trans(t69, 10, 149);
    t81 = (t0 + 5088);
    *((int *)t81) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 1888U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t20 = (t21 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t20) != 0)
        goto LAB13;

LAB14:    t30 = *((unsigned int *)t7);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = (t7 + 4);
    t34 = (t22 + 4);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t33);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t22) = 1;
    goto LAB14;

LAB13:    t28 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB14;

LAB15:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t29) = (t41 | t42);
    t43 = (t7 + 4);
    t44 = (t22 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (~(t45));
    t47 = *((unsigned int *)t7);
    t48 = (t47 & t46);
    t49 = *((unsigned int *)t44);
    t50 = (~(t49));
    t51 = *((unsigned int *)t22);
    t52 = (t51 & t50);
    t53 = (~(t48));
    t54 = (~(t52));
    t55 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t55 & t53);
    t56 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t56 & t54);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t63 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB21;

LAB22:    t69 = (t0 + 2368U);
    t70 = *((char **)t69);
    xsi_vlog_get_part_select_value(t68, 140, t70, 149, 10);
    goto LAB23;

LAB24:    t69 = (t0 + 2368U);
    t76 = *((char **)t69);
    xsi_vlog_get_part_select_value(t75, 140, t76, 139, 0);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 140, t68, 140, t75, 140);
    goto LAB30;

LAB28:    memcpy(t3, t68, 40);
    goto LAB30;

}

static void Always_30_3(char *t0)
{
    char t13[8];
    char t17[8];
    char t18[8];
    char t42[8];
    char t49[8];
    char t59[8];
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
    unsigned int t14;
    int t15;
    char *t16;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t60;

LAB0:    t1 = (t0 + 4752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5104);
    *((int *)t2) = 1;
    t3 = (t0 + 4784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(34, ng0);

LAB10:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);

LAB11:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t15 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t15 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t15 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t15 == 1)
        goto LAB18;

LAB19:
LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);

LAB9:    xsi_set_current_line(32, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 1023U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 1023U);
    t5 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 10, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(36, ng0);

LAB21:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 2368U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t13 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 1023U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 1023U);
    t12 = (t0 + 744);
    t16 = *((char **)t12);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_mod(t17, 32, t13, 32, t16, 32);
    t12 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t19 = (t17 + 4);
    t20 = (t12 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t12);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB25;

LAB22:    if (t30 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t18) = 1;

LAB25:    t34 = (t18 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t18);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(38, ng0);

LAB29:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 10);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 10);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 1023U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 1023U);
    t11 = (t0 + 2368U);
    t12 = *((char **)t11);
    memset(t17, 0, 8);
    t11 = (t17 + 4);
    t16 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 0);
    *((unsigned int *)t11) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 1023U);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t26 & 1023U);
    t19 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t17, 32, t19, 32);
    memset(t42, 0, 8);
    t20 = (t13 + 4);
    t33 = (t18 + 4);
    t27 = *((unsigned int *)t13);
    t28 = *((unsigned int *)t18);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t20);
    t31 = *((unsigned int *)t33);
    t32 = (t30 ^ t31);
    t35 = (t29 | t32);
    t36 = *((unsigned int *)t20);
    t37 = *((unsigned int *)t33);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t43 = (t35 & t39);
    if (t43 != 0)
        goto LAB31;

LAB30:    if (t38 != 0)
        goto LAB32;

LAB33:    t40 = (t42 + 4);
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(43, ng0);

LAB38:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2328U);
    t5 = (t2 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2208U);
    t16 = *((char **)t12);
    t12 = ((char*)((ng3)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 32, t16, 4, t12, 32);
    t19 = (t0 + 608);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t17, 32, t20, 32);
    t19 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t13, 10, t4, ((int*)(t11)), 2, t18, 32, 2, t19, 32, 1, 1);
    t33 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t33, t13, 0, 0, 10, 0LL);

LAB36:
LAB28:    goto LAB20;

LAB14:    xsi_set_current_line(48, ng0);

LAB39:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 2368U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t13 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 1023U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 1023U);
    t12 = (t0 + 744);
    t16 = *((char **)t12);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_mod(t17, 32, t13, 32, t16, 32);
    t12 = (t0 + 744);
    t19 = *((char **)t12);
    t12 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t19, 32, t12, 32);
    memset(t42, 0, 8);
    t20 = (t17 + 4);
    t33 = (t18 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t20);
    t25 = *((unsigned int *)t33);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t20);
    t29 = *((unsigned int *)t33);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB43;

LAB40:    if (t30 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t42) = 1;

LAB43:    t40 = (t42 + 4);
    t35 = *((unsigned int *)t40);
    t36 = (~(t35));
    t37 = *((unsigned int *)t42);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(50, ng0);

LAB47:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 10);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 10);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 1023U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 1023U);
    t11 = (t0 + 2368U);
    t12 = *((char **)t11);
    memset(t17, 0, 8);
    t11 = (t17 + 4);
    t16 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 0);
    *((unsigned int *)t11) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 1023U);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t26 & 1023U);
    t19 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t17, 32, t19, 32);
    memset(t42, 0, 8);
    t20 = (t13 + 4);
    t33 = (t18 + 4);
    t27 = *((unsigned int *)t13);
    t28 = *((unsigned int *)t18);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t20);
    t31 = *((unsigned int *)t33);
    t32 = (t30 ^ t31);
    t35 = (t29 | t32);
    t36 = *((unsigned int *)t20);
    t37 = *((unsigned int *)t33);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t43 = (t35 & t39);
    if (t43 != 0)
        goto LAB49;

LAB48:    if (t38 != 0)
        goto LAB50;

LAB51:    t40 = (t42 + 4);
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(55, ng0);

LAB56:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2328U);
    t5 = (t2 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2208U);
    t16 = *((char **)t12);
    t12 = ((char*)((ng3)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 32, t16, 4, t12, 32);
    t19 = (t0 + 608);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t17, 32, t20, 32);
    t19 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t13, 10, t4, ((int*)(t11)), 2, t18, 32, 2, t19, 32, 1, 1);
    t33 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t33, t13, 0, 0, 10, 0LL);

LAB54:
LAB46:    goto LAB20;

LAB16:    xsi_set_current_line(60, ng0);

LAB57:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 2368U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t13 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 1023U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 1023U);
    t12 = (t0 + 744);
    t16 = *((char **)t12);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_divide(t17, 32, t13, 32, t16, 32);
    t12 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t19 = (t17 + 4);
    t20 = (t12 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t12);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB61;

LAB58:    if (t30 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t18) = 1;

LAB61:    t34 = (t18 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t18);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(62, ng0);

LAB65:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 10);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 10);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 1023U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 1023U);
    t11 = (t0 + 2368U);
    t12 = *((char **)t11);
    memset(t17, 0, 8);
    t11 = (t17 + 4);
    t16 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 0);
    *((unsigned int *)t11) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 1023U);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t26 & 1023U);
    t19 = (t0 + 744);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t17, 32, t20, 32);
    memset(t42, 0, 8);
    t19 = (t13 + 4);
    t33 = (t18 + 4);
    t27 = *((unsigned int *)t13);
    t28 = *((unsigned int *)t18);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t19);
    t31 = *((unsigned int *)t33);
    t32 = (t30 ^ t31);
    t35 = (t29 | t32);
    t36 = *((unsigned int *)t19);
    t37 = *((unsigned int *)t33);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t43 = (t35 & t39);
    if (t43 != 0)
        goto LAB67;

LAB66:    if (t38 != 0)
        goto LAB68;

LAB69:    t40 = (t42 + 4);
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(67, ng0);

LAB74:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2328U);
    t5 = (t2 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2208U);
    t16 = *((char **)t12);
    t12 = ((char*)((ng3)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 32, t16, 4, t12, 32);
    t19 = (t0 + 608);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t17, 32, t20, 32);
    t19 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t13, 10, t4, ((int*)(t11)), 2, t18, 32, 2, t19, 32, 1, 1);
    t33 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t33, t13, 0, 0, 10, 0LL);

LAB72:
LAB64:    goto LAB20;

LAB18:    xsi_set_current_line(72, ng0);

LAB75:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 2368U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t13 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 1023U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 1023U);
    t12 = (t0 + 744);
    t16 = *((char **)t12);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_divide(t17, 32, t13, 32, t16, 32);
    t12 = (t0 + 880);
    t19 = *((char **)t12);
    t12 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t19, 32, t12, 32);
    memset(t42, 0, 8);
    t20 = (t17 + 4);
    t33 = (t18 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t20);
    t25 = *((unsigned int *)t33);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t20);
    t29 = *((unsigned int *)t33);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB79;

LAB76:    if (t30 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t42) = 1;

LAB79:    t40 = (t42 + 4);
    t35 = *((unsigned int *)t40);
    t36 = (~(t35));
    t37 = *((unsigned int *)t42);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(74, ng0);

LAB83:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 10);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 10);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 1023U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 1023U);
    t11 = (t0 + 2368U);
    t12 = *((char **)t11);
    memset(t17, 0, 8);
    t11 = (t17 + 4);
    t16 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 0);
    *((unsigned int *)t11) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 1023U);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t26 & 1023U);
    t19 = (t0 + 744);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t17, 32, t20, 32);
    memset(t42, 0, 8);
    t19 = (t13 + 4);
    t33 = (t18 + 4);
    t27 = *((unsigned int *)t13);
    t28 = *((unsigned int *)t18);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t19);
    t31 = *((unsigned int *)t33);
    t32 = (t30 ^ t31);
    t35 = (t29 | t32);
    t36 = *((unsigned int *)t19);
    t37 = *((unsigned int *)t33);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t43 = (t35 & t39);
    if (t43 != 0)
        goto LAB85;

LAB84:    if (t38 != 0)
        goto LAB86;

LAB87:    t40 = (t42 + 4);
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(79, ng0);

LAB92:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2328U);
    t5 = (t2 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2208U);
    t16 = *((char **)t12);
    t12 = ((char*)((ng3)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 32, t16, 4, t12, 32);
    t19 = (t0 + 608);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t17, 32, t20, 32);
    t19 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t13, 10, t4, ((int*)(t11)), 2, t18, 32, 2, t19, 32, 1, 1);
    t33 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t33, t13, 0, 0, 10, 0LL);

LAB90:
LAB82:    goto LAB20;

LAB24:    t33 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(37, ng0);
    t40 = ((char*)((ng3)));
    t41 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 1, 0LL);
    goto LAB28;

LAB31:    *((unsigned int *)t42) = 1;
    goto LAB33;

LAB32:    t34 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(40, ng0);

LAB37:    xsi_set_current_line(41, ng0);
    t41 = (t0 + 2368U);
    t50 = *((char **)t41);
    memset(t49, 0, 8);
    t41 = (t49 + 4);
    t51 = (t50 + 4);
    t52 = *((unsigned int *)t50);
    t53 = (t52 >> 0);
    *((unsigned int *)t49) = t53;
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 0);
    *((unsigned int *)t41) = t55;
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 & 1023U);
    t57 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t57 & 1023U);
    t58 = ((char*)((ng3)));
    memset(t59, 0, 8);
    xsi_vlog_unsigned_minus(t59, 32, t49, 32, t58, 32);
    t60 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t60, t59, 0, 0, 10, 0LL);
    goto LAB36;

LAB42:    t34 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(49, ng0);
    t41 = ((char*)((ng3)));
    t50 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t50, t41, 0, 0, 1, 0LL);
    goto LAB46;

LAB49:    *((unsigned int *)t42) = 1;
    goto LAB51;

LAB50:    t34 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(52, ng0);

LAB55:    xsi_set_current_line(53, ng0);
    t41 = (t0 + 2368U);
    t50 = *((char **)t41);
    memset(t49, 0, 8);
    t41 = (t49 + 4);
    t51 = (t50 + 4);
    t52 = *((unsigned int *)t50);
    t53 = (t52 >> 0);
    *((unsigned int *)t49) = t53;
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 0);
    *((unsigned int *)t41) = t55;
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 & 1023U);
    t57 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t57 & 1023U);
    t58 = ((char*)((ng3)));
    memset(t59, 0, 8);
    xsi_vlog_unsigned_add(t59, 32, t49, 32, t58, 32);
    t60 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t60, t59, 0, 0, 10, 0LL);
    goto LAB54;

LAB60:    t33 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(61, ng0);
    t40 = ((char*)((ng3)));
    t41 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 1, 0LL);
    goto LAB64;

LAB67:    *((unsigned int *)t42) = 1;
    goto LAB69;

LAB68:    t34 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(64, ng0);

LAB73:    xsi_set_current_line(65, ng0);
    t41 = (t0 + 2368U);
    t50 = *((char **)t41);
    memset(t49, 0, 8);
    t41 = (t49 + 4);
    t51 = (t50 + 4);
    t52 = *((unsigned int *)t50);
    t53 = (t52 >> 0);
    *((unsigned int *)t49) = t53;
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 0);
    *((unsigned int *)t41) = t55;
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 & 1023U);
    t57 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t57 & 1023U);
    t58 = (t0 + 744);
    t60 = *((char **)t58);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_minus(t59, 32, t49, 32, t60, 32);
    t58 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t58, t59, 0, 0, 10, 0LL);
    goto LAB72;

LAB78:    t34 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(73, ng0);
    t41 = ((char*)((ng3)));
    t50 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t50, t41, 0, 0, 1, 0LL);
    goto LAB82;

LAB85:    *((unsigned int *)t42) = 1;
    goto LAB87;

LAB86:    t34 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(76, ng0);

LAB91:    xsi_set_current_line(77, ng0);
    t41 = (t0 + 2368U);
    t50 = *((char **)t41);
    memset(t49, 0, 8);
    t41 = (t49 + 4);
    t51 = (t50 + 4);
    t52 = *((unsigned int *)t50);
    t53 = (t52 >> 0);
    *((unsigned int *)t49) = t53;
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 0);
    *((unsigned int *)t41) = t55;
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 & 1023U);
    t57 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t57 & 1023U);
    t58 = (t0 + 744);
    t60 = *((char **)t58);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_add(t59, 32, t49, 32, t60, 32);
    t58 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t58, t59, 0, 0, 10, 0LL);
    goto LAB90;

}


extern void work_m_00000000003520827089_1701048839_init()
{
	static char *pe[] = {(void *)Initial_20_0,(void *)Cont_28_1,(void *)Cont_29_2,(void *)Always_30_3};
	xsi_register_didat("work_m_00000000003520827089_1701048839", "isim/core_sim_isim_beh.exe.sim/work/m_00000000003520827089_1701048839.didat");
	xsi_register_executes(pe);
}
