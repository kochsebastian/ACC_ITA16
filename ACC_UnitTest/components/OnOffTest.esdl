package components;

import assertLib.Assert;

static class OnOffTest{
	
	OnOff _OnOff;
	
	@Test
	public void testOn(){
		
		Globals.acc_status = false;
		Assert.assertTrue(_OnOff.onoff(1.0, true));
	}
	
	@Test
	public void testOff(){
		
		Globals.acc_status = true;
		Assert.assertFalse(_OnOff.onoff(1.0, false));
	}
	
	@Test
	public void testOnFailure(){
		
		Globals.acc_status = false;
		Assert.assertFalse(_OnOff.onoff(0.0, true));
	}
	
	@Test
	public void testOffFailure(){
		
		Globals.acc_status = true;
		Assert.assertFalse(_OnOff.onoff(0.0, false));
	}
}