#ifndef _ASD_COMPONENTS_DETECTCURRENTVELOCITYTEST_RESETCORRECTV_AUTOMATIC_H_
#define _ASD_COMPONENTS_DETECTCURRENTVELOCITYTEST_RESETCORRECTV_AUTOMATIC_H_
/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_DetectCurrentVelocityTest_resetCorrectV_Automatic.h
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    05.03.2019 15:05:58 Uhr
*
* @brief   "components_DetectCurrentVelocityTest_resetCorrectV>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "chartab.h"
#include "components_DetectCurrentVelocity_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_DetectCurrentVelocityTest_resetCorrectV_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct components_DetectCurrentVelocityTest_resetCorrectV_Automatic_RAM_SUBSTRUCT {
   float32 v;
   struct components_DetectCurrentVelocity_Automatic_RAM_SUBSTRUCT dcv;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_DetectCurrentVelocityTest_resetCorrectV_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_DetectCurrentVelocityTest_resetCorrectV_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct components_DetectCurrentVelocityTest_resetCorrectV_Automatic {
   struct components_DetectCurrentVelocity_Automatic dcv;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_DetectCurrentVelocityTest_resetCorrectV_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: components_DetectCurrentVelocityTest_resetCorrectV_Automatic */
#define _components_DetectCurrentVelocityTest_resetCorrectV_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'components_DetectCurrentVelocityTest_resetCorrectV_RAM' */
/* containing 'RAM' memory class tree */
extern struct components_DetectCurrentVelocityTest_resetCorrectV_Automatic_RAM_SUBSTRUCT components_DetectCurrentVelocityTest_resetCorrectV_RAM;

/* forward declaration of component variable 'components_DetectCurrentVelocityTest_resetCorrectV' */
/* containing 'ROM' memory class tree */
extern const struct components_DetectCurrentVelocityTest_resetCorrectV_Automatic components_DetectCurrentVelocityTest_resetCorrectV;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module components_DetectCurrentVelocityTest_resetCorrectV_Automatic
 ******************************************************************************/
extern void components_DetectCurrentVelocityTest_resetCorrectV_Automatic_resetCorrectV (void);



#endif /* _ASD_COMPONENTS_DETECTCURRENTVELOCITYTEST_RESETCORRECTV_AUTOMATIC_H_ */
