#include "LedControl.h"
#include "NewPing.h"

// Display Pins
const int Data_Pin = 2;
const int CS_Pin = 3;
const int CLK_Pin = 4;
// Ultrasonic Pins
const int Trigger_Pin = 5;
const int Echo_Pin = 6;

const int Max_Distance = 100;


NewPing sonic(Trigger_Pin, Echo_Pin, Max_Distance);

void setup()
{
    Serial.begin(115200); 
}

void loop()
{
    delay(33);
    int distance = sonic.ping_cm();
    Serial.print(distance);
    Serial.println("A cm   ");
    delay(100);
    distance = sonic.ping_cm();
    Serial.print(distance);
    Serial.println("B cm   ");  
 
}
