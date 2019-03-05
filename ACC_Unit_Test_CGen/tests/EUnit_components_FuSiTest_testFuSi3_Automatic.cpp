// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_FuSi_Automatic.h"
	#include "components_Globals_Automatic.h"
	#include "components_FuSiTest_testFuSi3_Automatic.h"
}

namespace {
	// test fixture class
	class components_FuSiTest_testFuSi3_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_FuSiTest_testFuSi3_Automatic_SubClass, components_FuSiTest_testFuSi3_Automatic_testFuSi3) {
		components_Globals_acc_status = false;
		components_FuSi_Automatic_crash_calc(&(components_Globals_acc_status), true);
		ASSERT_FALSE(components_Globals_acc_status);
	}

}