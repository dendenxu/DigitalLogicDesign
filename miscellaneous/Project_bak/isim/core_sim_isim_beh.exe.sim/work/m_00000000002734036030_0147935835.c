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
static const char *ng0 = "D:/Documents/Materials/DENDEN/PROJ/Verilog/kao_ban_zi/lfsr.v";
static int ng1[] = {4, 0};
static int ng2[] = {1, 0};



static void Initial_8_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(8, ng0);

LAB2:    xsi_set_current_line(9, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1904);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 10);

LAB1:    return;
}

static void Always_11_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t25[8];
    char t34[8];
    char t51[8];
    char t60[8];
    char t77[8];
    char t86[8];
    char t103[8];
    char t112[8];
    char t129[8];
    char t138[8];
    char t155[8];
    char t164[8];
    char t181[8];
    char t190[8];
    char t204[8];
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t128;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    char *t154;
    char *t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    char *t179;
    char *t180;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t205;
    char *t206;
    char *t207;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;

LAB0:    t1 = (t0 + 3072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 3392);
    *((int *)t2) = 1;
    t3 = (t0 + 3104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(12, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 10, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1904);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t11 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (t16 >> 9);
    t18 = (t17 & 1);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 9);
    t21 = (t20 & 1);
    *((unsigned int *)t12) = t21;
    t22 = (t0 + 1904);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t26 = (t25 + 4);
    t27 = (t24 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 8);
    t30 = (t29 & 1);
    *((unsigned int *)t25) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 8);
    t33 = (t32 & 1);
    *((unsigned int *)t26) = t33;
    t35 = *((unsigned int *)t14);
    t36 = *((unsigned int *)t25);
    t37 = (t35 ^ t36);
    *((unsigned int *)t34) = t37;
    t38 = (t14 + 4);
    t39 = (t25 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB12;

LAB13:
LAB14:    t48 = (t0 + 1904);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t51, 0, 8);
    t52 = (t51 + 4);
    t53 = (t50 + 4);
    t54 = *((unsigned int *)t50);
    t55 = (t54 >> 7);
    t56 = (t55 & 1);
    *((unsigned int *)t51) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 >> 7);
    t59 = (t58 & 1);
    *((unsigned int *)t52) = t59;
    t61 = *((unsigned int *)t34);
    t62 = *((unsigned int *)t51);
    t63 = (t61 ^ t62);
    *((unsigned int *)t60) = t63;
    t64 = (t34 + 4);
    t65 = (t51 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB15;

LAB16:
LAB17:    t74 = (t0 + 1904);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    memset(t77, 0, 8);
    t78 = (t77 + 4);
    t79 = (t76 + 4);
    t80 = *((unsigned int *)t76);
    t81 = (t80 >> 6);
    t82 = (t81 & 1);
    *((unsigned int *)t77) = t82;
    t83 = *((unsigned int *)t79);
    t84 = (t83 >> 6);
    t85 = (t84 & 1);
    *((unsigned int *)t78) = t85;
    t87 = *((unsigned int *)t60);
    t88 = *((unsigned int *)t77);
    t89 = (t87 ^ t88);
    *((unsigned int *)t86) = t89;
    t90 = (t60 + 4);
    t91 = (t77 + 4);
    t92 = (t86 + 4);
    t93 = *((unsigned int *)t90);
    t94 = *((unsigned int *)t91);
    t95 = (t93 | t94);
    *((unsigned int *)t92) = t95;
    t96 = *((unsigned int *)t92);
    t97 = (t96 != 0);
    if (t97 == 1)
        goto LAB18;

LAB19:
LAB20:    t100 = (t0 + 1904);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    memset(t103, 0, 8);
    t104 = (t103 + 4);
    t105 = (t102 + 4);
    t106 = *((unsigned int *)t102);
    t107 = (t106 >> 5);
    t108 = (t107 & 1);
    *((unsigned int *)t103) = t108;
    t109 = *((unsigned int *)t105);
    t110 = (t109 >> 5);
    t111 = (t110 & 1);
    *((unsigned int *)t104) = t111;
    t113 = *((unsigned int *)t86);
    t114 = *((unsigned int *)t103);
    t115 = (t113 ^ t114);
    *((unsigned int *)t112) = t115;
    t116 = (t86 + 4);
    t117 = (t103 + 4);
    t118 = (t112 + 4);
    t119 = *((unsigned int *)t116);
    t120 = *((unsigned int *)t117);
    t121 = (t119 | t120);
    *((unsigned int *)t118) = t121;
    t122 = *((unsigned int *)t118);
    t123 = (t122 != 0);
    if (t123 == 1)
        goto LAB21;

LAB22:
LAB23:    t126 = (t0 + 1904);
    t127 = (t126 + 56U);
    t128 = *((char **)t127);
    memset(t129, 0, 8);
    t130 = (t129 + 4);
    t131 = (t128 + 4);
    t132 = *((unsigned int *)t128);
    t133 = (t132 >> 4);
    t134 = (t133 & 1);
    *((unsigned int *)t129) = t134;
    t135 = *((unsigned int *)t131);
    t136 = (t135 >> 4);
    t137 = (t136 & 1);
    *((unsigned int *)t130) = t137;
    t139 = *((unsigned int *)t112);
    t140 = *((unsigned int *)t129);
    t141 = (t139 ^ t140);
    *((unsigned int *)t138) = t141;
    t142 = (t112 + 4);
    t143 = (t129 + 4);
    t144 = (t138 + 4);
    t145 = *((unsigned int *)t142);
    t146 = *((unsigned int *)t143);
    t147 = (t145 | t146);
    *((unsigned int *)t144) = t147;
    t148 = *((unsigned int *)t144);
    t149 = (t148 != 0);
    if (t149 == 1)
        goto LAB24;

LAB25:
LAB26:    t152 = (t0 + 1904);
    t153 = (t152 + 56U);
    t154 = *((char **)t153);
    memset(t155, 0, 8);
    t156 = (t155 + 4);
    t157 = (t154 + 4);
    t158 = *((unsigned int *)t154);
    t159 = (t158 >> 3);
    t160 = (t159 & 1);
    *((unsigned int *)t155) = t160;
    t161 = *((unsigned int *)t157);
    t162 = (t161 >> 3);
    t163 = (t162 & 1);
    *((unsigned int *)t156) = t163;
    t165 = *((unsigned int *)t138);
    t166 = *((unsigned int *)t155);
    t167 = (t165 ^ t166);
    *((unsigned int *)t164) = t167;
    t168 = (t138 + 4);
    t169 = (t155 + 4);
    t170 = (t164 + 4);
    t171 = *((unsigned int *)t168);
    t172 = *((unsigned int *)t169);
    t173 = (t171 | t172);
    *((unsigned int *)t170) = t173;
    t174 = *((unsigned int *)t170);
    t175 = (t174 != 0);
    if (t175 == 1)
        goto LAB27;

LAB28:
LAB29:    t178 = (t0 + 1904);
    t179 = (t178 + 56U);
    t180 = *((char **)t179);
    memset(t181, 0, 8);
    t182 = (t181 + 4);
    t183 = (t180 + 4);
    t184 = *((unsigned int *)t180);
    t185 = (t184 >> 2);
    t186 = (t185 & 1);
    *((unsigned int *)t181) = t186;
    t187 = *((unsigned int *)t183);
    t188 = (t187 >> 2);
    t189 = (t188 & 1);
    *((unsigned int *)t182) = t189;
    t191 = *((unsigned int *)t164);
    t192 = *((unsigned int *)t181);
    t193 = (t191 ^ t192);
    *((unsigned int *)t190) = t193;
    t194 = (t164 + 4);
    t195 = (t181 + 4);
    t196 = (t190 + 4);
    t197 = *((unsigned int *)t194);
    t198 = *((unsigned int *)t195);
    t199 = (t197 | t198);
    *((unsigned int *)t196) = t199;
    t200 = *((unsigned int *)t196);
    t201 = (t200 != 0);
    if (t201 == 1)
        goto LAB30;

LAB31:
LAB32:    t205 = (t0 + 1904);
    t206 = (t205 + 56U);
    t207 = *((char **)t206);
    memset(t204, 0, 8);
    t208 = (t204 + 4);
    t209 = (t207 + 4);
    t210 = *((unsigned int *)t207);
    t211 = (t210 >> 0);
    *((unsigned int *)t204) = t211;
    t212 = *((unsigned int *)t209);
    t213 = (t212 >> 0);
    *((unsigned int *)t208) = t213;
    t214 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t214 & 511U);
    t215 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t215 & 511U);
    xsi_vlogtype_concat(t13, 10, 10, 2U, t204, 9, t190, 1);
    t216 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t216, t13, 0, 0, 10, 0LL);
    goto LAB11;

