void setup() {
  Serial.begin(9600);

}

void loop() {
  int randomNumber = random(1000);
  Serial.println( randomNumber);
  delay( 250);

}
