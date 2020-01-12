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
    work_m_00000000002734036030_0147935835_init();
    work_m_00000000002710275372_2958181385_init();
    work_m_00000000001837229673_1069848932_init();
    work_m_00000000001893646705_1882570853_init();
    work_m_00000000004078137807_3785313550_init();
    work_m_00000000003520827089_1701048839_init();
    work_m_00000000000375504622_2408988162_init();
    work_m_00000000001962540375_2778910944_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001962540375_2778910944");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
