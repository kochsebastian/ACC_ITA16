#ifndef _ASD_COMPONENTS_ACCFEEDBACKTEST_ENABLEFEEDBACKTEST_AUTOMATIC_H_
#define _ASD_COMPONENTS_ACCFEEDBACKTEST_ENABLEFEEDBACKTEST_AUTOMATIC_H_
/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_AccFeedbackTest_enableFeedbackTest_Automatic.h
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    05.03.2019 15:05:58 Uhr
*
* @brief   "components_AccFeedbackTest_enableFeedbackTest>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "chartab.h"
#include "components_AccFeedback_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_AccFeedbackTest_enableFeedbackTest_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct components_AccFeedbackTest_enableFeedbackTest_Automatic_CAL_MEM_SUBSTRUCT {
   struct components_AccFeedback_Automatic_CAL_MEM_SUBSTRUCT AccF;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_AccFeedbackTest_enableFeedbackTest_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_AccFeedbackTest_enableFeedbackTest_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct components_AccFeedbackTest_enableFeedbackTest_Automatic_RAM_SUBSTRUCT {
   float32 test_dT;
   struct components_AccFeedback_Automatic_RAM_SUBSTRUCT AccF;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_AccFeedbackTest_enableFeedbackTest_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_AccFeedbackTest_enableFeedbackTest_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct components_AccFeedbackTest_enableFeedbackTest_Automatic {
   struct components_AccFeedback_Automatic AccF;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_AccFeedbackTest_enableFeedbackTest_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: components_AccFeedbackTest_enableFeedbackTest_Automatic */
#define _components_AccFeedbackTest_enableFeedbackTest_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'components_AccFeedbackTest_enableFeedbackTest_CAL_MEM' */
/* containing 'CAL_MEM' memory class tree */
extern const volatile struct components_AccFeedbackTest_enableFeedbackTest_Automatic_CAL_MEM_SUBSTRUCT components_AccFeedbackTest_enableFeedbackTest_CAL_MEM;

/* forward declaration of substruct variable 'components_AccFeedbackTest_enableFeedbackTest_RAM' */
/* containing 'RAM' memory class tree */
extern struct components_AccFeedbackTest_enableFeedbackTest_Automatic_RAM_SUBSTRUCT components_AccFeedbackTest_enableFeedbackTest_RAM;

/* forward declaration of component variable 'components_AccFeedbackTest_enableFeedbackTest' */
/* containing 'ROM' memory class tree */
extern const struct components_AccFeedbackTest_enableFeedbackTest_Automatic components_AccFeedbackTest_enableFeedbackTest;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module components_AccFeedbackTest_enableFeedbackTest_Automatic
 ******************************************************************************/
extern void components_AccFeedbackTest_enableFeedbackTest_Automatic_enableFeedbackTest (void);



#endif /* _ASD_COMPONENTS_ACCFEEDBACKTEST_ENABLEFEEDBACKTEST_AUTOMATIC_H_ */
