package components;

import assertLib.Assert;

import components.Globals;
import components.OnOff;

static class OnOff_Test {
	OnOff testObj;
	
	@Before
	public void setValue(){
		Globals.v = 10.0;
		Globals.acc_status_request = true;
	}
	
	@Test
	public void pass() {
		testObj.calc();
		Assert.assertTrue(Globals.acc_status);
	}
}