// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_Globals_Automatic.h"
	#include "components_OnOff_Automatic.h"
	#include "components_OnOffTest_Automatic.h"
}

namespace {
	// test fixture class
	class components_OnOffTest_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_OnOffTest_Automatic_SubClass, components_OnOffTest_Automatic_testOff) {
		components_Globals_v = 1.0F;
		components_OnOff_Automatic_calc();
		components_Globals_acc_status_request = false;
		ASSERT_FALSE(components_Globals_acc_status);
	}

	TEST_F(components_OnOffTest_Automatic_SubClass, components_OnOffTest_Automatic_testOffFailure) {
		components_Globals_acc_status = true;
		components_Globals_v = 0.0F;
		components_OnOff_Automatic_calc();
		components_Globals_acc_status_request = false;
		ASSERT_TRUE(components_Globals_acc_status);
	}

	TEST_F(components_OnOffTest_Automatic_SubClass, components_OnOffTest_Automatic_testOn) {
		components_Globals_v = 1.0F;
		components_OnOff_Automatic_calc();
		components_Globals_acc_status_request = true;
		ASSERT_TRUE(components_Globals_acc_status);
	}

	TEST_F(components_OnOffTest_Automatic_SubClass, components_OnOffTest_Automatic_testOnFailure) {
		components_Globals_acc_status = false;
		components_Globals_v = 0.0F;
		components_OnOff_Automatic_calc();
		components_Globals_acc_status_request = true;
		ASSERT_FALSE(components_Globals_acc_status);
	}

}