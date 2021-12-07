#include "pitches.h"

int x;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.setTimeout(1);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  
  while (!Serial.available());
  x=Serial.readString().toInt();

  if (x=="f"){
      digitalWrite(22,1);
      digitalWrite(23,1);
      delay(300);
      digitalWrite(22,0);
      digitalWrite(23,0);
      delay(300);
      tone(BDPIN_BUZZER, NOTE_C4, 500);
      delay(500);

}else if(x=="b"){

  digitalWrite(24,1);
  digitalWrite(25,1);
  delay(300);
  digitalWrite(24,0);
  digitalWrite(25,0);
  delay(300);
  
}else if (x=="r"){
  digitalWrite(22,1);
  digitalWrite(25,1);
  delay(300);
  digitalWrite(22,0);
  digitalWrite(25,0);
  delay(300);

}else if (x=="l"){
  digitalWrite(23,1);
  digitalWrite(24,1);
  delay(300);
  digitalWrite(23,0);
  digitalWrite(24,0);
  delay(300);

  
}else if (x=="q"){
  digitalWrite(22,1);
  digitalWrite(22,0);
  digitalWrite(23,1);
  digitalWrite(23,0);
  digitalWrite(24,1);
  digitalWrite(24,0);
  digitalWrite(25,1);
  digitalWrite(25,0);
  delay(300);

}
}
