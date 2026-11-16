 const int PiezoPin = 3;
 const int LedPin = 4;

 void setup() {
    pinMode(LedPin, PiezoPin);
  }

  void loop() {
    // 3 dots
    for( int x=0; x<3; x++)
    {
      digitalWrite( LedPin, HIGH);
      tone( PiezoPin, 600, 150);
      delay(150);
      digitalWrite(LedPin, LOW);
      delay(100);
    }
    delay(100);

    // 3 dashes
    for( int x=0; x<3; x++)
    {
      digitalWrite( LedPin, HIGH);
      tone( PiezoPin, 600, 300);
      delay(300);
      digitalWrite(LedPin, LOW);
      delay(100);
    }
    delay(100);
 // 3 dots
    for( int x=0; x<3; x++)
    {
      digitalWrite( LedPin, HIGH);
      tone( PiezoPin, 600, 150);
      delay(150);
      digitalWrite(LedPin, LOW);
      delay(100);
    }

    delay(5000);

    
  }
