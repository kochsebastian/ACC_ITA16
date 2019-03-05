// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_DetectCurrentVelocity_Automatic.h"
	#include "components_Globals_Automatic.h"
	#include "components_DetectCurrentVelocityTest_setCorrectV_Automatic.h"
}

namespace {
	// test fixture class
	class components_DetectCurrentVelocityTest_setCorrectV_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_DetectCurrentVelocityTest_setCorrectV_Automatic_SubClass, components_DetectCurrentVelocityTest_setCorrectV_Automatic_setCorrectV) {
		components_Globals_acc_status = true;
		components_DetectCurrentVelocity_Automatic_calc(&(components_DetectCurrentVelocityTest_setCorrectV.dcv), components_Globals_acc_status, components_DetectCurrentVelocityTest_setCorrectV_RAM.v);
		ASSERT_NEAR((float64)components_DetectCurrentVelocity_Automatic_getBuffer(&(components_DetectCurrentVelocityTest_setCorrectV.dcv)), (float64)components_DetectCurrentVelocityTest_setCorrectV_RAM.v, 0.1);
	}

}