/*Assignment 4 Liam Gonzales 3181360
 * Dc Motors
 */

#include <Servo.h>//including the Servo library

Servo myservo;//creating a servo object to control a servo

int pos = 0; //variable that stores the servo position

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);//declaring the pin modes for the various pins
  pinMode(12, OUTPUT);
  pinMode(13, INPUT);
  myservo.attach(9);//attaching the servo to pin 9~
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(13) == 0) {//if the button is not pressed
    digitalWrite(11, HIGH);//turn the motor on
    digitalWrite(12, LOW);
  } else if (digitalRead(13) == 1) {//if the button is pressed
    digitalWrite(11, LOW);/turn the motor off
    digitalWrite(12, LOW);

    for (pos = 0; pos <= 180; pos += 1) {//spin the servo towards 180 degrees
      myservo.write(pos);
      delay(15);
    }
    for (pos = 180; pos >= 0; pos -= 1) {//spin the motor away from 180 degrees
      myservo.write(pos);
      delay(15);
    }
  }
}
