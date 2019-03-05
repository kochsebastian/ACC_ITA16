#ifndef _ASD_COMPONENTS_STECKE_AUTOMATIC_H_
#define _ASD_COMPONENTS_STECKE_AUTOMATIC_H_
/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_Stecke_Automatic.h
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    05.03.2019 15:05:58 Uhr
*
* @brief   "components_Stecke>>Automatic (module code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "chartab.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'components_Stecke_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct components_Stecke_Automatic_CAL_MEM_SUBSTRUCT {
   struct CharTable1_real32_6_real32_TYPE AirFriction;
   struct CharTable1_real32_6_real32_TYPE BrakeMomentum;
   struct CharTable2_real32_6_real32_6_real32_TYPE EngineMomentum;
   struct CharTable1_real32_20_real32_TYPE Landscape;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'components_Stecke_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'components_Stecke_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct components_Stecke_Automatic_RAM_SUBSTRUCT {
   float32 TrackSize;
   float32 dh;
   float32 ds;
   float32 h;
   float32 momentum;
   float32 s;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'components_Stecke_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR CLASS 'components_Stecke_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct components_Stecke_Automatic {
   const volatile struct components_Stecke_Automatic_CAL_MEM_SUBSTRUCT * components_Stecke_Automatic_CAL_MEM;
   struct components_Stecke_Automatic_RAM_SUBSTRUCT * components_Stecke_Automatic_RAM;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR CLASS 'components_Stecke_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ................components_Stecke_Automatic */
#define _components_Stecke_Automatic_TYPE_DEF_




/******************************************************************************
 * BEGIN: declaration of global C functions defined by class components_Stecke_Automatic
 ******************************************************************************/
extern float32 components_Stecke_Automatic_getHeight (
               const struct components_Stecke_Automatic * self,
   /* IN    */ const float32                              at
   );
extern float32 components_Stecke_Automatic_getV ( const struct components_Stecke_Automatic * self);
extern void components_Stecke_Automatic_vCar (
               const struct components_Stecke_Automatic * self,
   /* IN    */ const float32                              brakeCtrl,
   /* IN    */ const float32                              powerCtrl,
   /* IN    */ const float32                              my_dT
   );



#endif /* _ASD_COMPONENTS_STECKE_AUTOMATIC_H_ */
