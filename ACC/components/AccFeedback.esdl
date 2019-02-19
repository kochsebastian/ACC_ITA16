package components;

static class AccFeedback {
	characteristic real c = 0.0;
	boolean acc_status_old;
	boolean feedback;
	real duration;

	@generated("blockdiagram")
	@thread
	public void calc() {
		if ((!Globals.acc_status) && acc_status_old) {
			Globals.acc_feedback = true; // Main/calc 1/if-then 1
		} // Main/calc 1
		acc_status_old = Globals.acc_status; // Main/calc 2
		if (Globals.acc_feedback) {
			duration = (Globals.d_T + duration); // Main/calc 3/if-then 1
		} // Main/calc 3
		if (duration >= 3.0) {
			Globals.acc_feedback = false; // Main/calc 4/if-then 1
			duration = 0.0; // Main/calc 4/if-then 2
		} // Main/calc 4
	}
}