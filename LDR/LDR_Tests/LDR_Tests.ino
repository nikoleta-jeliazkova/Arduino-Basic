void setup() {
  Serial.begin(9600);
}

void loop() {
  int LDR_Reading = analogRead(A0);

  float voltage = LDR_Reading * (5.0 / 1023.0);
  Serial.print(" Raw:" );
   Serial.print( LDR_Reading );
  Serial.print(" Voltage: ");
  Serial.println( voltage);
}
