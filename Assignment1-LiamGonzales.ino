void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Yellow LED Slow Blink
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);

  //White LED Pattern Blink
  digitalWrite(12, HIGH);
  delay(200);
  digitalWrite(12, LOW);
  delay(200);
  digitalWrite(12, HIGH);
  delay(200);
  digitalWrite(12, LOW);
  delay(200);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  delay(1000);

}
