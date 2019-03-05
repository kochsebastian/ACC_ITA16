// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_Stecke_Automatic.h"
	#include "components_SteckeTest_testStecke1_Automatic.h"
}

namespace {
	// test fixture class
	class components_SteckeTest_testStecke1_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_SteckeTest_testStecke1_Automatic_SubClass, components_SteckeTest_testStecke1_Automatic_testStecke1) {
		components_SteckeTest_testStecke1_RAM.s.s = 0.0F;
		components_SteckeTest_testStecke1_RAM.s1 = components_SteckeTest_testStecke1_RAM.s.s;
		while (components_SteckeTest_testStecke1_RAM.i < 100)
		{
			components_SteckeTest_testStecke1_RAM.i
				= ((components_SteckeTest_testStecke1_RAM.i <= 2147483646L /* always true */) ? (components_SteckeTest_testStecke1_RAM.i + 1) : 2147483647L);
			components_Stecke_Automatic_vCar(&(components_SteckeTest_testStecke1.s), 0.0F, 100.0F, 1.0F);
		} /* end while */
		components_SteckeTest_testStecke1_RAM.s2 = components_SteckeTest_testStecke1_RAM.s.s;
		ASSERT_GT((float64)components_SteckeTest_testStecke1_RAM.s2, (float64)components_SteckeTest_testStecke1_RAM.s1);
	}

}