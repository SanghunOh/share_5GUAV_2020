#include "pitches.h"
String x;
void all_off();
void all_on();
void setup() {
  Serial.begin(115200);
  Serial.setTimeout(1);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(13, OUTPUT);
  
}

void loop() {
  while (!Serial.available());
  x=Serial.readString();
  if (x=="f"){
    all_off();
    tone(1);
    digitalWrite(22,0);
    digitalWrite(23,0);
    delay(300);
  }else if(x=="b"){
    all_off();
    tone(2);
    tone(2);
    digitalWrite(23,0);
    digitalWrite(24,0);
    delay(300);
  }else if(x=="r"){
    all_off();
    tone(3);
    tone(3);
    tone(3);
    digitalWrite(25,0);
    digitalWrite(13,0);
    delay(300);  
  }else if (x=="l"){
    all_off();
    tone(4);
    tone(4);
    tone(4);
    tone(4);
    digitalWrite(22,0);
    digitalWrite(25,0);
    delay(300);
  }
}

void all_off() {
  digitalWrite(22,1);
  digitalWrite(23,1);
  digitalWrite(24,1);
  digitalWrite(25,1);
  digitalWrite(13,0);
  delay(300);
}
void all_on() {
  digitalWrite(22,0);
  digitalWrite(23,0);
  digitalWrite(24,0);
  digitalWrite(25,0);
  digitalWrite(13,1);
}

void tone(int n){
  if (n==1){
  tone(BDPIN_BUZZER,NOTE_C4,500);
  delay(1000);
  }else if (n==2){
  tone(BDPIN_BUZZER,NOTE_G3,500);
  delay(1000);
  }else if (n==3){
  tone(BDPIN_BUZZER,NOTE_A3,500);
  delay(1000);
  }else if (n==4){
  tone(BDPIN_BUZZER,NOTE_B3,500);
  delay(1000);
  }
}
