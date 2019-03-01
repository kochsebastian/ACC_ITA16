package components;

import assertLib.Assert;

static class FuSiTest{
	
	@Test
	public void testFuSi(){
		
		FuSi.onCrash(true);
		Assert.assertFalse(Globals.acc_status);
	}
}