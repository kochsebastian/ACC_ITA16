package components;

import assertLib.Assert;

static class OnOffTest{
	
	//TODO
	@Test
	public void testOn(){
		
		OnOff.onoff(1.0, true);
		Assert.assertTrue(Globals.acc_status);
	}
	
	}
}