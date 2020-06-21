#include <Stepper.h> //Library
int spr=20; // steps per revolution 
Stepper mystepper(spr, 8, 10, 9, 11);
void setup() {
  // put your setup code here, to run once:
  mystepper.setSpeed(7); //motor speed (rotations per mins)
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("counterclockwise");
mystepper.step(-spr); 
delay(1000);
Serial.println("clockwise");
mystepper.step(spr);
delay(1000);
}
