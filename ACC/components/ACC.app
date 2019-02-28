application {
	class components.Globals
	class components.Stecke
	class components.AccFeedback
	class components.OnOff
	class components.FuSi_bak
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process components.Stecke.strecke_test
		process components.OnOff.calc
		process components.AccFeedback.calc
		process components.FuSi_bak.calc
	}
}