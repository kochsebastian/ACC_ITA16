package components;

static class OnOff {
	
	@generated("blockdiagram")
	public boolean onoff(real in v, boolean in request) {
		if (v > 0.0) {
			Globals.acc_status = request; // Main/onoff 1/if-then 1
		} else {
			Globals.acc_status = false; // Main/onoff 1/if-else 1
		} // Main/onoff 1
		return Globals.acc_status; // Main/onoff 2
	}
}