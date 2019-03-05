package components;

class AccFeedback {
	characteristic real c = 0.0;  //not used
	boolean acc_status_old = false;
	boolean feedback; //not used
	real duration = 0.0;

	@generated("blockdiagram")
	public void calc(real in my_dT) {
		if ((!Globals.acc_status) && acc_status_old) {
			Globals.acc_feedback = true; // Main/calc 1/if-then 1
		} // Main/calc 1
		acc_status_old = Globals.acc_status; // Main/calc 2
		if (Globals.acc_feedback) {
			duration = (my_dT + duration); // Main/calc 3/if-then 1
		} // Main/calc 3
		if (duration >= 3.0) {
			Globals.acc_feedback = false; // Main/calc 4/if-then 1
			duration = 0.0; // Main/calc 4/if-then 2
		} // Main/calc 4
	}
}