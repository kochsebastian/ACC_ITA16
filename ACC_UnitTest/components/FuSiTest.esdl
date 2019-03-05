package components;

import assertLib.Assert;

static class FuSiTest{
	
	@Test
	public void testFuSi(){
		Globals.acc_status = true;
		FuSi.onCrash(true);
		Assert.assertFalse(Globals.acc_status);
	}
}