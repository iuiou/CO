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
static const char *ng0 = "D:/verilog/p4/P4/ALU.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};



static void Cont_28_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t36[8];
    char t67[8];
    char t68[8];
    char t71[8];
    char t101[8];
    char t108[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t63 = *((unsigned int *)t4);
    t64 = (~(t63));
    t65 = *((unsigned int *)t29);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t67, 8);

LAB20:    t98 = (t0 + 3512);
    t109 = (t98 + 56U);
    t110 = *((char **)t109);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    memcpy(t112, t3, 8);
    xsi_driver_vfirst_trans(t98, 0, 31);
    t113 = (t0 + 3416);
    *((int *)t113) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = (t0 + 1208U);
    t35 = *((char **)t33);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t33 = (t34 + 4);
    t40 = (t35 + 4);
    t41 = (t36 + 4);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB13;

LAB14:    t69 = (t0 + 1368U);
    t70 = *((char **)t69);
    t69 = ((char*)((ng2)));
    memset(t71, 0, 8);
    t72 = (t70 + 4);
    t73 = (t69 + 4);
    t74 = *((unsigned int *)t70);
    t75 = *((unsigned int *)t69);
    t76 = (t74 ^ t75);
    t77 = *((unsigned int *)t72);
    t78 = *((unsigned int *)t73);
    t79 = (t77 ^ t78);
    t80 = (t76 | t79);
    t81 = *((unsigned int *)t72);
    t82 = *((unsigned int *)t73);
    t83 = (t81 | t82);
    t84 = (~(t83));
    t85 = (t80 & t84);
    if (t85 != 0)
        goto LAB27;

LAB24:    if (t83 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t71) = 1;

LAB27:    memset(t68, 0, 8);
    t87 = (t71 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t71);
    t91 = (t90 & t89);
    t92 = (t91 & 1U);
    if (t92 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t87) != 0)
        goto LAB30;

LAB31:    t94 = (t68 + 4);
    t95 = *((unsigned int *)t68);
    t96 = *((unsigned int *)t94);
    t97 = (t95 || t96);
    if (t97 > 0)
        goto LAB32;

LAB33:    t102 = *((unsigned int *)t68);
    t103 = (~(t102));
    t104 = *((unsigned int *)t94);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t94) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t68) > 0)
        goto LAB38;

LAB39:    memcpy(t67, t108, 8);

LAB40:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t36, 32, t67, 32);
    goto LAB20;

LAB18:    memcpy(t3, t36, 8);
    goto LAB20;

LAB21:    t47 = *((unsigned int *)t36);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t36) = (t47 | t48);
    t49 = (t34 + 4);
    t50 = (t35 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (~(t51));
    t53 = *((unsigned int *)t34);
    t54 = (t53 & t52);
    t55 = *((unsigned int *)t50);
    t56 = (~(t55));
    t57 = *((unsigned int *)t35);
    t58 = (t57 & t56);
    t59 = (~(t54));
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t61 & t59);
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    goto LAB23;

LAB26:    t86 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t68) = 1;
    goto LAB31;

LAB30:    t93 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB31;

LAB32:    t98 = (t0 + 1048U);
    t99 = *((char **)t98);
    t98 = (t0 + 1208U);
    t100 = *((char **)t98);
    memset(t101, 0, 8);
    xsi_vlog_unsigned_minus(t101, 32, t99, 32, t100, 32);
    goto LAB33;

LAB34:    t98 = (t0 + 1048U);
    t106 = *((char **)t98);
    t98 = (t0 + 1208U);
    t107 = *((char **)t98);
    memset(t108, 0, 8);
    xsi_vlog_unsigned_add(t108, 32, t106, 32, t107, 32);
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t67, 32, t101, 32, t108, 32);
    goto LAB40;

LAB38:    memcpy(t67, t101, 8);
    goto LAB40;

}

static void Cont_31_1(char *t0)
{
    char t4[8];
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 3576);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t33 = (t0 + 3432);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}


extern void work_m_00000000000483242059_0886308060_init()
{
	static char *pe[] = {(void *)Cont_28_0,(void *)Cont_31_1};
	xsi_register_didat("work_m_00000000000483242059_0886308060", "isim/test_isim_beh.exe.sim/work/m_00000000000483242059_0886308060.didat");
	xsi_register_executes(pe);
}
