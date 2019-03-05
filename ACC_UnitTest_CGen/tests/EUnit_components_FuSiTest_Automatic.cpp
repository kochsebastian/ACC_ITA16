// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_FuSi_Automatic.h"
	#include "components_FuSiTest_Automatic.h"
}

namespace {
	// test fixture class
	class components_FuSiTest_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_FuSiTest_Automatic_SubClass, components_FuSiTest_Automatic_testFuSi1) {
		/* user defined local variables */
		uint8 ergebnis;

		ergebnis = false;
		ergebnis = components_FuSi_Automatic_crash_calc(&(ergebnis), false);
		ASSERT_FALSE(ergebnis);
	}

	TEST_F(components_FuSiTest_Automatic_SubClass, components_FuSiTest_Automatic_testFuSi2) {
		/* user defined local variables */
		uint8 ergebnis;

		ergebnis = false;
		ergebnis = components_FuSi_Automatic_crash_calc(&(ergebnis), true);
		ASSERT_FALSE(ergebnis);
	}

	TEST_F(components_FuSiTest_Automatic_SubClass, components_FuSiTest_Automatic_testFuSi3) {
		/* user defined local variables */
		uint8 ergebnis;

		ergebnis = true;
		ergebnis = components_FuSi_Automatic_crash_calc(&(ergebnis), false);
		ASSERT_TRUE(ergebnis);
	}

	TEST_F(components_FuSiTest_Automatic_SubClass, components_FuSiTest_Automatic_testFuSi4) {
		/* user defined local variables */
		uint8 ergebnis;

		ergebnis = true;
		ergebnis = components_FuSi_Automatic_crash_calc(&(ergebnis), true);
		ASSERT_FALSE(ergebnis);
	}

}