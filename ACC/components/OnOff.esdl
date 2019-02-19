package components;

class OnOff {
	@generated("blockdiagram")
	public void calc() {
		if (Globals.v > 0.0) {
			Globals.acc_status = Globals.acc_status_request; // Main/calc 1/if-then 1
		} // Main/calc 1
	}
}