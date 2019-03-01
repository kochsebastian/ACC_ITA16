package components;
import interfaces.interfaces;

static class IncSpeed
reads interfaces.plusButtonPressed {
	@generated("blockdiagram")
	@thread
	public void calc() {
		if (interfaces.plusButtonPressed) {
			Globals.v = (Globals.z + Globals.v); // Main/calc 1/if-then 1
		} // Main/calc 1
	}
}