package components;

import assertLib.Assert;

static class AccFeedbackTest{
	
	real test_dT;
	AccFeedback AccF;
	
	@Test
	public void enableFeedbackTest(){
		Globals.acc_status = true;
		Globals.acc_feedback = false;
		AccF.calc(0.0);
		Globals.acc_status = false;
		AccF.calc(1.0);
		Assert.assertTrue(Globals.acc_feedback);
	}
	
	@Test
	public void disableFeedbackTest(){
		Globals.acc_status = true;
		Globals.acc_feedback = false;
		AccF.calc(0.0);
		Globals.acc_status = false;
		AccF.calc(3.0);
		Assert.assertFalse(Globals.acc_feedback);
	}
}