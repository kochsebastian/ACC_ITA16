package components;

static class AccFeedback {
	characteristic real c = 0.0;
	boolean acc_status_old;
	boolean feedback;

	@generated("blockdiagram")
	@thread
	public void calc() {
		if ((!Globals.acc_status) && acc_status_old) {
			Globals.acc_feedback = true; // Main/calc 1/if-then 1
		} // Main/calc 1
		acc_status_old = Globals.acc_status; // Main/calc 2
	}
}