package components;

type Kennlinie is table real -> real;
type Kennfeld is table real, real -> real;

static class Stecke {
	real h;
	real s;
	real ds;
	real momentum;
	characteristic Kennlinie BrakeMomentum = {{0.0, 1.0, 40.0, 60.0, 80.0, 100.0}, {0.0, 0.0, -1.0, -2.0, -3.0, -4.0}};
	characteristic Kennfeld EngineMomentum = {{0.0, 5.0, 20.0, 60.0, 80.0, 100.0}, {0.0, 30.0, 60.0, 90.0, 150.0, 200.0}, {{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, {0.85, 0.6, 0.3, 0.0, 0.0, 0.0}, {3.15, 2.35, 1.55, 0.8, 0.4, 0.0}, {4.5, 3.6, 2.7, 1.5, 0.9, 0.0}, {5.0, 4.5, 3.8, 2.8, 1.9, 0.0}}};
	characteristic Kennlinie AirFriction = {{0.0, 30.0, 60.0, 90.0, 120.0, 150.0}, {0.0, -0.1, -0.2, -0.4, -0.8, -1.6}};
	real dh;
	characteristic Kennlinie Landscape = {{0.0, 100.0, 145.5657, 202.53, 221.52, 240.0, 259.49, 300.0, 350.0, 400.0, 450.0, 500.0, 600.0, 700.0, 750.0, 800.0, 810.0, 850.0, 900.0, 1000.0}, {0.0, 4.0, 7.125, 10.375, 10.75, 10.5, 9.0, 5.375, 2.625, 0.625, 1.25, 0.625, 0.0, 0.0, 1.375, 0.75, 0.375, 0.625, 0.0, 0.0}};
	characteristic real TrackSize = 1000.0;

	@generated("blockdiagram")
	public real vCar(real in brakeCtrl, real in powerCtrl) {
		if (s > TrackSize) {
			s = 0.0; // Main/vCar 1/if-then 1
		} // Main/vCar 1
		momentum = EngineMomentum.getAt(powerCtrl, Globals.v); // Main/vCar 2
		ds = ((Globals.v * Globals.d_T) / 3.6); // Main/vCar 3
		s = (ds + s); // Main/vCar 4
		dh = (h - Landscape.getAt(s)); // Main/vCar 5
		h = Landscape.getAt(s); // Main/vCar 6
		Globals.v = ((3.6 * (BrakeMomentum.getAt(brakeCtrl) + momentum + AirFriction.getAt(Globals.v) + (9.81 * (dh / ds))) * Globals.d_T) + Globals.v); // Main/vCar 7
		if (Globals.v < 0.0) {
			Globals.v = 0.0; // Main/vCar 8/if-then 1
		} // Main/vCar 8
		return Globals.v; // Main/vCar 9
	}

	@generated("blockdiagram")
	@thread
	public void strecke_test() {
		vCar(0.0,0.0);
	}
}