
void setup() {
   
    Serial.begin(9600);
    int reading = analogRead(0); //reads the analog input A0
    randomSeed( reading);
  }
  void loop() {
   
    int randomNumber = random(1000); //reads the analog input A0
    Serial.println( randomNumber );
    delay(100);
  }
