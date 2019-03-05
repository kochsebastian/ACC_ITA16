package components;

class FuSi {
	@generated("blockdiagram")
	public void crash_calc(boolean inout acc_status, boolean in crash_detected) {
		if (crash_detected) {
			acc_status = false; // Main/crash_calc 1/if-then 1
		} // Main/crash_calc 1
	}
}