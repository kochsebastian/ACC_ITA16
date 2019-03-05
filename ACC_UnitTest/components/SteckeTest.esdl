package components;

import interfaces.interfaces;
import assertLib.Assert;

static class SteckeTest writes interfaces.crash_detected{
	real s1;
	real s2;
	integer i = 0;
	@Test
	public void testStecke1(){
		Stecke.s = 0.0;
		s1 = Stecke.s;
		
		while(i < 100){
			i = i + 1;
			Stecke.vCar(0.0, 100.0, 1.0);	
		}
		s2 = Stecke.s;
		Assert.assertGreaterThan(s2, s1);
	}		
	
	@Test
	public void testStecke2(){
		Stecke.s = 1001.0; 
		//public gesetzt
		Stecke.vCar(0.0, 0.0, 0.0);
		Assert.assertNear(Stecke.s, 0.0, 1.0);
	}			
}