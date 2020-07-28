// connecting 3 Stepper Motor  4 Pairs and L293D in TinkerCAD 



#include <Stepper.h>

const int stepsPer = 100 ;  //  number of steps per revolution



// initialize the stepper  pins 8,9,10,11 
Stepper myStepper(stepsPer, 8, 9, 10, 11);

int stepCount = 0;  // number of steps the motor has taken

void setup() {
  Serial.begin(9600);
 
}

void loop() {
  // read the sensor value in pin A0 :
  int sensorReading = analogRead(A0);
  // map it to a range from 0 to 100:
  int motorSpeed = map(sensorReading, 0, 1023, 0, 250);
  // set the motor speed:
  if (motorSpeed > 0) {
  myStepper.setSpeed(100);
  }
}