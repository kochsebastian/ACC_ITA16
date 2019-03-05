// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_Stecke_Automatic.h"
	#include "components_HillsValleysTest_Automatic.h"
}

namespace {
	// test fixture class
	class components_HillsValleysTest_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_HillsValleysTest_Automatic_SubClass, components_HillsValleysTest_Automatic_SlopeTest) {
		/* user defined local variables */
		float32 first;
		float32 h_first;
		float32 h_second;
		float32 second;
		float32 slope;
		/* temp. variables */
		float32 _t1real32;
		float32 _t2real32;

		first = 0.0F;
		second = 10.0F;
		while (second <= 1000.0F)
		{
			h_first
				= components_Stecke_Automatic_getHeight(&(components_HillsValleysTest._stecke), first);
			h_second
				= components_Stecke_Automatic_getHeight(&(components_HillsValleysTest._stecke), second);
			_t1real32 = second - first;
			_t2real32 = h_second - h_first;
			_t2real32 = ((_t2real32 > 0.0F) ? _t2real32 : -_t2real32);
			slope = ((_t1real32 == 0.0F) ? _t2real32 : (_t2real32 / _t1real32));
			ASSERT_TRUE(slope <= 0.2F);
			first = first + 10.0F;
			second = second + 10.0F;
		} /* end while */
	}

}