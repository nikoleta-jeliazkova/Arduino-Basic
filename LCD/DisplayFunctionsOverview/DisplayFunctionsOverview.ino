#include <LiquidCrystal_I2C.h>
#include "DHT.h"
#define DHTTYPE DHT11

const int DHTPIN = 2;

// Set the address, number of columns, and number of rows of the LCD
const int LCD_ADDRESS = 0x27;  // I2C address of the LCD
const int LCD_COLS = 16;       // Number of columns of the LCD
const int LCD_ROWS = 2;        // Number of rows of the LCD

LiquidCrystal_I2C lcd(LCD_ADDRESS, LCD_COLS, LCD_ROWS);
DHT sensor(DHTPIN, DHTTYPE);

void setup() {

  Serial.begin(9600);
  sensor.begin();

  lcd.init();
  lcd.backlight();  // Turn on the backlight
}
void showTextName() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hello World");
  lcd.setCursor(0, 1);
  lcd.print("Hello Nikoleta");
}

void showTextNameArgs(const char text[2][15]) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(text[0]);
  lcd.setCursor(0, 1);
  lcd.print(text[1]);
}
void display_noDisplay() {
  showTextName();
  lcd.display();
  delay(2000);
  lcd.noDisplay();
  delay(2000);
}
void scrollLeft() {
  for (int i = 0; i < 16; i++) {
    lcd.scrollDisplayLeft();
    delay(200);
  }
  delay(1000);
}

void scrollRight() {
  for (int i = 0; i < 16; i++) {
    lcd.scrollDisplayRight();
    delay(200);
  }
  delay(1000);
}
void slideTextLeftAndReturn() {
  showTextName();
  scrollLeft();
  scrollRight();
}

void blinkSlideTextAndReturn() {
  lcd.noDisplay();

  showTextName();

  for (int i = 0; i < 16; i++) {
    lcd.scrollDisplayLeft();
  }

  lcd.display();

  for (int i = 0; i < 16; i++) {
    lcd.scrollDisplayRight();
    delay(200);
  }

  delay(2000);

  for (int i = 0; i < 16; i++) {
    lcd.scrollDisplayLeft();
    delay(200);
  }
}

void twoPageBlink() {
  lcd.noDisplay();
//page one
  char text[2][15] = { "Hello World",
                       "Hello Nicky" };
  showTextNameArgs(text);

  for (int i = 0; i < 16; i++) {
    lcd.scrollDisplayLeft();
  }

  lcd.display();

  for (int i = 0; i < 16; i++) {
    lcd.scrollDisplayRight();
    delay(200);
  }

  delay(2000);

  for (int i = 0; i < 16; i++) {
    lcd.scrollDisplayLeft();
    delay(200);
  }

 //page two
  lcd.noDisplay();
  char text2[2][15] = { "Page Two",
                       "I'm here" };
  showTextNameArgs(text2);

  for (int i = 0; i < 16; i++) {
    lcd.scrollDisplayLeft();
  }

  lcd.display();

  for (int i = 0; i < 16; i++) {
    lcd.scrollDisplayRight();
    delay(200);
  }

  delay(2000);

  for (int i = 0; i < 16; i++) {
    lcd.scrollDisplayLeft();
    delay(200);
  }

}

void loop() {

  //  showTextNameArgs(text);
  //  delay(2000);
  // blinkSlideTextAndReturn();
 // twoPageBlink();
 slideTextLeftAndReturn();
}
