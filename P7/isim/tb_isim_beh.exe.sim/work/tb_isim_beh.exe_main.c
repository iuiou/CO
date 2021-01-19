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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001086253257_3224323566_init();
    work_m_00000000002915878905_3037777339_init();
    work_m_00000000000686243558_3683593905_init();
    work_m_00000000004051057122_1621229167_init();
    work_m_00000000000258022151_0358683917_init();
    work_m_00000000003352426266_3375560057_init();
    work_m_00000000002484408176_0886308060_init();
    work_m_00000000002533188615_2228658322_init();
    work_m_00000000001905526049_3207205754_init();
    work_m_00000000001297585036_2924402094_init();
    work_m_00000000003956190620_1586474674_init();
    work_m_00000000000368449631_1964565514_init();
    work_m_00000000003478898456_2320133124_init();
    work_m_00000000001794507478_2067334998_init();
    work_m_00000000001359385731_2128832208_init();
    work_m_00000000000983880013_3975733304_init();
    work_m_00000000002689740410_3508565487_init();
    work_m_00000000000056312757_3816367305_init();
    work_m_00000000000056312757_2054190451_init();
    work_m_00000000000450968094_3877310806_init();
    work_m_00000000000873246108_3671711236_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000873246108_3671711236");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}