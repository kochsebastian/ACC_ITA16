package components;
import interfaces.interfaces;

static class FuSi
reads interfaces.crash_detected {
	@thread
	public void calc() {
		onCrash(interfaces.crash_detected);
	}
	
	public void onCrash(boolean crash){
		if (crash){
			Globals.acc_status = false;
		}
	}
}