package components;

static class FuSi {
	boolean crash_detected;

	@generated("blockdiagram")
	@thread
	public void calc() {
		if (Globals.crash_detected) {
			Globals.acc_status = false; // Main/calc 1/if-then 1
		} // Main/calc 1
	}
}