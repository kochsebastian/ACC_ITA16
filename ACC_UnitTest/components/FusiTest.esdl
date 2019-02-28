package components;

import assertLib.Assert;

static class FusiTest{
	
	/*
	 * 
	 */
	 @Test
	 public void testCrashDetection(){
	 	Globals.crash_detected = true;
	 	Assert.assertFalse(Globals.acc_status);
	 }
}