package components;
import interfaces.interfaces;

static class FuSi
reads interfaces.crash_detected {
	boolean crash_detec_param;

	@generated("blockdiagram")
	@thread
	public void calc() {
		if (crash_detec_param) {
			Globals.acc_status = false; // Main/calc 1/if-then 1
		} // Main/calc 1
	}
}