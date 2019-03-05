package components;

import interfaces.interfaces;
import assertLib.Assert;

static class ACCControlTest{
	FuSi f;
	ACC_Control a;
	real v1;
	real v2;
	real v3;
	real v4;

	
	@Test
	public void testACC1(){
		//c, power, brake, v_set
		//v > v_set, power > 5, 
		v1 = 10.0;
		v3 = 0.0;
		a.calc(v1,10.0,v3,1.0);
		v2 = a.getPower();
		v4 = a.getBrake();
		Assert.assertGreaterThan(v1, v2);
		Assert.assertGreaterThanOrEqual(v4, v3);
	}
	
	@Test
	public void testACC2(){
		//c, power, brake, v_set
		//v > v_set, power < 5, 
		v1 = 10.0;
		v3 = 0.0;
		a.calc(v1,3.0,v3,1.0);
		v2 = a.getPower();
		v4 = a.getBrake();
		Assert.assertNear(v2, 0.0, 1.0);
		Assert.assertGreaterThan(v4, v3);
	}
	
	@Test
	public void testACC3(){
		//c, power, brake, v_set
		//v > v_set, power < 5, brake > 95 
		v1 = 10.0;
		v3 = 96.0;
		a.calc(v1,0.0,v3,1.0);
		v2 = a.getPower();
		v4 = a.getBrake();
		Assert.assertNear(v2, 0.0, 1.0);
		Assert.assertNear(v4, 100.0, 1.0);
	}
	
	@Test
	public void testACC4(){
		//c, power, brake, v_set
		//v < v_set, power > 95 --> Brake wird sofort Null gesetzt
		v1 = 1.0;
		v3 = 96.0;
		a.calc(v1,v3,10.0,10.0);
		v2 = a.getPower();
		v4 = a.getBrake();
		Assert.assertNear(v4, 0.0, 1.0);
		Assert.assertNear(v2, 100.0, 1.0);
	}
	
	@Test
	public void testACC5(){
		//c, power, brake, v_set
		//v < v_set, power < 95 --> Brake wird sofort Null gesetzt
		v1 = 1.0;
		v3 = 20.0;
		a.calc(v1,v3,10.0,10.0);
		v2 = a.getPower();
		v4 = a.getBrake();
		Assert.assertNear(v4, 0.0, 1.0);
		Assert.assertGreaterThan(v2, v3);
	}
	
}