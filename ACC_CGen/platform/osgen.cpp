// Automatically generated output. DO NOT EDIT!!!
// Configuration tool spec level 5, code level 0, revision 5
// Target is "VRTA", revision 0
// Tool built at 13:18:00 on Jul  3 2012
// Build level is extended
// "Project is 'conf'"
// "Last edited 'unknown'"
// "File generated 'Tue Feb 19 16:15:39 2019'"
// "Target variant 'MinGW'"
#define OS_SUPPORTED
#define RTA_OSEK
#define OS_VM_BUILD
#define OSTRACE_NO_REMAPPING
#define OSGEN_BUILD
#include <vrtaCore.h>
extern "C" {
#include "osek.h"
#ifndef NULL
 #define NULL (void *)0
#endif
osOSEKLinkageTableType  * osOSEKLinkageTablePtr;
#if defined(OSTRACE_ENABLED)
 osTraceLinkageTableType * osTraceLinkageTablePtr;
#endif
typedef void (*funcptr)(void);
typedef void * dataptr;
// START_NEAR_I_RAM
struct {
	unsigned int _0;
} OS_L000A = {0xa1};
struct {
	unsigned int _0[34];
} OS_L0001 = {0xa1};
struct {
	unsigned int _0;
} OS_L0002 = {0xa1};
struct {
	unsigned int _0[34];
} OS_L0004 = {0xa1};
struct {
	unsigned int _0;
} OS_L000B = {0xa1};
// END_NEAR_I_RAM
// START_I_RAM
struct {
	unsigned int _0;
} OS_L0007 = {0xa2};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
} OS_L0043 = {0xa2, };
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
} OS_L0042 = {0xa2, };
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
} OS_L0041 = {0xa2, };
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
} OS_L0040 = {0xa2, };
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
} OS_L0046 = {0xa2, };
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
} OS_L0045 = {0xa2, };
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
} OS_L0044 = {0xa2, };
struct {
	unsigned int _0;
	unsigned int _1;
} OS_L003D = {0xa2, };
struct {
	unsigned int _0;
} OS_L000F = {0xa2};
struct {
	unsigned int _0;
} OS_L0010 = {0xa2};
struct {
	unsigned int _0;
} OS_L0008 = {0xa2};
// END_I_RAM
// START_Z_RAM
struct {
	unsigned int _0;
} OS_L000D = {0xa3};
struct {
	unsigned int _0;
} OS_L0005 = {0xa3};
struct {
	unsigned int _0;
} OS_L0006 = {0xa3};
struct {
	unsigned int _0;
} OS_L000E = {0xa3};
// END_Z_RAM
// START_ROM
struct {
	unsigned int _0;
} OS_L0011 = {0xa4};
struct {
	unsigned int _0;
} os_oim = {0x0000000b};
struct {
	unsigned int _0;
	unsigned int _1;
} os_VRTA_e_5_00 = {
	0x00000005,
	0x00000000};
struct {
	unsigned int _0;
} OS_L001F = {0x00000000};
struct {
	unsigned int _0;
} OS_L0020 = {0x00000000};
struct {
	unsigned int _0;
} OS_L0021 = {0x00000000};
struct {
	unsigned int _0;
} OS_L0022 = {0x00000000};
struct {
	unsigned int _0;
} OS_L0023 = {0x00000000};
struct {
	unsigned int _0;
} OS_L0024 = {0x00000000};
struct {
	unsigned int _0;
} OS_L0025 = {0x00000000};
struct {
	unsigned int _0;
} OS_L0026 = {0x00000000};
struct {
	unsigned int _0;
} OS_L0027 = {0x00000000};
struct {
	unsigned int _0;
} OS_L0028 = {0x00000000};
struct {
	unsigned int _0;
} OS_L0029 = {0x00000000};
struct {
	unsigned int _0;
} OS_L002A = {0x00000000};
struct {
	unsigned int _0;
} OS_L002B = {0x00000000};
struct {
	unsigned int _0;
} OS_L002C = {0x00000000};
struct {
	unsigned int _0;
} OS_L0019 = {0xa4};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
	unsigned int _34;
} OS_L002D = {
	0x00000003,
	0x00000001,
	0x00000002,
	0x00000007,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000};
struct {
	unsigned int _0;
} OS_L001A = {0xa4};
struct {
	unsigned int _0;
} OS_L0015 = {0xa4};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
	unsigned int _34;
	funcptr      _35;
	dataptr      _36;
	unsigned int _37;
	unsigned int _38;
	unsigned int _39;
} OS_L0000 = {
	0x00000000,
	0xffffffff,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(funcptr)0,
	&OS_L0043,
	0x00000000,
	0x0,
	0x00000000};
extern void osek_task_e_etasL1Task();
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
	unsigned int _34;
	funcptr      _35;
	dataptr      _36;
	unsigned int _37;
	unsigned int _38;
	unsigned int _39;
} OS_L0033 = {
	0x00000001,
	0x00000002,
	0x00000004,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000003,
	(funcptr)osek_task_e_etasL1Task,
	&OS_L0042,
	0x00000000,
	0x0,
	0x00000000};
