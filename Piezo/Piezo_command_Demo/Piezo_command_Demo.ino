const int Piezo_Pin = 3;
bool go = true;

void setup()
{
    int Reading = analogRead(0);
    randomSeed(Reading);
}
/*
 demo how to make a sound on pin 3 and how to stop it for every 2 seconds
*/
void demoPiezo()
{
    tone(Piezo_Pin, 500);
    delay(1000);
    noTone(Piezo_Pin);
    delay(1000);
}

/*
 how to make a sound on pin 3 and how to stop it after a second
*/
void soundForSecond()
{
    if( go)
    {
       tone(Piezo_Pin, 500);
       go = false;
       delay(1000);
    }
    else {
        noTone(Piezo_Pin);
    }
}

// show how to generate an police alarm sound 
void alarmSound()
{
    for( int freq = 200; freq<2000; freq ++)
    {
        tone( Piezo_Pin, freq);
     //   delay(100); //remove to see what will be
    }    
    for( int freq = 2000; freq>=0; freq --)
    {
        tone( Piezo_Pin, freq);
      //  delay(100); //remove to see what will be
    }
} 

void loop()
{
   int randomNumber = random(1000);
   Serial.println( randomNumber);
   delay(250);
    
}








