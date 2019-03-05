## Circle Course
When the car is driving in the model there must not be an end of the course.
### Test
The test driver should drive the car to the end of the driving cycle. When the test driver reaches the end of the driving cycle he must immediately start a new cycle to not end the course.

## Hills and Valleys
Add some faeture to the course such that calibratable hills and valleys with at most 20 supporting points within a characteristic line (a.k.a. table) for the height of the course such that start and end point of the course match. The slope shall not exceed the OEM prescribed typical range (here we define this to be 20%).
### Test
Demonstrate that there is a continuous movement over the hills and valleys also passing the end of the course.

## State feedback
When the driver disables the ACC with a switch the system must provide visual or acoustic feedback to the driver that it has been disabled in a short response time.
### Test
Active ACC --> turn off --> check feedback --> check if ACC is off

## On/Off
While driving, the driver have to has [sic] the ability to turn the ACC on and off at any moment. After the ACC is turned off, the acceleration of the car is determined by the gas pedal and brake pedal, just like a car without ACC.
### Test
1 ACC must be turned off
2 The ACC will be turned on and state feedback displays this properly
3a press gas pedal - the vehicle responds as expected
3b press brake pedal - the vehicle responds as expected

## Fusi
If the car had [sic] a crash the acc [sic] must turn itself of [sic].
### Test
1. Turn the ACC on
2. Trigger Crash
3. Check if ACC is turned off

## Prototype ACC Control
Provide a means for the ACC to keep a constant velocity.
### Test
Set some target velocity v and show that the target velocity is kept automatically by the ACC despite uphill and downhill driving. Observe how the velocity changes with regards to uphill and downhill driving.

## Set target speed
When the ACC is active the ACC should provide the ability to set the current velocity as target-velocity.
### Test
Accelerate manually to some velocity v and then activate the set velocity function. Observe that the target velocity is kept automatically by the ACC despite uphill and downhill driving within a 5%-range of the target velocity.

## Limits Config
Max. and min. supported speed of the ACC must be configurable by the manufacturer. ACC on and set speed is only possible if velocity is in range.
### Test
On test track XY.
1. Configure maximum and minimum speed of the ACC to 20km/h and 200 km/h  
2. Test a  
a. Drive and set ACC speed to 40km/h  
b. ACC does not throw warning message and keeps speed of 40km/h  
3. Test b  
a. Drive and set ACC speed to 10km/h  
b. ACC throws warning and does not keep speed of 10km/h  
4. Test c  
a. Drive and set ACC speed to 220km/h  
b. ACC throws warning and does not keep speed of 220km/h  

## Speed increase / decrease
When the ACC is active the ACC should provide the ability to increase or decrease the target-velocity in steps of z km/h. When the "Plus"-Button of the ACC is pressed the ACC must increment the target velocity by z km/h
### Test
Increase/decrease the target-speed via the input device --> read value from the ACC-ECU if speed was set
