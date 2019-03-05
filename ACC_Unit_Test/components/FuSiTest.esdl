package components;

import interfaces.interfaces;
import assertLib.Assert;

static class FuSiTest{
	FuSi f;
	
	@Test
	public void testFuSi1(){
		Globals.acc_status = true;
		f.crash_calc(Globals.acc_status,true);
		Assert.assertFalse(Globals.acc_status);
	}
	
	@Test
	public void testFuSi2(){
		Globals.acc_status = true;
		f.crash_calc(Globals.acc_status,false);
		Assert.assertTrue(Globals.acc_status);
	}
	
	@Test
	public void testFuSi3(){
		Globals.acc_status = false;
		f.crash_calc(Globals.acc_status,true);
		Assert.assertFalse(Globals.acc_status);
	}
	
	@Test
	public void testFuSi4(){
		Globals.acc_status = false;
		f.crash_calc(Globals.acc_status,false);
		Assert.assertFalse(Globals.acc_status);
	}	
}