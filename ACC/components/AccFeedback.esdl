package components;

class AccFeedback {
	boolean acc_status;
	characteristic real c = 0.0;
	boolean acc_status_old;
	boolean feedback;

	@generated("blockdiagram")
	public void calc() {
		if ((!Globals.acc_status) && acc_status_old) {
			feedback = true; // Main/calc 1/if-then 1
		} // Main/calc 1
		acc_status_old = acc_status; // Main/calc 2
	}
}