
void initTypeCommon() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void initWithForLoop() {
  for (int PINS = 2; PINS <= 4; PINS++) {
    pinMode(PINS, OUTPUT);
  }
}
void twoToFourLed() {
  // for-a  светва 2-3-4-2-3-4
  for (int pin = 2; pin <= 4; pin++) {
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
  }
}

void twoToFourAndBackToTreeLed() {
  // for-a  светва 2-3-4-2-3-4
  for (int pin = 2; pin <= 4; pin++) {
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
  }
  // тези редове променят ефект така: 2-3-4-3-2-3-4-3-2
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
}

void oppositeOrder(){
 // for-a  светва 3-2-1-3-2-1
  for (int pin = 4; pin>1; pin--) {
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
  }
  
}


void setup() {
  initTypeCommon();
}

void loop() {
}
