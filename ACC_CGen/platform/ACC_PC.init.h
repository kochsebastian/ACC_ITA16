/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    ACC_PC.init.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Model initialization for application: ACC_PC
 *
 **/
#pragma once

#include "a_basdef.h"
#include "protocol\l1\p_sysdef.h"

/**
 * initialize L1 Instance Tree 
 **/

/* Definition of the class structure */
typedef struct
{
    ASDObjectHeader objectHeader;
    struct L1_ACC_PC_Obj* ASCET_TOP_Ptr;
} ROOT_ACC_PC_Class;

/* Definition of the class instance structure */
struct ROOT_ACC_PC_Obj
{
    ASDObjectHeader objectHeader;
};

extern ASDObject *initializeRoot_ACC_PC(void);

/**
 * initialize model 
 **/
extern ASDObject *initializeModel (void);