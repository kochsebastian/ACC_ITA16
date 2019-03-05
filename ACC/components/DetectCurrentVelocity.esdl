package components;

class DetectCurrentVelocity {
	boolean acc_status_old;
	boolean status_old;
	real v_buffer;

	@generated("blockdiagram")
	public real calc(boolean in status, real in v) {
		if (status && (!status_old)) {
			status_old = status; // Main/calc 2
			v_buffer = v; // Main/calc 1/if-then 1
		} else {
			status_old = status; // Main/calc 2
			return v_buffer; // Main/calc 1/if-else 1
		} // Main/calc 1
		
		return v_buffer; // Main/calc 3
	}
	
	public real getBuffer(){
		return v_buffer;
	}
}