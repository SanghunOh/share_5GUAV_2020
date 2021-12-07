
#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {
  // iterate over the notes of the melody:
for (int thisNote = 0; thisNote < 8; thisNote++) {

  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(13, OUTPUT);
 Serial.begin(9600);
// Serial.setTimeout(1);
    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
//  tone(BDPIN_BUZZER, NOTE_C5, 500);
//  delay(500);
//  noTone(BDPIN_BUZZER);
//  tone(BDPIN_BUZZER, NOTE_A4, 500);
//  delay(500);
//  noTone(BDPIN_BUZZER);
//  tone(BDPIN_BUZZER, NOTE_B3, 500);
//  delay(500);
//  noTone(BDPIN_BUZZER);
//  tone(BDPIN_BUZZER, NOTE_G3, 500);
//  delay(500);
//  noTone(BDPIN_BUZZER);
}
  
  }


void loop() {
  // no need to repeat the melody.
  if (Serial.available()) {
 char c = Serial.read();

  
   if(c == 'a'){
 digitalWrite(13, 1);
 digitalWrite(22, 0);
 digitalWrite(23, 0);
 digitalWrite(24, 0);
 digitalWrite(25, 0);
  tone(BDPIN_BUZZER, NOTE_C5, 500);
  delay(500);
  tone(BDPIN_BUZZER, NOTE_A4, 500);
  delay(500);
   }

    if(c == 'b'){
 digitalWrite(13, 0);
  tone(BDPIN_BUZZER, NOTE_G3, 500);
  delay(500);
  tone(BDPIN_BUZZER, NOTE_G4,500);
  delay(500);
 }
 
 if(c == 'c'){
  digitalWrite(22, 1);
  digitalWrite(24, 1);
  
 }
 if(c == 'd'){
  digitalWrite(23, 1);
  digitalWrite(25, 1);
  
 }
  }
 }
 
 
 
 


  
  
