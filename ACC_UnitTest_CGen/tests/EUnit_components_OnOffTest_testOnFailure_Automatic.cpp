// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_OnOff_Automatic.h"
	#include "components_Globals_Automatic.h"
	#include "components_OnOffTest_testOnFailure_Automatic.h"
}

namespace {
	// test fixture class
	class components_OnOffTest_testOnFailure_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_OnOffTest_testOnFailure_Automatic_SubClass, components_OnOffTest_testOnFailure_Automatic_testOnFailure) {
		components_Globals_acc_status = false;
		ASSERT_FALSE(components_OnOff_Automatic_onoff(0.0F, true));
	}

}