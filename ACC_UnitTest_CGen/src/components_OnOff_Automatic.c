/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_OnOff_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    05.03.2019 11:24:16 Uhr
*
* @brief   "components_OnOff>>Automatic (module code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_OnOff_Automatic.h"
#include "components_Globals_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/





/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_OnOff_Automatic_onoff'
 * ----------------------------------------------------------------------------
 * model name:...................................'onoff'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

uint8 components_OnOff_Automatic_onoff (
   /* IN    */ const float32 v,
   /* IN    */ const uint8   request
   )
{
   if (v > 0.0F)
   {
      components_Globals_acc_status = request;
   }
   else
   {
      components_Globals_acc_status = false;
   } /* end if */
   return components_Globals_acc_status;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_OnOff_Automatic_onoff'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



