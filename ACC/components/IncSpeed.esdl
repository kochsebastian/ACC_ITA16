package components;
import interfaces.interfaces;

class IncSpeed
reads interfaces.plusButtonPressed {
	@generated("blockdiagram")
	public void calc(real in z) {
		if (interfaces.plusButtonPressed) {
			Globals.v = (z + Globals.v); // Main/calc 1/if-then 1
		} // Main/calc 1
	}
}