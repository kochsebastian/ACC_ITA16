package components;
import interfaces.interfaces;

static class Driver
writes interfaces.crash_detected {
	characteristic real brakePadel = 0.0;
	characteristic real gasPadel = 0.0;
	characteristic boolean crash = false;

	@generated("blockdiagram")
	@thread
	public void calc() {
	}
}