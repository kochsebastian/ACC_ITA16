#ifndef _ASD_COMPONENTS_STECKETEST_TESTSTECKE2_AUTOMATIC_H_
#define _ASD_COMPONENTS_STECKETEST_TESTSTECKE2_AUTOMATIC_H_
/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_SteckeTest_testStecke2_Automatic.h
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    05.03.2019 15:05:58 Uhr
*
* @brief   "components_SteckeTest_testStecke2>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "chartab.h"
#include "components_Stecke_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_SteckeTest_testStecke2_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct components_SteckeTest_testStecke2_Automatic_CAL_MEM_SUBSTRUCT {
   struct components_Stecke_Automatic_CAL_MEM_SUBSTRUCT s;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_SteckeTest_testStecke2_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_SteckeTest_testStecke2_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct components_SteckeTest_testStecke2_Automatic_RAM_SUBSTRUCT {
   sint32 i;
   float32 s1;
   float32 s2;
   struct components_Stecke_Automatic_RAM_SUBSTRUCT s;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_SteckeTest_testStecke2_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_SteckeTest_testStecke2_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct components_SteckeTest_testStecke2_Automatic {
   struct components_Stecke_Automatic s;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_SteckeTest_testStecke2_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: components_SteckeTest_testStecke2_Automatic */
#define _components_SteckeTest_testStecke2_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'components_SteckeTest_testStecke2_CAL_MEM' */
/* containing 'CAL_MEM' memory class tree */
extern const volatile struct components_SteckeTest_testStecke2_Automatic_CAL_MEM_SUBSTRUCT components_SteckeTest_testStecke2_CAL_MEM;

/* forward declaration of substruct variable 'components_SteckeTest_testStecke2_RAM' */
/* containing 'RAM' memory class tree */
extern struct components_SteckeTest_testStecke2_Automatic_RAM_SUBSTRUCT components_SteckeTest_testStecke2_RAM;

/* forward declaration of component variable 'components_SteckeTest_testStecke2' */
/* containing 'ROM' memory class tree */
extern const struct components_SteckeTest_testStecke2_Automatic components_SteckeTest_testStecke2;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module components_SteckeTest_testStecke2_Automatic
 ******************************************************************************/
extern void components_SteckeTest_testStecke2_Automatic_testStecke2 (void);



#endif /* _ASD_COMPONENTS_STECKETEST_TESTSTECKE2_AUTOMATIC_H_ */