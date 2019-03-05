package components;
import interfaces.interfaces;

class FuSi
{
	@generated("blockdiagram")
	public boolean crash_calc(boolean inout acc_status, boolean in crash_detected) {
		if (crash_detected) {
			acc_status = false; // Main/crash_calc 1/if-then 1
		} else {
			acc_status = acc_status; // Main/crash_calc 1/if-else 1
		} // Main/crash_calc 1
		return acc_status; // Main/crash_calc 2
	}
}