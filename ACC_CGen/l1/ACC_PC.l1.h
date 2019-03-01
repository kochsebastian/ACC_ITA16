#ifndef _STRUCTURE_ASD_L1_ACC_PC
#define _STRUCTURE_ASD_L1_ACC_PC
/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    ACC_PC.l1.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Declarations for L1 node: ACC_PC
 *
 **/
#include "a_basdef.h"
#include "components_Globals_Automatic.l1.h"
#include "components_Simulation_Automatic.l1.h"
#include "interfaces_interfaces_Automatic.l1.h"

/**
 * local variables object structure 
 **/
struct L1_ACC_PC_Obj {
	ASDObjectHeader objectHeader;
};

/**
 * static variables object structure 
 **/
typedef struct {
	ASDObjectHeader objectHeader;
	struct L1_components_Globals_Automatic_Obj* components_Globals_Automatic;
	struct L1_components_Simulation_Automatic_Obj* components_Simulation_Automatic;
	struct L1_interfaces_interfaces_Automatic_Obj* interfaces_interfaces_Automatic;
} L1_ACC_PC_Class;

extern L1_ACC_PC_Class L1_ACC_PC_ClassObj;

/**
 * external functions 
 **/
extern void initClass_L1_ACC_PC (L1_ACC_PC_Class* _ASCET_class);
extern struct L1_ACC_PC_Obj* initInstance_L1_ACC_PC(void);
#endif /* _STRUCTURE_ASD_L1_ACC_PC */
