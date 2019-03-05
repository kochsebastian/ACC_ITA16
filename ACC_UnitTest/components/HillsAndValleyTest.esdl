package components;

import assertLib.Assert;

static class HillsValleysTest{

	Stecke _stecke;

	@Test
	public void SlopeTest(){

		real first = 0.0;
		real second = 10.0;

		while (second <= 1000.0){

			real h_first = _stecke.getHeight(first);
			real h_second = _stecke.getHeight(second);

			real slope = abs(h_second-h_first)/(second-first);

			Assert.assertTrue(slope <= 0.2);

			first = first + 10.0;
			second = second + 10.0;
		}
	}
}