extern void osek_task_e_etasConfigTask();
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
	unsigned int _34;
	funcptr      _35;
	dataptr      _36;
	unsigned int _37;
	unsigned int _38;
	unsigned int _39;
} OS_L0034 = {
	0x00000001,
	0x00000001,
	0x00000002,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000003,
	(funcptr)osek_task_e_etasConfigTask,
	&OS_L0041,
	0x00000000,
	0x0,
	0x00000000};
extern void osek_task_e_Task0();
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
	unsigned int _34;
	funcptr      _35;
	dataptr      _36;
	unsigned int _37;
	unsigned int _38;
	unsigned int _39;
} OS_L0035 = {
	0x00000001,
	0x00000000,
	0x00000001,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000002,
	(funcptr)osek_task_e_Task0,
	&OS_L0040,
	0x00000000,
	0x0,
	0x00000000};
extern void osE_etasTimerIsr();
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
	unsigned int _34;
	funcptr      _35;
	dataptr      _36;
	unsigned int _37;
	unsigned int _38;
	unsigned int _39;
} OS_L0039 = {
	0x00000000,
	0xffffffff,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(funcptr)osE_etasTimerIsr,
	&OS_L0046,
	0x00000000,
	0x0,
	0x0000000a};
extern void osE_etasL1Isr();
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
	unsigned int _34;
	funcptr      _35;
	dataptr      _36;
	unsigned int _37;
	unsigned int _38;
	unsigned int _39;
} OS_L003A = {
	0x00000000,
	0xffffffff,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(funcptr)osE_etasL1Isr,
	&OS_L0045,
	0x00000000,
	0x0,
	0x00000001};
extern void osE_etasStopOsIsr();
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
	unsigned int _34;
	funcptr      _35;
	dataptr      _36;
	unsigned int _37;
	unsigned int _38;
	unsigned int _39;
} OS_L003B = {
	0x00000000,
	0xffffffff,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(funcptr)osE_etasStopOsIsr,
	&OS_L0044,
	0x00000000,
	0x0,
	0x0000000b};
struct {
	unsigned int _0;
} OS_L0016 = {0xa4};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
} OS_L001D = {
	0x00000001,
	0x00000002,
	0x00000007,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
} OS_L001E = {
	0x00000000,
	0xffffffff,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
} osek_bcc1_ts = {
	0x00000000,
	0xffffffff,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
} osek_cc2_ts = {
	0x00000001,
	0x00000002,
	0x00000007,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
} osek_ecc_ts = {
	0x00000000,
	0xffffffff,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000};
struct {
	unsigned int _0;
} OS_L002F = {0xffffffff};
struct {
	unsigned int _0;
} OS_L0030 = {0xffffffff};
struct {
	unsigned int _0;
} OS_L0031 = {0xffffffff};
struct {
	unsigned int _0;
} OS_L0032 = {0xffffffff};
struct {
	unsigned int _0;
} OS_L0017 = {0xa4};
struct {
	dataptr      _0;
	dataptr      _1;
	dataptr      _2;
	funcptr      _3;
	funcptr      _4;
	funcptr      _5;
	funcptr      _6;
	unsigned int _7;
} osek_EtasCounter = {
	&OS_L0032,
	&OS_L003D,
	NULL,
	(funcptr)Set_etasCounter,
	(funcptr)Now_etasCounter,
	(funcptr)State_etasCounter,
	(funcptr)Cancel_etasCounter,
	0x0};
struct {
	unsigned int _0;
} OS_L0018 = {0xa4};
struct {
	unsigned int _0;
} OS_L001B = {0xa4};
struct {
	unsigned int _0;
} OS_L001C = {0xa4};
struct {
	unsigned int _0;
} OS_L0012 = {0xa4};
// END_ROM
// START_NEAR_I_RAM_DATA
struct {
	unsigned int _0;
} OS_L000C = {0xa5};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
} OS_iL0000 = {
	0x00000000,
	0xffffffff,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000};
struct {
	unsigned int _0;
} OS_iL0001 = {0x00000000};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
	unsigned int _3;
	unsigned int _4;
	unsigned int _5;
	unsigned int _6;
	unsigned int _7;
	unsigned int _8;
	unsigned int _9;
	unsigned int _10;
	unsigned int _11;
	unsigned int _12;
	unsigned int _13;
	unsigned int _14;
	unsigned int _15;
	unsigned int _16;
	unsigned int _17;
	unsigned int _18;
	unsigned int _19;
	unsigned int _20;
	unsigned int _21;
	unsigned int _22;
	unsigned int _23;
	unsigned int _24;
	unsigned int _25;
	unsigned int _26;
	unsigned int _27;
	unsigned int _28;
	unsigned int _29;
	unsigned int _30;
	unsigned int _31;
	unsigned int _32;
	unsigned int _33;
} OS_iL0002 = {
	0x00000000,
	0xffffffff,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000};
