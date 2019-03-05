// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_FuSi_Automatic.h"
	#include "components_Globals_Automatic.h"
	#include "components_FuSiTest_Automatic.h"
}

namespace {
	// test fixture class
	class components_FuSiTest_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_FuSiTest_Automatic_SubClass, components_FuSiTest_Automatic_testFuSi) {
		components_Globals_acc_status = true;
		components_FuSi_Automatic_onCrash(true);
		ASSERT_FALSE(components_Globals_acc_status);
	}

}