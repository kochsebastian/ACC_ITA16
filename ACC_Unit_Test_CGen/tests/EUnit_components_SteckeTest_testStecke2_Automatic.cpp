// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_Stecke_Automatic.h"
	#include "components_SteckeTest_testStecke2_Automatic.h"
}

namespace {
	// test fixture class
	class components_SteckeTest_testStecke2_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_SteckeTest_testStecke2_Automatic_SubClass, components_SteckeTest_testStecke2_Automatic_testStecke2) {
		components_SteckeTest_testStecke2_RAM.s.s = 1001.0F;
		components_Stecke_Automatic_vCar(&(components_SteckeTest_testStecke2.s), 0.0F, 0.0F, 0.0F);
		ASSERT_NEAR((float64)components_SteckeTest_testStecke2_RAM.s.s, 0.0, 1.0);
	}

}