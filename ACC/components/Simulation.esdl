package components;
import interfaces.interfaces;

static class Simulation
reads interfaces.brake, interfaces.power
writes interfaces.v {
	Stecke Stecke_instance;

	@generated("blockdiagram")
	@thread
	public void calc() {
		Stecke_instance.vCar(interfaces.brake, interfaces.power, Globals.d_T); // Main/calc 1
		interfaces.v = Stecke_instance.getV(); // Main/calc 2
	}
}