/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_AccFeedbackTest_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    05.03.2019 14:49:57 Uhr
*
* @brief   "components_AccFeedbackTest>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_AccFeedbackTest_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'components_AccFeedbackTest_CAL_MEM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * model name:...................................'components_AccFeedbackTest'
 * data set:.....................................'COMPONENTS_ACCFEEDBACKTEST_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
const volatile struct components_AccFeedbackTest_Automatic_CAL_MEM_SUBSTRUCT components_AccFeedbackTest_CAL_MEM = {
   /* substruct: components_AccFeedbackTest_CAL_MEM.AccF (modeled as:'AccF.components_AccFeedbackTest') */
   {
      /* struct element:'components_AccFeedbackTest_CAL_MEM.AccF.c' (modeled as:'c.AccF.components_AccFeedbackTest') */
      0.0F
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'components_AccFeedbackTest_CAL_MEM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'components_AccFeedbackTest_RAM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * model name:...................................'components_AccFeedbackTest'
 * data set:.....................................'COMPONENTS_ACCFEEDBACKTEST_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct components_AccFeedbackTest_Automatic_RAM_SUBSTRUCT components_AccFeedbackTest_RAM = {
   /* struct element:'components_AccFeedbackTest_RAM.test_dT' (modeled as:'test_dT.components_AccFeedbackTest') */
   0.0F,
   /* substruct: components_AccFeedbackTest_RAM.AccF (modeled as:'AccF.components_AccFeedbackTest') */
   {
      /* struct element:'components_AccFeedbackTest_RAM.AccF.duration' (modeled as:'duration.AccF.components_AccFeedbackTest') */
      0.0F,
      /* struct element:'components_AccFeedbackTest_RAM.AccF.acc_status_old' (modeled as:'acc_status_old.AccF.components_AccFeedbackTest') */
      false,
      /* struct element:'components_AccFeedbackTest_RAM.AccF.feedback' (modeled as:'feedback.AccF.components_AccFeedbackTest') */
      false
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'components_AccFeedbackTest_RAM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF COMPONENT VARIABLE 'components_AccFeedbackTest'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'components_AccFeedbackTest'
 * data set:.....................................'COMPONENTS_ACCFEEDBACKTEST_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
const struct components_AccFeedbackTest_Automatic components_AccFeedbackTest = {
   /* substruct: components_AccFeedbackTest.AccF (modeled as:'AccF.components_AccFeedbackTest') */
   {
      /* type descriptor pointer 'components_AccFeedback_Automatic_CAL_MEM' for memory class substruct for 'CAL_MEM' */
      &components_AccFeedbackTest_CAL_MEM.AccF,
      /* type descriptor pointer 'components_AccFeedback_Automatic_RAM' for memory class substruct for 'RAM' */
      &components_AccFeedbackTest_RAM.AccF
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF COMPONENT VARIABLE 'components_AccFeedbackTest'
 ******************************************************************************/







/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/

/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



