#include "pitches.h"

// notes in the melody:
int melody1[] = {
  NOTE_C4 
};

int melody2[] = {
  NOTE_C4, NOTE_C4
};

int melody3[] = {
  NOTE_C4, NOTE_C4, NOTE_C4 
};

int melody4[] = {
  NOTE_C4, NOTE_C4,NOTE_C4,NOTE_C4 
};

int melody5[] = {
  NOTE_C4, NOTE_C4,NOTE_C4,NOTE_C4,NOTE_C4
};

int noteDurations1[] = {
  4
};

int noteDurations2[] = {
  4, 4
};

int noteDurations3[] = {
  4, 4, 4
};

int noteDurations4[] = {
  4, 4, 4, 4
};

int noteDurations5[] = {
  4, 4, 4, 4, 4
};

int led_pin_user[4] = { BDPIN_LED_USER_1, BDPIN_LED_USER_2, BDPIN_LED_USER_3, BDPIN_LED_USER_4 };


void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin_user[0], OUTPUT);
  pinMode(led_pin_user[1], OUTPUT);
  pinMode(led_pin_user[2], OUTPUT);
  pinMode(led_pin_user[3], OUTPUT);

}

void key_f() {
  digitalWrite(led_pin_user[0], HIGH);
  digitalWrite(led_pin_user[1], HIGH);
    for (int thisNote = 0; thisNote < 1; thisNote++) {

    int noteDuration = 1000 / noteDurations1[thisNote];
    tone(BDPIN_BUZZER, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(BDPIN_BUZZER);
  }
  delay(100)
  digitalWrite(led_pin_user[0], LOW);
  digitalWrite(led_pin_user[1], LOW);
}

void key_b() {
  digitalWrite(led_pin_user[2], HIGH);
  digitalWrite(led_pin_user[3], HIGH);
    for (int thisNote = 0; thisNote < 2; thisNote++) {

    int noteDuration = 1000 / noteDurations2[thisNote];
    tone(BDPIN_BUZZER, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(BDPIN_BUZZER);
  }
  delay(100)
  digitalWrite(led_pin_user[2], LOW);
  digitalWrite(led_pin_user[3], LOW);
}

void key_r() {
  digitalWrite(led_pin_user[0], HIGH);
  digitalWrite(led_pin_user[3], HIGH);
    for (int thisNote = 0; thisNote < 3; thisNote++) {

    int noteDuration = 1000 / noteDurations3[thisNote];
    tone(BDPIN_BUZZER, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(BDPIN_BUZZER);
  }
  delay(100)
  digitalWrite(led_pin_user[0], LOW);
  digitalWrite(led_pin_user[3], LOW);
}

void key_l() {
  digitalWrite(led_pin_user[1], HIGH);
  digitalWrite(led_pin_user[2], HIGH);
    for (int thisNote = 0; thisNote < 4; thisNote++) {

    int noteDuration = 1000 / noteDurations4[thisNote];
    tone(BDPIN_BUZZER, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(BDPIN_BUZZER);
  }
  delay(100)
  digitalWrite(led_pin_user[1], LOW);
  digitalWrite(led_pin_user[2], LOW);
}

void key_q() {

  for( i=0; i<4; i++ )
  {
    digitalWrite(led_pin_user[i], HIGH);
    delay(100);
  }
  delay(100)
  
    for (int thisNote = 0; thisNote < 5; thisNote++) {

    int noteDuration = 1000 / noteDurations5[thisNote];
    tone(BDPIN_BUZZER, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(BDPIN_BUZZER);
  }
  
  delay(100)
 for( i=0; i<4; i++ )
  {
    digitalWrite(led_pin_user[i], LOW);
    delay(100);
  }
}


void loop() {
  // put your main code here, to run repeatedly:

}
