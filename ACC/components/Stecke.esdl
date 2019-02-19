package components;

class Stecke {
	real v;
	real h;
	real s;
	real ds;
	real momentum;

	@generated("blockdiagram")
	public void vCar(real in brakeCtrl, real in powerCtrl) {
		return; // Main/vCar 1
	}
}