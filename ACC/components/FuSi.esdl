package components;
import interfaces.interfaces;

static class FuSi
reads interfaces.crash_detected {
	@generated("blockdiagram")
	public void calc() {
		if (interfaces.crash_detected) {
			Globals.acc_status = false;
		} // Main/calc 1
	}
}