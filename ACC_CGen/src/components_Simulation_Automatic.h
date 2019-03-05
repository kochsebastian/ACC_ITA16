#ifndef _ASD_COMPONENTS_SIMULATION_AUTOMATIC_H_
#define _ASD_COMPONENTS_SIMULATION_AUTOMATIC_H_
/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_Simulation_Automatic.h
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    05.03.2019 12:41:46 Uhr
*
* @brief   "components_Simulation>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "chartab.h"
#include "components_ACC_Control_Automatic.h"
#include "components_AccFeedback_Automatic.h"
#include "components_OnOff_Automatic.h"
#include "components_Stecke_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_Simulation_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct components_Simulation_Automatic_CAL_MEM_SUBSTRUCT {
   float32 brakePadel;
   float32 gasPadel;
   float32 v_set;
   struct components_ACC_Control_Automatic_CAL_MEM_SUBSTRUCT ACC_Control_instance;
   struct components_AccFeedback_Automatic_CAL_MEM_SUBSTRUCT AccFeedback_instance;
   struct components_Stecke_Automatic_CAL_MEM_SUBSTRUCT Stecke_instance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_Simulation_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_Simulation_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct components_Simulation_Automatic_RAM_SUBSTRUCT {
   float32 brakeVal;
   float32 powerVal;
   struct components_ACC_Control_Automatic_RAM_SUBSTRUCT ACC_Control_instance;
   struct components_AccFeedback_Automatic_RAM_SUBSTRUCT AccFeedback_instance;
   struct components_Stecke_Automatic_RAM_SUBSTRUCT Stecke_instance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_Simulation_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_Simulation_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct components_Simulation_Automatic {
   struct components_ACC_Control_Automatic ACC_Control_instance;
   struct components_AccFeedback_Automatic AccFeedback_instance;
   struct components_Stecke_Automatic Stecke_instance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_Simulation_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ............components_Simulation_Automatic */
#define _components_Simulation_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'components_Simulation_CAL_MEM' */
/* containing 'CAL_MEM' memory class tree */
extern const volatile struct components_Simulation_Automatic_CAL_MEM_SUBSTRUCT components_Simulation_CAL_MEM;

/* forward declaration of substruct variable 'components_Simulation_RAM' */
/* containing 'RAM' memory class tree */
extern struct components_Simulation_Automatic_RAM_SUBSTRUCT components_Simulation_RAM;

/* forward declaration of component variable 'components_Simulation' */
/* containing 'ROM' memory class tree */
extern const struct components_Simulation_Automatic components_Simulation;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module components_Simulation_Automatic
 ******************************************************************************/
extern void components_Simulation_Automatic_calc (void);



#endif /* _ASD_COMPONENTS_SIMULATION_AUTOMATIC_H_ */
