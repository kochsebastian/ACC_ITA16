/* This is an automatically generated file */
/* DO NOT EDIT THIS FILE */
/* File generated for project "conf" */
/* Last edited 'unknown' */
/* File generated 'Tue Feb 19 16:15:38 2019' */
/* Target variant 'MinGW' */

/* The file must only be included for the implementation of code for ISR(etasL1Isr) */

#ifndef OS_ISR_etasL1Isr
#define OS_ISR_etasL1Isr

#define OS_ISR

#include "osekcomn.h"

#ifdef OS_FILE_INCLUDED
 #error Multiple File Inclusion
#else /* OS_FILE_INCLUDED */
 #define OS_FILE_INCLUDED
#endif /* OS_FILE_INCLUDED */

#define etasL1Isr_default_profile (0)	/* Profile */
#define OSALARM_alarm_Task0 (0)	/* Alarm */

#define ActivateTask_etasConfigTask() ActivateTask(etasConfigTask)
#define ActivateTask_etasL1Task() ActivateTask(etasL1Task)
#define ActivateTask_Task0() ActivateTask(Task0)

#endif /* OS_ISR_etasL1Isr */