struct {
	unsigned int _0;
} OS_L0014 = {0xa5};
// END_NEAR_I_RAM_DATA
// START_I_RAM_DATA
struct {
	unsigned int _0;
} OS_L0009 = {0xa6};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
} OS_iL0003 = {
	0x00000000,
	0x00000000,
	0x0};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
} OS_iL0004 = {
	0x00000000,
	0x00000000,
	0x0};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
} OS_iL0005 = {
	0x00000000,
	0x00000000,
	0x0};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
} OS_iL0006 = {
	0x00000000,
	0x00000000,
	0x0};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
} OS_iL0007 = {
	0x00000000,
	0x00000000,
	0x0};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
} OS_iL0008 = {
	0x00000000,
	0x00000000,
	0x0};
struct {
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
} OS_iL0009 = {
	0x00000000,
	0x00000000,
	0x0};
struct {
	dataptr      _0;
	unsigned int _1;
} OS_iL0010 = {
	&OS_L003D,
	0x0};
struct {
	unsigned int _0;
} OS_L0013 = {0xa6};
// END_I_RAM_DATA

void osCat2Wrapper(vrtaAppTag tag, vrtaIntPriority oldIPL) {
	(*osOSEKLinkageTablePtr->APIFuncs.os_wrapper_Ptr)(tag, oldIPL);
}

const vrtaVectorTable osVectorTable = {
	RTVECU_NUM_VECTORS, {
	{osCat2Wrapper, 10, (vrtaAppTag)&OS_L0039},
	{0, 32, (vrtaAppTag) 2},
	{0, 32, (vrtaAppTag) 3},
	{0, 32, (vrtaAppTag) 4},
	{0, 32, (vrtaAppTag) 5},
	{0, 32, (vrtaAppTag) 6},
	{0, 32, (vrtaAppTag) 7},
	{0, 32, (vrtaAppTag) 8},
	{0, 32, (vrtaAppTag) 9},
	{0, 32, (vrtaAppTag)10},
	{0, 32, (vrtaAppTag)11},
	{0, 32, (vrtaAppTag)12},
	{0, 32, (vrtaAppTag)13},
	{0, 32, (vrtaAppTag)14},
	{0, 32, (vrtaAppTag)15},
	{osCat2Wrapper,  1, (vrtaAppTag)&OS_L003A},
	{osCat2Wrapper, 11, (vrtaAppTag)&OS_L003B},
	{0, 32, (vrtaAppTag)18},
	{0, 32, (vrtaAppTag)19},
	{0, 32, (vrtaAppTag)20},
	{0, 32, (vrtaAppTag)21},
	{0, 32, (vrtaAppTag)22},
	{0, 32, (vrtaAppTag)23},
	{0, 32, (vrtaAppTag)24},
	{0, 32, (vrtaAppTag)25},
	{0, 32, (vrtaAppTag)26},
	{0, 32, (vrtaAppTag)27},
	{0, 32, (vrtaAppTag)28},
	{0, 32, (vrtaAppTag)29},
	{0, 32, (vrtaAppTag)30},
	{0, 32, (vrtaAppTag)31},
	{0, 32, (vrtaAppTag)32},
}};
static int InitializeMemory(void) {
	int zlen;
	memcpy(&OS_L0001,&OS_iL0000,sizeof(OS_iL0000));
	memcpy(&OS_L0002,&OS_iL0001,sizeof(OS_iL0001));
	memcpy(&OS_L0004,&OS_iL0002,sizeof(OS_iL0002));
	memcpy(&OS_L0043,&OS_iL0003,sizeof(OS_iL0003));
	memcpy(&OS_L0042,&OS_iL0004,sizeof(OS_iL0004));
	memcpy(&OS_L0041,&OS_iL0005,sizeof(OS_iL0005));
	memcpy(&OS_L0040,&OS_iL0006,sizeof(OS_iL0006));
	memcpy(&OS_L0046,&OS_iL0007,sizeof(OS_iL0007));
	memcpy(&OS_L0045,&OS_iL0008,sizeof(OS_iL0008));
	memcpy(&OS_L0044,&OS_iL0009,sizeof(OS_iL0009));
	memcpy(&OS_L003D,&OS_iL0010,sizeof(OS_iL0010));
	zlen = (int)&OS_L000E - (int)&OS_L000D;
	if (zlen < 0) {memset(&OS_L000E,0,-zlen);}
	else {memset(&OS_L000D,0,zlen);}
	return 0;
}
}; // extern "C"

#include <vrtaCore.cpp>
#ifndef VRTA_EXCLUDE_SAMPLE_DEVICES
#include <vrtaSampleDevices.cpp>
#endif
#ifdef VRTA_INCLUDE_DEVICES
#include "devices.cpp"
#endif
#include <vrtaOSEKsupp.c>

//---- End of osgen.cpp ------------------------------------------------------