LAB12:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    goto LAB14;

LAB15:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    goto LAB17;

LAB18:    t98 = *((unsigned int *)t86);
    t99 = *((unsigned int *)t92);
    *((unsigned int *)t86) = (t98 | t99);
    goto LAB20;

LAB21:    t124 = *((unsigned int *)t112);
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t112) = (t124 | t125);
    goto LAB23;

LAB24:    t150 = *((unsigned int *)t138);
    t151 = *((unsigned int *)t144);
    *((unsigned int *)t138) = (t150 | t151);
    goto LAB26;

LAB27:    t176 = *((unsigned int *)t164);
    t177 = *((unsigned int *)t170);
    *((unsigned int *)t164) = (t176 | t177);
    goto LAB29;

LAB30:    t202 = *((unsigned int *)t190);
    t203 = *((unsigned int *)t196);
    *((unsigned int *)t190) = (t202 | t203);
    goto LAB32;

}


extern void work_m_00000000002734036030_0147935835_init()
{
	static char *pe[] = {(void *)Initial_8_0,(void *)Always_11_1};
	xsi_register_didat("work_m_00000000002734036030_0147935835", "isim/core_sim_isim_beh.exe.sim/work/m_00000000002734036030_0147935835.didat");
	xsi_register_executes(pe);
}
