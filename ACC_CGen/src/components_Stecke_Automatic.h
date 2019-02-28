#ifndef _ASD_COMPONENTS_STECKE_AUTOMATIC_H_
#define _ASD_COMPONENTS_STECKE_AUTOMATIC_H_
/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_Stecke_Automatic.h
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    19.02.2019 16:15:37 Uhr
*
* @brief   "components_Stecke>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "chartab.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_Stecke_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct components_Stecke_Automatic_CAL_MEM_SUBSTRUCT {
   float32 TrackSize;
   struct CharTable1_real32_6_real32_TYPE AirFriction;
   struct CharTable1_real32_6_real32_TYPE BrakeMomentum;
   struct CharTable2_real32_6_real32_6_real32_TYPE EngineMomentum;
   struct CharTable1_real32_20_real32_TYPE Landscape;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_Stecke_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_Stecke_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct components_Stecke_Automatic_RAM_SUBSTRUCT {
   float32 dh;
   float32 ds;
   float32 h;
   float32 momentum;
   float32 s;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_Stecke_Automatic'
 ******************************************************************************/


/* component structure for module COMPONENTS_STECKE_AUTOMATIC intentionally not created */
/* reason: no local elements                                                  */

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ................components_Stecke_Automatic */
#define _components_Stecke_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'components_Stecke_CAL_MEM' */
/* containing 'CAL_MEM' memory class tree */
extern struct components_Stecke_Automatic_CAL_MEM_SUBSTRUCT components_Stecke_CAL_MEM;

/* forward declaration of substruct variable 'components_Stecke_RAM' */
/* containing 'RAM' memory class tree */
extern struct components_Stecke_Automatic_RAM_SUBSTRUCT components_Stecke_RAM;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module components_Stecke_Automatic
 ******************************************************************************/
extern float32 components_Stecke_Automatic_vCar (
   /* IN    */ const float32 brakeCtrl,
   /* IN    */ const float32 powerCtrl
   );
extern void components_Stecke_Automatic_strecke_test (void);



#endif /* _ASD_COMPONENTS_STECKE_AUTOMATIC_H_ */