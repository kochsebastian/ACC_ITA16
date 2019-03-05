// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_AccFeedback_Automatic.h"
	#include "components_Globals_Automatic.h"
	#include "components_AccFeedbackTest_disableFeedbackTest_Automatic.h"
}

namespace {
	// test fixture class
	class components_AccFeedbackTest_disableFeedbackTest_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_AccFeedbackTest_disableFeedbackTest_Automatic_SubClass, components_AccFeedbackTest_disableFeedbackTest_Automatic_disableFeedbackTest) {
		components_Globals_acc_status = true;
		components_Globals_acc_feedback = false;
		components_AccFeedback_Automatic_calc(&(components_AccFeedbackTest_disableFeedbackTest.AccF), 0.0F);
		components_Globals_acc_status = false;
		components_AccFeedback_Automatic_calc(&(components_AccFeedbackTest_disableFeedbackTest.AccF), 3.0F);
		ASSERT_FALSE(components_Globals_acc_feedback);
	}

}