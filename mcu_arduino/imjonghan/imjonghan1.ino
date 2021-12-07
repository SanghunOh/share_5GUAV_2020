#include "pitches.h"
int x;
void setup() {
 Serial.begin(115200);
 Serial.setTimeout(1);
}

int sum = 0;

void loop() {
 while (!Serial.available());
 x = Serial.readString().toInt();
 if(x==1){  
  digitalWrite(22,0);
  digitalWrite(23,0);
  tone(BDPIN_BUZZER, NOTE_C4, 500);
  delay(500);
  digitalWrite(22,1);
  digitalWrite(23,1);
 }
 else if(x==11){
  digitalWrite(22,1);
  digitalWrite(24,1);
 }
 else if(x==2){
  digitalWrite(23,0);
  digitalWrite(24,0);
  digitalWrite(13,0);
 }
 else if(x==22){
  digitalWrite(23,1);
  digitalWrite(24,1);
  digitalWrite(13,1);
 }
 else if(x==3){
  digitalWrite(22,0);
  digitalWrite(23,0);
  digitalWrite(24,0);
  digitalWrite(25,0);
  digitalWrite(13,0);
 }
 else if(x==33){
  digitalWrite(22,1);
  digitalWrite(23,1);
  digitalWrite(24,1);
  digitalWrite(25,1);
  digitalWrite(13,1);
 }
 else if(x==4){
  digitalWrite(22,1);
  digitalWrite(23,1);
  digitalWrite(24,1);
  digitalWrite(25,1);
 }
 else if(x==5){
  digitalWrite(22,0);
  digitalWrite(23,0);
  digitalWrite(24,0);
  digitalWrite(25,0);
 }; 
}
