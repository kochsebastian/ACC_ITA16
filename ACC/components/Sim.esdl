
package components;
static class Sim {
	Stecke s;
	OnOff o;
	AccFeedback a;
	@thread
	public void runSim(){
		s.vCar(0.0,20.0);
		o.calc();
		a.calc();
	}
	
}