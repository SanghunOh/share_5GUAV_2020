
#include "pitches.h"

char key;


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
  {
  key = Serial.read();
  }
  if (key == 'f'){
  digitalWrite(22,0);
  digitalWrite(23,0);
  tone(BDPIN_BUZZER, NOTE_C4, 500);
  delay(500);
  noTone(BDPIN_BUZZER); 
  digitalWrite(22,1);
  digitalWrite(23,1);

  }
  else if (key  == 'b'){
  digitalWrite(24,0);  
  digitalWrite(25,0); 
  tone(BDPIN_BUZZER, NOTE_G3, 500);
  delay(500);
  noTone(BDPIN_BUZZER); 
  digitalWrite(24,1);  
  digitalWrite(25,1);

  }
  else if (key  == 'r'){
  digitalWrite(22,0);  
  digitalWrite(25,0);
  tone(BDPIN_BUZZER, NOTE_A3, 500);
  delay(500);
  noTone(BDPIN_BUZZER); 
  digitalWrite(22,1);  
  digitalWrite(25,1);

  }
  else if (key == 'l' ){
  digitalWrite(23,0);  
  digitalWrite(24,0);
  tone(BDPIN_BUZZER, NOTE_B3, 500);
  delay(500);
  digitalWrite(23,1);  
  digitalWrite(24,1);

  }
  else if (key == 'q'){
  digitalWrite(22,0);
  delay(500);
  digitalWrite(23,0);
  delay(500);
  digitalWrite(24,0);
  delay(500);
  digitalWrite(25,0);
  delay(500);
  tone(BDPIN_BUZZER, NOTE_C3, 500);
  delay(500);
  noTone(BDPIN_BUZZER); 
  digitalWrite(25,1);
  delay(500);
  digitalWrite(24,1);
  delay(500);
  digitalWrite(23,1);
  delay(500);
  digitalWrite(22,1);
  delay(500);
  }
}
