package components;

import interfaces.interfaces;
import assertLib.Assert;

static class FuSiTest writes interfaces.crash_detected{
	
	@Test
	public void testFuSi(){
		
		interfaces.crash_detected = false;
		Assert.assertFalse(Globals.acc_status);
	}
}