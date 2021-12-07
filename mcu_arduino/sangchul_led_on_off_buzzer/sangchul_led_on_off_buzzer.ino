

#include "pitches.h"


void  sound(int freq, int duration, int iter)
 { 
  for(int i=0; i<iter; i++)
  {
    tone(BDPIN_BUZZER,freq,duration);
    delay(1000);
    noTone(BDPIN_BUZZER);
  } 
 }

void led_on_off(int pinNum[], const int size)
{
//  int sizeArr = sizeof(pinNum) / sizeof(pinNum[0]);
//  Serial.print("sizeArr is: ");
//  Serial.println(sizeArr);
  for ( int k = 0 ; k < size  ; ++k )
  {
    digitalWrite(pinNum[k], LOW);         
  }
  delay(1000);
  for ( int k = 0 ; k < size  ; ++k )
  {        
    digitalWrite(pinNum[k], HIGH);
  }
  delay(1000); 
 
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
 x = Serial.read();
  
 if(x=='f')
 {  
    int outArr[2]={22,23};
    led_on_off(outArr, 2);
    sound(NOTE_G3, 500, 1);
}
else if(x=='b')
{
    int outArr[2]={24,25};
    led_on_off(outArr, 2);
    sound(NOTE_G3, 500, 2);

}
else if(x=='r')
{
    int outArr[2]={22,25};
    led_on_off(outArr, 2);
    sound(NOTE_G3, 500, 3);

}
else if(x=='l')
{
    int outArr[2]={23,24};
    led_on_off(outArr,2);
    sound(NOTE_G3, 500, 4);

}
else if(x=='q')
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
  sound(NOTE_G3, 500, 5);
}


}
