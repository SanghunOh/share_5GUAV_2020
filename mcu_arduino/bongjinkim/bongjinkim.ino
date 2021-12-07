#include "pitches.h"
int a, b, c, d, e, f, i, x;
  
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(36, OUTPUT);

}
// the loop function runs over and over again forever
void loop() {
  
}
void blink(){
    digitalWrite(22, a);delay(100);    
    digitalWrite(23, b);delay(100);    
    digitalWrite(24, c);delay(100);    
    digitalWrite(25, d);delay(100);    
    digitalWrite(36, e);delay(100);    
  
    digitalWrite(22, f);delay(100);    
    digitalWrite(23, f);delay(100);    
    digitalWrite(24, f);delay(100);    
    digitalWrite(25, f);delay(100);    
    digitalWrite(36, f);delay(100);    
}
void beep(){
  tone(BDPIN_BUZZER, NOTE_C4, 100);
  delay(500);   
}
void serialEvent(){
  x = Serial.read();  
  Serial.println(x);
    if (x == 102){
      a = 0;
      b = 0;
      c = 1;
      d = 1;
      e = 1;
      f = 1;
      for( i = 0; i < 1; i++){
        blink(); beep();
      }
    }
    else if (x == 98){
      a = 1;
      b = 1;
      c = 0;
      d = 0;
      e = 1;
      f = 1;
      for( i = 0; i < 2; i++){
        blink();beep();
      }
    }
    else if (x == 114){
      a = 0;
      b = 1;
      c = 1;
      d = 0;
      e = 1;
      f = 1;
      for( i = 0; i < 3; i++){
        blink();beep();
      }
    }
    else if (x == 108){
      a = 1;
      b = 0;
      c = 0;
      d = 1;
      e = 1;
      f = 1;     
      for( i = 0; i < 4; i++){
        blink();beep();
      }
    }
    else if (x == 113){
      a = 0;
      b = 0;
      c = 0;
      d = 0;
      e = 0;
      f = 1;     
      for( i = 0; i < 5; i++){
        blink();beep();
      }
    }  
    else {
      
    }
}
