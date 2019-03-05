/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_FuSi_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    05.03.2019 11:24:16 Uhr
*
* @brief   "components_FuSi>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Defines
 *----------------------------------------------------------------------------*/

#define __ASD_REQUIRES_OS_INFACE

/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_FuSi_Automatic.h"
#include "components_Globals_Automatic.h"
#include "interfaces_interfaces_Automatic.h"


/******************************************************************************
 * DEFINITION OF COMPONENT VARIABLE OMITTED
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'components_FuSi'
 * reason:.......................................no local elements
 * ---------------------------------------------------------------------------*/







/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF PROCESS 'components_FuSi_Automatic_calc'
 * ----------------------------------------------------------------------------
 * model name:...................................'calc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/
/* messages used by this process */


void components_FuSi_Automatic_calc (void)
{
   /* define local message copies */
   uint8 interfaces_interfaces_crash_detected__components_FuSi_Automatic_calc;
   /* receive messages implicitly */
   {
      interfaces_interfaces_crash_detected__components_FuSi_Automatic_calc = interfaces_interfaces_crash_detected;
   }
   components_FuSi_Automatic_onCrash(interfaces_interfaces_crash_detected__components_FuSi_Automatic_calc);
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF PROCESS 'components_FuSi_Automatic_calc'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_FuSi_Automatic_onCrash'
 * ----------------------------------------------------------------------------
 * model name:...................................'onCrash'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void components_FuSi_Automatic_onCrash (/* IN    */ const uint8 crash)
{
   if (crash)
   {
      components_Globals_acc_status = false;
   } /* end if */
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_FuSi_Automatic_onCrash'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



