package components;
import interfaces.interfaces;

static class Simulation
reads interfaces.brake, interfaces.power
writes interfaces.v, interfaces.power {
	Stecke Stecke_instance;
	OnOff OnOff_instance;
	characteristic real brakePadel = 0.0;
	characteristic real gasPadel = 0.0;
	real brakeVal;
	real powerVal;
	AccFeedback AccFeedback_instance;
	ACC_Control ACC_Control_instance;
	DetectCurrentVelocity DetectCurrentVelocity_instance;
	FuSi FuSi_instance;

	@generated("blockdiagram")
	@thread
	public void calc() {
		if (OnOff_instance.onoff(Stecke_instance.getV(), Globals.acc_status_request)) {
			powerVal = ACC_Control_instance.getPower(); // Main/calc 1/if-then 1
			brakeVal = ACC_Control_instance.getBrake(); // Main/calc 1/if-then 2
		} else {
			brakeVal = brakePadel; // Main/calc 1/if-else 1
			powerVal = gasPadel; // Main/calc 1/if-else 2
		} // Main/calc 1
		Stecke_instance.vCar(brakeVal, powerVal, Globals.d_T); // Main/calc 2
		interfaces.v = Stecke_instance.getV(); // Main/calc 3
		AccFeedback_instance.calc(Globals.d_T); // Main/calc 4
		ACC_Control_instance.calc(Globals.v, powerVal, brakeVal, DetectCurrentVelocity_instance.calc(OnOff_instance.onoff(Stecke_instance.getV(), Globals.acc_status_request), Globals.v)); // Main/calc 5
	}
}