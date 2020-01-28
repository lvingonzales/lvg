/*Assignment 3 January 28 2020 Liam Gonzales 3181360
 * 
 */
void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);//setting various pins to output
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);//setting up the serial for debugging purposes
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(analogRead(5));

  if (analogRead(5) < 600) {//checking to see the light level
    int led = random(0, 3);//generating a random number between 0 and 3
    if (led == 0) {//fading the first led in case of rng 0
      for (int i = 0; i <= 200; i += 4) {//setting a fade speed and value
        analogWrite(11, i);//fading the led
        delay(30);//delay between each stage of the fade
      }
      for (int i = 200; i >= 0; i -= 4) {
        analogWrite(11, i);
        delay(30);
      }
    } else if (led == 1) {//fading the second led in case of rng 1
      for (int i = 0; i <= 200; i += 4) {
        analogWrite(10, i);
        delay(30);
      }
      for (int i = 200; i >= 0; i -= 4) {
        analogWrite(10, i);
        delay(30);
      }
    } else if (led == 2) {//fading the third led in case of rng 2
      for (int i = 0; i <= 200; i += 4) {
        analogWrite(9, i);
        delay(30);
      }
      for (int i = 200; i >= 0; i -= 4) {
        analogWrite(9, i);
        delay(30);
      }
    }
  } else if (analogRead(5) > 600) {//second check of the light level for bright light
    int led = random(0, 2);//generating a number between 0 and 2
    if (led == 0) {//fading the first led in case of rng 0
      for (int i = 0; i <= 200; i += 8) {
        analogWrite(6, i);
        delay(10);
      }
      for (int i = 200; i >= 0; i -= 8) {
        analogWrite(6, i);
        delay(10);
      }
    } else if (led == 1) {//fading the second led in case of rng 1
      for (int i = 0; i <= 200; i += 8) {
        analogWrite(5, i);
        delay(10);
      }
      for (int i = 200; i >= 0; i -= 8) {
        analogWrite(5, i);
        delay(10);
      }
    }
  }
}
