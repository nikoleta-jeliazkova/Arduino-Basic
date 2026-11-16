#include <Servo.h>

Servo myServo;

int position;

void setup() {
  myServo.attach(9);
}
void moveToPosition() {
  myServo.write(0);
  delay(2000);
  myServo.write(90);
  delay(2000);
  myServo.write(180);
  delay(2000);
  myServo.write(90);
  delay(2000);
}
void moveCircle(){
    for(int pos=0; pos<=180; pos++ )
    {
        myServo.write(pos);
        delay(25);
    }
    for(int pos=180; pos>=0; pos-- )
    {
        myServo.write(pos);
        delay(25);
    }
}


// added potentiometar
// map - used for analog read
void analogPosition() {
  int voltage = analogRead(A0);
  position = map(voltage, 0, 1023, 0, 180);
  myServo.write(position);
}

void loop() {
    moveCircle();
}






