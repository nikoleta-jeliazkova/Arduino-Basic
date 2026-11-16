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
  lcd.setCursor(2, 0);
  lcd.print("Hello World");
  lcd.setCursor(1, 1);
  lcd.print("Hello Nikoleta");
  delay(2000);

}
void loop() {

  float Humidity = sensor.readHumidity();
  float Celsius = sensor.readTemperature();
  float Fahrenheit = sensor.readTemperature(true);

  if (isnan(Humidity) || isnan(Celsius) || isnan(Fahrenheit)) {
    Serial.println("Error reading from the sensor!");
    return;
  }

  Serial.print("Humidity:");
  Serial.print(Humidity);
  Serial.println(char(37));

  Serial.print("Temperature:");
  Serial.print(Celsius);
  Serial.print("°C     ");
  Serial.print(Fahrenheit);
  Serial.println("°F");

  lcd.home();
  lcd.clear();
  lcd.setCursor(0, 0); 
  

  lcd.print("Humidity:");
  lcd.print(Humidity);
  lcd.println(char(37));
  lcd.cursor();
  delay(2000);
 
  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  lcd.print(Celsius);
  //lcd.print(char(176));
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("Temp:");
  lcd.print(Fahrenheit);
 // lcd.print(char(176));
  lcd.println("F");
  
  lcd.noDisplay();
  delay(1000);
  lcd.display();
  
  delay(5000);
}
