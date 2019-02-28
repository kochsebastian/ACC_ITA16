package components;

import interfaces.interfaces;
import assertLib.Assert;

static class FusiTest writes interfaces.crash_detected{
	
	/*
	 * 
	 */
	 @Test
	 public void testCrashDetection(){
	 	interfaces.crash_detected = true;
	 	Assert.assertFalse(Globals.acc_status);
	 }
}