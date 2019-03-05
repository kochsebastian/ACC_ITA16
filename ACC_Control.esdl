package components;

class ACC_Control {
	real v_set;
	characteristic real fuenf = 5.0;
	real v_2;
	characteristic real decrease_power = 5.0;
	real power_return;
	characteristic real zero = 0.0;
	real brake_return;
	characteristic real c_2 = 0.0;
	characteristic real fuenfundneunzig = 95.0;
	characteristic real hundert = 100.0;

	@generated("blockdiagram")
	public void calc(real in v, real in power, real in brake, real in v_set) {
		if (v > v_set) {
			if (power > fuenf) {
				power_return = (power - decrease_power); // Main/calc 1/if-then 1/if-then 1
			} else {
				power_return = zero; // Main/calc 1/if-then 1/if-else 1
				if (brake > fuenfundneunzig) {
					brake_return = hundert; // Main/calc 1/if-then 1/if-else 2/if-then 1
				} else {
					brake_return = (brake + fuenf); // Main/calc 1/if-then 1/if-else 2/if-else 1
				} // Main/calc 1/if-then 1/if-else 2
			} // Main/calc 1/if-then 1
		} else {
			brake_return = zero; // Main/calc 1/if-else 1
			if (power > fuenfundneunzig) {
				power_return = hundert; // Main/calc 1/if-else 2/if-then 1
			} else {
				power_return = (fuenf + power); // Main/calc 1/if-else 2/if-else 1
			} // Main/calc 1/if-else 2
		} // Main/calc 1
	}

	@generated("blockdiagram")
	public real getPower() {
		return power_return; // Main/getPower 1
	}

	@generated("blockdiagram")
	public real getBrake() {
		return brake_return; // Main/getBrake 1
	}
}