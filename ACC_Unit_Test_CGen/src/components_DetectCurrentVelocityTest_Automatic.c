/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_DetectCurrentVelocityTest_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    05.03.2019 15:05:58 Uhr
*
* @brief   "components_DetectCurrentVelocityTest>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_DetectCurrentVelocityTest_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'components_DetectCurrentVelocityTest_RAM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * model name:...................................'components_DetectCurrentVelocityTest'
 * data set:.....................................'COMPONENTS_DETECTCURRENTVELOCITYTEST_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct components_DetectCurrentVelocityTest_Automatic_RAM_SUBSTRUCT components_DetectCurrentVelocityTest_RAM = {
   /* struct element:'components_DetectCurrentVelocityTest_RAM.v' (modeled as:'v.components_DetectCurrentVelocityTest') */
   10.0F,
   /* substruct: components_DetectCurrentVelocityTest_RAM.dcv (modeled as:'dcv.components_DetectCurrentVelocityTest') */
   {
      /* struct element:'components_DetectCurrentVelocityTest_RAM.dcv.v_buffer' (modeled as:'v_buffer.dcv.components_DetectCurrentVelocityTest') */
      0.0F,
      /* struct element:'components_DetectCurrentVelocityTest_RAM.dcv.acc_status_old' (modeled as:'acc_status_old.dcv.components_DetectCurrentVelocityTest') */
      false,
      /* struct element:'components_DetectCurrentVelocityTest_RAM.dcv.status_old' (modeled as:'status_old.dcv.components_DetectCurrentVelocityTest') */
      false
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'components_DetectCurrentVelocityTest_RAM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF COMPONENT VARIABLE 'components_DetectCurrentVelocityTest'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'components_DetectCurrentVelocityTest'
 * data set:.....................................'COMPONENTS_DETECTCURRENTVELOCITYTEST_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
const struct components_DetectCurrentVelocityTest_Automatic components_DetectCurrentVelocityTest = {
   /* substruct: components_DetectCurrentVelocityTest.dcv (modeled as:'dcv.components_DetectCurrentVelocityTest') */
   {
      /* type descriptor pointer 'components_DetectCurrentVelocity_Automatic_RAM' for memory class substruct for 'RAM' */
      &components_DetectCurrentVelocityTest_RAM.dcv
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF COMPONENT VARIABLE 'components_DetectCurrentVelocityTest'
 ******************************************************************************/







/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/

/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/


