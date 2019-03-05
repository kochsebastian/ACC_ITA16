/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_Stecke_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    05.03.2019 15:06:19 Uhr
*
* @brief   "components_Stecke>>Automatic (module code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_Stecke_Automatic.h"
#include "components_Globals_Automatic.h"
#include "ESDL_Linear_Interpolation.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/



#define AirFriction_REF (&(self->components_Stecke_Automatic_CAL_MEM->AirFriction))
#define BrakeMomentum_REF (&(self->components_Stecke_Automatic_CAL_MEM->BrakeMomentum))
#define components_Globals_v_VAL (components_Globals_v)
#define dh_VAL (self->components_Stecke_Automatic_RAM->dh)
#define ds_VAL (self->components_Stecke_Automatic_RAM->ds)
#define EngineMomentum_REF (&(self->components_Stecke_Automatic_CAL_MEM->EngineMomentum))
#define h_VAL (self->components_Stecke_Automatic_RAM->h)
#define Landscape_REF (&(self->components_Stecke_Automatic_CAL_MEM->Landscape))
#define momentum_VAL (self->components_Stecke_Automatic_RAM->momentum)
#define s_VAL (self->components_Stecke_Automatic_RAM->s)
#define TrackSize_VAL (self->components_Stecke_Automatic_RAM->TrackSize)


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_Stecke_Automatic_getHeight'
 * ----------------------------------------------------------------------------
 * model name:...................................'getHeight'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_Stecke_Automatic_getHeight (
               const struct components_Stecke_Automatic * self,
   /* IN    */ const float32                              at
   )
{
   return ESDL_Linear_CharTable1_getAt_r32r32((Landscape_REF)->xSize, (Landscape_REF)->xDist, (Landscape_REF)->values, at);
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_Stecke_Automatic_getHeight'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_Stecke_Automatic_getV'
 * ----------------------------------------------------------------------------
 * model name:...................................'getV'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_Stecke_Automatic_getV ( const struct components_Stecke_Automatic * self)
{
   return components_Globals_v_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_Stecke_Automatic_getV'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_Stecke_Automatic_vCar'
 * ----------------------------------------------------------------------------
 * model name:...................................'vCar'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void components_Stecke_Automatic_vCar (
               const struct components_Stecke_Automatic * self,
   /* IN    */ const float32                              brakeCtrl,
   /* IN    */ const float32                              powerCtrl,
   /* IN    */ const float32                              my_dT
   )
{
   if (s_VAL > TrackSize_VAL)
   {
      s_VAL = 0.0F;
   } /* end if */
   momentum_VAL
      = ESDL_Linear_CharTable2_getAt_r32r32r32((EngineMomentum_REF)->xSize, (EngineMomentum_REF)->xDist, (EngineMomentum_REF)->ySize, (EngineMomentum_REF)->yDist, (EngineMomentum_REF)->values, powerCtrl, components_Globals_v_VAL);
   ds_VAL = (components_Globals_v_VAL * my_dT) / 3.6F;
   s_VAL = ds_VAL + s_VAL;
   dh_VAL
      = h_VAL - ESDL_Linear_CharTable1_getAt_r32r32((Landscape_REF)->xSize, (Landscape_REF)->xDist, (Landscape_REF)->values, s_VAL);
   h_VAL
      = ESDL_Linear_CharTable1_getAt_r32r32((Landscape_REF)->xSize, (Landscape_REF)->xDist, (Landscape_REF)->values, s_VAL);
   if (components_Globals_v_VAL < 0.0F)
   {
      components_Globals_v_VAL = 0.0F;
   } /* end if */
   components_Globals_v_VAL
      = ((ESDL_Linear_CharTable1_getAt_r32r32((BrakeMomentum_REF)->xSize, (BrakeMomentum_REF)->xDist, (BrakeMomentum_REF)->values, brakeCtrl) + momentum_VAL + ESDL_Linear_CharTable1_getAt_r32r32((AirFriction_REF)->xSize, (AirFriction_REF)->xDist, (AirFriction_REF)->values, components_Globals_v_VAL) + ((((ds_VAL == 0.0F) ? dh_VAL : (dh_VAL / ds_VAL))) * 9.81F)) * my_dT * 3.6F) + components_Globals_v_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_Stecke_Automatic_vCar'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/


