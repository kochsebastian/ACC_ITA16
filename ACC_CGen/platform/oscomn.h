/*
 * Automatically generated output. DO NOT EDIT!!!
 * Configuration tool spec level 5, code level 0, revision 5
 * Target is "VRTA", revision 0
 * Tool built at 13:17:55 on Jul  3 2012
 * Build level is extended
 * Project is 'conf'
 * Last edited 'unknown'
 * File generated 'Tue Mar 05 15:06:22 2019'
 * Target variant 'MinGW'
 */
#ifndef __OS_COMN_H__
#define __OS_COMN_H__
#ifdef OS_PREINCLUDE
#include OS_PREINCLUDE
#endif

#ifndef OS_ET_MEASURE
#define OS_ET_MEASURE (1U)
#endif
#ifndef OS_EXTENDED_BUILD
#define OS_EXTENDED_BUILD (1U)
#endif
#include "oscore.h"

#ifndef OSGEN_BUILD

/* taskset handles */

extern OS_NEAR struct os_taskset OS_L0001;
#define os_ready_tasks (&OS_L0001)
extern struct os_taskset OS_L001D;
#define os_all_tasks (&OS_L001D)
extern struct os_taskset OS_L001E;
#define os_no_tasks (&OS_L001E)
extern struct os_taskset osek_bcc1_ts;
#define osek_bcc1_tasks (&osek_bcc1_ts)
extern struct os_taskset osek_cc2_ts;
#define osek_cc2_tasks (&osek_cc2_ts)
extern struct os_taskset osek_ecc_ts;
#define osek_ecc_tasks (&osek_ecc_ts)

/* task handles */
extern struct os_task OS_L0000;
#define os_idle_task (&OS_L0000)
extern struct os_task OS_L0033;
#define osek_task_etasL1Task (&OS_L0033)
extern struct os_task OS_L0034;
#define osek_task_etasConfigTask (&OS_L0034)
extern struct os_task OS_L0035;
#define osek_task_Task0 (&OS_L0035)

/* ISR handles */
extern struct os_task OS_L0039;
#define osek_interrupt_etasTimerIsr (&OS_L0039)
extern struct os_task OS_L003A;
#define osek_interrupt_etasL1Isr (&OS_L003A)
extern struct os_task OS_L003B;
#define osek_interrupt_etasStopOsIsr (&OS_L003B)

/* activator handles */
extern struct os_activator osek_EtasCounter;
#define EtasCounter (&osek_EtasCounter)

/* arrivalpoint handles */

/* timebase constants */
#define etasCounter_modulus (0U)
#define real_time_modulus (0U)
#define cpu_clock_modulus (0U)
#define sys_timebase_ticks_per_s (1000000.00000000)
#define sys_timebase_modulus (0U)

#endif /* OSGEN_BUILD */





#endif /* __OS_COMN_H__ */
