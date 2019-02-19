application {
	class components.Globals
	class components.Stecke
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process components.Stecke.strecke_test
	}
}