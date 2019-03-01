package components;

import assertLib.Assert;

static class OnOffTest{
	
	@Test
	public void testOn(){
		
		Globals.v = 1.0;
		OnOff.calc();
		Globals.acc_status_request = true;
		Assert.assertTrue(Globals.acc_status);
	}
	
	@Test
	public void testOff(){
		Globals.v = 1.0;
		OnOff.calc();
		Globals.acc_status_request = false;
		Assert.assertFalse(Globals.acc_status);
	}
	
	@Test
	public void testOnFailure(){
		
		Globals.acc_status = false;
		Globals.v = 0.0;
		OnOff.calc();
		Globals.acc_status_request = true;
		Assert.assertFalse(Globals.acc_status);
	}
	
	@Test
	public void testOffFailure(){
		Globals.acc_status = true;
		Globals.v = 0.0;
		OnOff.calc();
		Globals.acc_status_request = false;
		Assert.assertTrue(Globals.acc_status);
	}
}