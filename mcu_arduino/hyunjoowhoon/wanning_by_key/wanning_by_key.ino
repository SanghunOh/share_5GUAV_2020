#include "pitches.h"
int a, b, c, d, e, f, i, repeat;
String x; 
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
void blink_and_buzz(w_times){
  for(i=0,i<w_times){      
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
      
      tone(BDPIN_BUZZER, NOTE_G4, 500);
      delay(500);
      noTone(BDPIN_BUZZER);
  }  
}
void serialEvent(){
  x = Serial.readString();  
  Serial.println(x);
    if (x == "f"){
      a = 0;
      b = 0;
      c = 1;
      d = 1;
      e = 1;
      f = 1;
      blink_and_buzz(1);
    }
    else if (x == "b"){
      a = 1;
      b = 1;
      c = 0;
      d = 0;
      e = 1;
      f = 1;
      blink_and_buzz(2);
    }
    else if (x == "r"){
      a = 0;
      b = 1;
      c = 1;
      d = 0;
      e = 1;
      f = 1;
      blink_and_buzz(3);
    }
    else if (x == "l"){
      a = 1;
      b = 0;
      c = 0;
      d = 1;
      e = 1;
      f = 1;     
      blink_and_buzz(4);
    }
    else if (x == "q"){
      a = 0;
      b = 0;
      c = 0;
      d = 0;
      e = 0;
      f = 1;     
      blink_and_buzz(5);
  }
}
