#include "LedControl.h"

const int Data_Pin = 2;
const int CS_Pin = 3;
const int CLK_Pin = 4;

LedControl lc = LedControl(Data_Pin, CLK_Pin, CS_Pin, 1);



void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 2);  //яркост от 0 - 15
  lc.clearDisplay(0);
  randomSeed( analogRead(A0));
}

void makePoint() {
  int x = 0;
  int y = 0;
  lc.setLed(0, x, y, true);
  delay(1000);
  lc.setLed(0, x, y, false);
}

void fillAndClearByLeds() {
  for (int x = 0; x < 8; x++) {
    for (int y = 0; y < 8; y++) {
      lc.setLed(0, x, y, true);
      delay(50);
    }
  }
  for (int x = 0; x < 8; x++) {
    for (int y = 0; y < 8; y++) {
      lc.setLed(0, x, y, false);
      delay(50);
    }
  }
}

void fillAndClearByRow() {
  //да се въведе понятието binary digits
  int row = 4;
  lc.setRow(0, row, B10101010);
  delay(1000);
  lc.setRow(0, row, B01010101);
  delay(1000);
//   lc.setRow(0, row, B11111111);
//   delay(1000);
}
 void randomRow()
 {  
     for( int row=0; row<8; row++){
        int rnum = random(256);
        lc.setRow( 0, row, rnum);
     }
 }
 void fillAndClearByColumn(){
      int row = 4;
  lc.setColumn(0, row, B10101010);
  delay(1000);
  lc.setColumn(0, row, B01010101);
  delay(1000);
 }
 void randomColumn()
 {  
     for( int row=0; row<8; row++){
        int rnum = random(256);
        lc.setColumn( 0, row, rnum);
     }
 }

byte smiley[8] =
{
    B00111100,
    B01000010,
    B10100101,
    B10000001,
    B10100101,
    B10011001,
    B01000010,
    B00111100
};

byte sad[8] =
{
    B00111100,
    B01000010,
    B10100101,
    B10000001,
    B10011001,
    B10100101,
    B01000010,
    B00111100
};

void smilyFace()
{
   for( int row =0; row<8; row++){
    lc.setRow(0, row, smiley[row]);
   }
} 
void sadFace()
{
   for( int row =0; row<8; row++){
    lc.setRow(0, row, sad[row]);
   }
} 
void animation(){
    smilyFace();
    delay(1000);
    sadFace();
    delay(1000);
}

void loop() {
  animation();
}






