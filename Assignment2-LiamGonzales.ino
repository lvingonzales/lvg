/* If Statements, Liam Gonzales - 3181360, January 21, 2020 
 *  
 */
void setup() {
  // Setting various pin modes
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, INPUT);
  //Initialising the Serial
  Serial.begin(9600);
}

void loop() {
  // Checking the state of the button
  if (digitalRead(8) == HIGH) {
    //Bright light level reaction
    if (analogRead(5) > 0 && analogRead(5) <= 20) {
      digitalWrite(13, HIGH);//turning on the led connected to pin 13
    } else {
      digitalWrite(13, LOW);//turning off the led connected to pin 13
    }
    //Medium light level reaction
    if (analogRead(5) > 20 && analogRead(5) <= 100) {
      digitalWrite(12, HIGH);//turning on the led connected to pin 12
    } else {
      digitalWrite(12, LOW);//turning off the led connected to pin 12
    }
    //Low light level reaction
    if (analogRead(5) > 100 && analogRead(5) <= 1000) {
      digitalWrite(11, HIGH);//turning on the led connected to pin 11
    } else {
      digitalWrite(11, LOW);//turning of the led connected to pin 11
    }
  }else{//Blink Patterns once button is in off position
    digitalWrite(13, HIGH);
    delay(100);//delay between turning the led on and off creating a "blink"
    digitalWrite(13, LOW);
    delay(50);
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(50);
    
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12, LOW);
    delay(500);

    digitalWrite(11, HIGH);
    delay(100);
    digitalWrite(11, LOW);
    delay(50);
    digitalWrite(11, HIGH);
    delay(1500);
    digitalWrite(11, LOW);
    
  }
}
