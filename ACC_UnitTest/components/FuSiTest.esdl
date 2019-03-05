package components;

import interfaces.interfaces;
import assertLib.Assert;

static class FuSiTest writes interfaces.crash_detected{
	
	@Test
	public void testFuSi1(){
		boolean ergebnis = false;
		ergebnis = FuSi.crash_calc(ergebnis, false);
		Assert.assertFalse(ergebnis);
	}
	
	@Test
	public void testFuSi2(){
		boolean ergebnis = false;
		ergebnis = FuSi.crash_calc(ergebnis, true);
		Assert.assertFalse(ergebnis);
	}
	
	@Test
	public void testFuSi3(){
		boolean ergebnis = true;
		ergebnis = FuSi.crash_calc(ergebnis, false);
		Assert.assertTrue(ergebnis);
	}
	
	@Test
	public void testFuSi4(){
		boolean ergebnis = true;
		ergebnis = FuSi.crash_calc(ergebnis, true);
		Assert.assertFalse(ergebnis);
	}	
}