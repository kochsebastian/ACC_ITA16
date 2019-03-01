#define NO_OSEKLIB

#include "IntecrioSimulationDevice.h"
#include "IntecrioL1Device.h"
#include "VRTAMessageDevice.h"

#include "devices.h"
#include "assert.h"

extern "C"
{
    IntecrioL1BufferType IntecrioL1Buffer; /* [VP_VECU 666] */
}

Intecrio::VirtualClockDevice clockDevice;
Intecrio::VirtualAdminDevice adminDevice;

vrtaMessageDevice intecrioDevice((vrtaTextPtr)INTECRIO_L1_DEVICE_NAME,
                                 (vrtaTextPtr)"Type=VirtualCommunications\n"
                                 "Version=3.0",
                                  IntecrioL1Buffer.message,
                                  SIZE_L1_BUFFER_LARGE,
                                  &IntecrioL1Buffer.length,
                                  INTECRIO_L1_DEVICE_INTERRUPT);


void InitializeDevices(void)
{
}

extern "C"
{
    /////////////////////////////////////////////////////////////////////////
    // C++ adapters
    /////////////////////////////////////////////////////////////////////////

    void TargetIdle(void)
    {
         clockDevice.Idle();
    }

    uint64 GetTargetTickCount()
    {
        return clockDevice.GetCount();
    }

    void TargetEnableInterrupts(void)
    {
	    vrtaAction action;

	    action.devID                = ICU_DEVICE_ID;
	    action.devAction            = ICU_ACTION_ID_Unmask;
	    action.devActionLen         = sizeof(action.devEmbeddedData.uVal);
	    action.devActionData        = NULL;

	    for (unsigned i = 1; i < 32; i++)
        {
	        action.devEmbeddedData.uVal = i;
	        vrtaSendAction(ICU_DEVICE_ID, &action);
        }
    }

    void clockDevice_StopIfOverflow(A1bDacqGroup *a1bGroup)
    {
        clockDevice.StopIfOverflow(a1bGroup);
    }

    void clockDevice_StartIfSpace(A1bDacqGroup *a1bGroup)
    {
        clockDevice.StartIfSpace(a1bGroup);
    }

    uint32 clockDevice_GetUseOfCalibrationTimestamps()
    {
        return clockDevice.GetUseOfCalibrationTimestamps();
    }

    void intecrioDevice_CompletedMessage()
    {
        intecrioDevice.CompletedMessage();
    }

    uint32 adminDevice_GetAvailableMemory()
    {
        return adminDevice.GetAvailableMemory();
    }

    /////////////////////////////////////////////////////////////////////////
    // required functions for the "advanced counter"
    /////////////////////////////////////////////////////////////////////////

    void increment_time_compare_register_by(TickType i)
    {
        // verboseLog(0, "increment_time_compare_register_by: %d", i);
        clockDevice.IncrementMatch(i);
    }


    OS_CALLBACK(void) Set_etasCounter(TickType Match)
    {
        //verboseLog(0, "Set_etasCounter: %d", Match);

        clockDevice.SetMatch(Match);
        clockDevice.EnableInterrupt();

        vrtaAction action;
        action.devID = ICU_DEVICE_ID;
        action.devActionLen = sizeof(action.devEmbeddedData.uVal);
        action.devActionData = NULL;
        action.devEmbeddedData.uVal = Intecrio::INTECRIO_CLOCK_DEVICE_INTERRUPT;

        // Clear pending interrupt
        action.devAction = ICU_ACTION_ID_Clear;
        vrtaSendAction(ICU_DEVICE_ID, &action);

        // Unmask interrupt
        action.devAction = ICU_ACTION_ID_Unmask;
        vrtaSendAction(ICU_DEVICE_ID, &action);
    }

    OS_CALLBACK(TickType) Now_etasCounter()
    {
        //verboseLog(0, "Now_etasCounter: %d", clockDevice.GetMatch());
        return clockDevice.GetMatch();
    }

    OS_CALLBACK(void) State_etasCounter(ScheduleStatusRefType stat)
    {
        //verboseLog(0, "State_etasCounter");

        vrtaEvent event;
        event.devID = ICU_DEVICE_ID;
        event.devEvent = ICU_EVENT_ID_Pending;
        event.devEventLen = 0;
        event.devEventData = NULL;
        vrtaGetState(event.devID, &event);

        stat->status = OS_STATUS_RUNNING;

        if (event.devEmbeddedData.uVal &
            (1 << (Intecrio::INTECRIO_CLOCK_DEVICE_INTERRUPT - 1)))
        {
            //verboseLog(0, " * Setting the status!");
            stat->status = OS_STATUS_RUNNING + OS_STATUS_PENDING;
        }

        //verboseLog(0, " * Expiring on %d", clockDevice.GetMatch() - clockDevice.GetCount());
        stat->expiry = clockDevice.GetMatch() - clockDevice.GetCount();
    }

    OS_CALLBACK(void) Cancel_etasCounter()
    {
        //verboseLog(0, "Cancel_etasCounter");

        // Remove from interrupt
        clockDevice.DisableInterrupt();

        vrtaAction action;
        action.devID = ICU_DEVICE_ID;
        action.devActionLen = sizeof(action.devEmbeddedData.uVal);
        action.devActionData = NULL;
        action.devEmbeddedData.uVal = Intecrio::INTECRIO_CLOCK_DEVICE_INTERRUPT;

        // Mask interrupt
        action.devAction = ICU_ACTION_ID_Mask;
        vrtaSendAction(ICU_DEVICE_ID, &action);

        // Clear pending interrupt
        action.devAction = ICU_ACTION_ID_Clear;
        vrtaSendAction(ICU_DEVICE_ID, &action);
    }

    /* End of required functions for the "advanced counter" */

    void TargetDisableClockInterrupt()
    {
        Cancel_etasCounter();
    }

};
