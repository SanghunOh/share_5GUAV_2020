#include "pitches.h"

String x; 



void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(115200);
  Serial.setTimeout(1);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(36, OUTPUT);

}
// the loop function runs over and over again forever
void loop() {
  x = Serial.readString().toInt();

  while (Serial.available());
    x = Serial.read();
    keyEvent(x);
}
void blink_and_buzz (int led_pin_1, int led_pin_2, int w_times){
  
  for (int i; i<w_times; i++){      
      digitalWrite(led_pin_1, 0);delay(500);    
      digitalWrite(led_pin_2, 0);delay(500);
      digitalWrite(led_pin_1, 1);
      digitalWrite(led_pin_2, 1);
 
      tone(BDPIN_BUZZER, NOTE_G6, 500);
      delay(500);
      noTone(BDPIN_BUZZER);
  }  
}

void wave_buzz (int w_times){

  for(int i;i<w_times;){      
      digitalWrite(22, 0);delay(250);    
      digitalWrite(23, 0);delay(250);
      digitalWrite(24, 0);delay(250);
      digitalWrite(25, 0);delay(250);
      digitalWrite(25, 1);delay(250);
      digitalWrite(24, 1);delay(250);
      digitalWrite(23, 1);delay(250);
      digitalWrite(22, 1);delay(250);

      for(i=0; i=4; i++){
        tone(BDPIN_BUZZER, NOTE_G6, 250);
        delay(250);
        noTone(BDPIN_BUZZER);
      }
  } 
}

void keyEvent(x){
  
    if (x == "f"){
      blink_and_buzz(22,23,1);
    }
    else if (x == "b"){
      blink_and_buzz(24,25,2);
    }
    else if (x == "r"){
      blink_and_buzz(22,25,3);
    }
    else if (x == "l"){
      blink_and_buzz(23,24,4);
    }
    else if (x == "q"){
      wave_buzz(5);
  }
}
