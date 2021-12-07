#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

char x;

void repeat(int cnt, char z){
  for (int i = 0; i < cnt; i++){
  tone(BDPIN_BUZZER, z, 500);
  delay(500);
  noTone(BDPIN_BUZZER);
  }
}

void reaction(int x, int y, char z, int cnt){
  digitalWrite(x,0);
  digitalWrite(y,0);
  repeat(cnt,z);
  digitalWrite(x,1);
  digitalWrite(y,1);
  delay(1000);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.setTimeout(1);
  pinMode(22,OUTPUT);
  pinMode(23,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(25,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (!Serial.available());
  x = Serial.readString().toInt();
  if(x='q'){
  Serial.println("프로그램을 종료할까요?");
  }

  
  else if(x='f'){
  reaction(22,23,NOTE_C4,1);
  }

  
  else if(x='b'){
  reaction(24,25,NOTE_G3,2);
  }

  
  else if(x='r'){
  reaction(22,25,NOTE_A3,3);
  }

  
  else if(x='l'){
  reaction(23,24,NOTE_B3,4);
  }

  
  else{
  // LED off (1이 꺼짐)
  digitalWrite(22,1);
  digitalWrite(23,1);
  digitalWrite(24,1);
  digitalWrite(25,1);
  delay(1000);
  }
}
