package components;

import interfaces.interfaces;
import assertLib.Assert;

static class SteckeTest writes interfaces.crash_detected{
	real s1;
	real s2;
	Stecke s;
	integer i = 0;
	@Test
	public void testStecke1(){
		s.s = 0.0;
		s1 = s.s;
		
		while(i < 100){
			i = i + 1;
			s.vCar(0.0, 100.0, 1.0);	
		}
		s2 = s.s;
		Assert.assertGreaterThan(s2, s1);
	}		
	
	@Test
	public void testStecke2(){
		s.s = 1001.0; 
		//public gesetzt
		s.vCar(0.0, 0.0, 0.0);
		Assert.assertNear(s.s, 0.0, 1.0);
	}			
}