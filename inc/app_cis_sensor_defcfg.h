/*
 * app_cis_sensor_defcfg.h
 *
 *  Created on: 2020�~2��12��
 *      Author: 902447
 */

#ifndef SCENARIO_APP_AIOT_SENSORMDWAKEUP_APP_CIS_SENSOR_DEFCFG_H_
#define SCENARIO_APP_AIOT_SENSORMDWAKEUP_APP_CIS_SENSOR_DEFCFG_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "embARC.h"
#include "embARC_debug.h"
#include "board_config.h"
#include "arc_timer.h"
#include "hx_drv_CIS_common.h"
#include <algo_custom_config.h>
#include <iot_custom_config.h>

/*CIS Compiler flag Selection*/
#define CIS_AOS_MODE
//#define CIS_HM01B0_MONO_MCLK12M
//#define CIS_HM01B0_BAYER_MCLK12M
//#define CIS_HM01B0_MONO_MCLK24M
//#define CIS_HM01B0_BAYER_MCLK24M
//#define CIS_1BIT_IO
//#define CIS_HM0360_MONO_MCLK_12M
//#define CIS_HM0360_BAYER_MCLK_12M
//#define CIS_HM0360_MONO_OSC_PCLK_12M
//#define CIS_HM0360_MONO_OSC_PCLK_24M
//#define CIS_HM0360_BAYER_OSC
//#define CIS_HM2140
//#define CIS_HM0360_MONO_CCM_EXTLDO_MCLK12M
//#define CIS_HM0360_MONO_CCM_INTLDO_MCLK12M
//#define CIS_HM0360_MONO_MCLK_24M
//#define CIS_HM0360_MONO_CCM_EXTLDO_MCLK24M
//#define CIS_HM0360_MONO_CCM_INTLDO_MCLK24M
//#define CIS_HM11B1_MCLK_24M
//#define CIS_HM11B1_REVC_MCLK_24M
//#define CIS_HM0360_MONO_OSC_PCLK_12M_SENSORMD
//#define CIS_HM0360_MONO_MCLK_PCLK_12M_SENSORMD
//#define CIS_HM0360_M_REVB_EXTLDO_MCLK12M
#define CIS_HM0360_M_REVB_EXTLDO_MCLK24M
//#define CIS_HM0360_M_REVB_EXTLDO_OSC24M
//#define CIS_HM0360_B_REVB_EXTLDO_MCLK12M
//#define CIS_HM0360_B_REVB_EXTLDO_MCLK24M
//#define CIS_HM0360_B_REVB_EXTLDO_OSC24M
//#define CIS_HM0360_M_REVB_EXTLDO_MCLK12M_1BIT_XSLEEP
//#define CIS_HM0360_M_REVB_EXTLDO_MCLK24M_1BIT_XSLEEP
//#define CIS_HM0360_M_REVB_EXTLDO_OSC24M_1BIT_XSLEEP
//#define CIS_HM0360_M_REVB_OSC24M_SENSORMD
//#define CIS_HM0360_M_REVB_MCLK_12M_SENSORMD
//#define CIS_HM0360_M_REVB_MCLK_24M_SENSORMD

void app_copy_sensor_default_cfg();

#endif /* SCENARIO_APP_AIOT_SENSORMDWAKEUP_APP_CIS_SENSOR_DEFCFG_H_ */
