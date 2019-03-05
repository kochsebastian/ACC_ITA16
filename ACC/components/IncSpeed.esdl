package components;
import interfaces.interfaces;
import interfaces.Limits_Config;

static class IncSpeed
reads interfaces.plusButtonPressed, Limits_Config.minSpeed, Limits_Config.maxSpeed {
	@generated("blockdiagram")
	@thread
	public void calc() {
		if (interfaces.plusButtonPressed) {
			Globals.v = min(max((Globals.z + Globals.v), Limits_Config.minSpeed), Limits_Config.maxSpeed); // Main/calc 1/if-then 1
		} // Main/calc 1
	}
}