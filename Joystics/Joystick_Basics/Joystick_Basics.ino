// pin numbers
const int Switch_Pin = 2;
const int X_Axis_Pin = A2;//A0;
const int Y_Axis_Pin = A3;//A1;

void setup() {
  Serial.begin(115200);
  pinMode(Switch_Pin, INPUT_PULLUP);
}

void demo() {
  Serial.print("Switch:");
  Serial.print(digitalRead(Switch_Pin));
  Serial.print("\tX-Axis:");
  Serial.print(analogRead("X_Axis_pin"));
  Serial.print("     Y_Axis");
  Serial.println(analogRead("Y_Axis_pin"));
}
void loop() {
  int x = analogRead(X_Axis_Pin);
   if (x < 250) {
     Serial.print("TOP");
202122232425262728293031323334
    Serial.println("Y - MIDDLE");
    delay(500);
  }
}

Message (Enter to send message to 'Arduino UNO' on 'COM3')
New Line
115200 baud

     delay(500);
   } else if (x > 750) {
     Serial.print("BOTTOM");
     delay(500);
   } else {
     Serial.print("X - MIDDLE");
     delay(500);
   }
  Serial.println();

  int y = analogRead(Y_Axis_Pin);
  if (y < 250) {
    Serial.println("RIGHT");
    delay(500);
  } else if (y > 750) {
    Serial.println("LEFT");
    delay(500);
  } else {
    Serial.println("Y - MIDDLE");
    delay(500);
  }
}
