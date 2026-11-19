const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}
// да се промени delay - 200 за да се покаже как се променя скоростта
void taskOne() {
  digitalWrite(LED1, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(1000);
  digitalWrite(LED3, LOW);
}
//  да се обърне внимание на LED3 , как не  мига и защо - от OFF ведна преминава в ON
void taskTwo() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED3, HIGH);
  delay(200);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(200);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(200);
  digitalWrite(LED3, LOW);
}
void taskTree() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED3, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(1000);
  digitalWrite(LED3, LOW);
}

void taskFour() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED3, HIGH);
  delay(250);
  digitalWrite(LED3, LOW);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(250);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(250);
  digitalWrite(LED3, LOW);
  digitalWrite(LED2, HIGH);
  delay(250);
  digitalWrite(LED2, LOW);
}

void loop() {
}
