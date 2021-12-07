

#include "pitches.h"


void  sound(int freq, int duration, int iter)
 { 
  for(int i=0; i<iter; i++)
  {
    tone(BDPIN_BUZZER,freq,duration);
    delay(500);
    noTone(BDPIN_BUZZER);
  } 
 }

void led_on_off(int pinNum[])
{
  int sizeArr = sizeof(pinNum) / sizeof(int);
  for ( int k = 0 ; k < sizeArr ; ++k )
  {

    
  }

 
}

void setup() {
  // put your setup code here, to run once:
pinMode(22, OUTPUT);
pinMode(23, OUTPUT);
pinMode(24, OUTPUT);
pinMode(25, OUTPUT);
pinMode(13, OUTPUT);
}
char x;
void loop() {
  // put your main code here, to run repeatedly:
while (!Serial.available());
 x = Serial.readString().toInt();
  
 if(x=="f")
 {  
digitalWrite(22, LOW);
digitalWrite(23, LOW);
delay(1000);

digitalWrite(22, HIGH);
delay(1000);
digitalWrite(23, HIGH);
delay(1000);
}
else if(x==2)
{
  digitalWrite(23, LOW);
digitalWrite(25, LOW);
digitalWrite(13, HIGH);
delay(1000);

digitalWrite(23, HIGH);
delay(1000);
digitalWrite(25, HIGH);
delay(1000);
digitalWrite(13, LOW);
delay(1000);

}
else if(x==3)
{
  digitalWrite(22, LOW);
digitalWrite(23, LOW);
digitalWrite(24, LOW);
digitalWrite(25, LOW);
digitalWrite(13, HIGH);
delay(1000);

digitalWrite(22, HIGH);
delay(1000);
digitalWrite(23, HIGH);
delay(1000);
digitalWrite(24, HIGH);
delay(1000);
digitalWrite(25, HIGH);
delay(1000);
digitalWrite(13, LOW);
delay(1000);
}
else if(x==4)
{
  digitalWrite(22,HIGH);
digitalWrite(23, HIGH);
digitalWrite(24, HIGH);
digitalWrite(25, HIGH);
digitalWrite(13, LOW);
 
}
else if(x==5)
{
  digitalWrite(22,LOW);
digitalWrite(23, LOW);
digitalWrite(24, LOW);
digitalWrite(25, LOW);
digitalWrite(13, HIGH);
 
}

}
