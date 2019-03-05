package components;

import interfaces.interfaces;
import assertLib.Assert;

static class DetectCurrentVelocityTest{
	DetectCurrentVelocity dcv;
	real v = 10.0;
	
	@Test
	public void setCorrectV(){
		Globals.acc_status = true;
		dcv.calc(Globals.acc_status,v);
		Assert.assertNear(dcv.getBuffer(), v, 0.1);
		
	}
	@Test
	public void resetCorrectV(){
		Globals.acc_status = true;
		dcv.calc(Globals.acc_status,v);
		Globals.acc_status = false;
		dcv.calc(Globals.acc_status,v);
		v = 12.0;
		Globals.acc_status = true;
		dcv.calc(Globals.acc_status,v);
		Assert.assertNear(dcv.getBuffer(), v, 0.1);
		
	}
}