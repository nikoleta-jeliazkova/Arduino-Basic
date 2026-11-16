 const int Piezo_Pin = 3;

 void setup() {
   
    Serial.begin(9600);
    int reading = analogRead(0); //reads the analog input A0
    randomSeed( reading);
  }
  void loop() {
   
    int randomFrequency = random(200,2000); //generate random number between 200 and 2000
    tone( Piezo_Pin, randomFrequency);
 
   // delay(500);
  }
