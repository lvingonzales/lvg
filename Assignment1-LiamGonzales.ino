/*Assignment 1 Liam Gonzales January 14 2020
 * BLINK
*/

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);//pin 13 set to output
  pinMode(12, OUTPUT);//pin 12 set to output
  pinMode(11, OUTPUT);//pin 11 set to output
}

void loop() {
  // put your main code here, to run repeatedly:
  //Yellow LED Slow Blink
  digitalWrite(13, HIGH);//pin 13 turns on
  delay(1000);//delay
  digitalWrite(13,LOW);//pin 13 turns off
  delay(1000);

  //White LED Pattern Blink
  digitalWrite(12, HIGH);//pin 12 turns on
  delay(200);
  digitalWrite(12, LOW);//pin 12 turns off
  delay(200);
  digitalWrite(12, HIGH);
  delay(200);
  digitalWrite(12, LOW);
  delay(200);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  delay(1000);

  //Blue LED Fade
  for (int i = 0; i <= 255; i+=5){// Setting Maximum Fade Value
    analogWrite(11, i);//Beginning Fade IN
    delay(40);//Delay before fade OUT
  }
  for (int i = 255; i >= 0; i-=5){//Setting Minimum Fade Value
    analogWrite(11, i);//Beginning Fade OUT
    delay(20);//Delay before fade OUT
  }

}
