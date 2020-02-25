/*Liam Gonzales - Iris Andrici - Assignment 4
 * Catank Code
 */

#include <Servo.h>

Servo myservo; // servo object which allows for the servo to be controlled

void setup() {
  myservo.attach(6);  // attaches the servo on pin 6 to the servo object
  pinMode(13, INPUT);//sets the pinModes for the buttons on pins 13
  pinMode(12, INPUT);//and 12
  pinMode(11, OUTPUT);//sets the pinModes for the DC Motors on pins 11,
  pinMode(10, OUTPUT);//10,
  pinMode(9, OUTPUT);//9,
  pinMode(8, OUTPUT);//and 8

}

void loop() {
  //Dc Motors
  if (digitalRead(12) == 1) {//if the button attached to pin 12 is pressed
    digitalWrite(11, HIGH);//the DC Motors begin to spin
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
  } else if (digitalRead(12) == 0) {//if the button attached to pin 12 is not pressed
    digitalWrite(11, LOW);//the DC Motors stop spinning
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }

  //Catapult Servo
  if (digitalRead(13) == 1) {//if the button attached to pin 13 is pressed
    myservo.write(180);//moves the servo to 180 degrees
  } else {//upon the release of the button
    myservo.write(90);//moves the servo back to the 90 degree position
  }
}
