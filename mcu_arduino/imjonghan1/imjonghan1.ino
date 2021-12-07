#include "pitches.h"
int x;
void setup() {
 Serial.begin(115200);
 Serial.setTimeout(1);
}

int blink_Buzzer(int led1,int led2,int num,int melody){
  for (int i=0;i<num;i++){
    digitalWrite(led1,0);
    digitalWrite(led2,0);
    tone(BDPIN_BUZZER, melody, 500);
    delay(500);
    digitalWrite(led1,1);
    digitalWrite(led2,1);
  }
  return 0;
}

void loop() {
 while (!Serial.available());
 x = Serial.readString().toInt();
 if(x==1){
    blink_Buzzer(22,23,1,NOTE_C4+x);  
 }
 else if(x==2){
  blink_Buzzer(24,25,2,NOTE_C4+x); 
 }
 else if(x==3){
  blink_Buzzer(22,25,3,NOTE_C4+x); 
 }
 else if(x==4){
  blink_Buzzer(23,24,4,NOTE_C4+x); 
 }
 else if(x==5){
  int num1 = 23;
  int num2 = 24;
  for (int i=0;i<15;i++){    
    num1 +=1;
    num2 +=1;
    if (num1>25){num1=22;}
    if (num2>25){num2=22;}
    blink_Buzzer(num1,num2,1,NOTE_C4+2*i);   
  }
  
  
 }
 
}
