package components;
import interfaces.Limits_Config;

class OnOff
reads Limits_Config.minSpeed, Limits_Config.maxSpeed {
	@generated("blockdiagram")
	public boolean onoff(real in v, boolean in request) {
		if ((v > Limits_Config.minSpeed) && (v < Limits_Config.maxSpeed)) {
			Globals.acc_status = request; // Main/onoff 1/if-then 1
		} else {
			Globals.acc_status = false; // Main/onoff 1/if-else 1
		} // Main/onoff 1
		return Globals.acc_status; // Main/onoff 2
	}
}