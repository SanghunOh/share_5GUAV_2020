#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988

void first_line()
{
  tone(BDPIN_BUZZER, NOTE_E5, 200); // 미 
  delay(200);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_DS5, 200); // 레#
  delay(200);
  noTone(BDPIN_BUZZER);
  
  tone(BDPIN_BUZZER, NOTE_E5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_DS5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_E5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  
  tone(BDPIN_BUZZER, NOTE_B4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_D4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  
  tone(BDPIN_BUZZER, NOTE_C5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  
  tone(BDPIN_BUZZER, NOTE_A4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
}

void second_line()
{
  tone(BDPIN_BUZZER, NOTE_C4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_E4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_A4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_B4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_E4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_GS4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_A4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_C5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
}

void third_line()
{
  tone(BDPIN_BUZZER, NOTE_E4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  
  tone(BDPIN_BUZZER, NOTE_E5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_DS5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_E5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_DS5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_E5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_B4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_D5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_C5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_A4, 500);
  delay(400);
  noTone(BDPIN_BUZZER);
}

void fourth_line()
{
  tone(BDPIN_BUZZER, NOTE_C4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_E4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_A4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_B4, 500);
  delay(300);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_E4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_C5, 500);
  delay(200);
  noTone(BDPIN_BUZZER);
  tone(BDPIN_BUZZER, NOTE_B4, 500);
  delay(200);
  noTone(BDPIN_BUZZER);

  tone(BDPIN_BUZZER, NOTE_A4, 500);
  delay(500);
  noTone(BDPIN_BUZZER);
}

int led_pin = 13;
int led_pin_user[4] = { BDPIN_LED_USER_1, BDPIN_LED_USER_2, BDPIN_LED_USER_3, BDPIN_LED_USER_4 };
int x;
int i;

void loop(){
  x = Serial.readString().toInt();
  if (x == 119) // w
  {
    digitalWrite(led_pin_user[0],0);
    delay(100);
    digitalWrite(led_pin_user[1],0);
    delay(100);
    
    first_line();
  }
  else if (x == 115)
  {
    for(i=0; i<2; ++i)
    {
      digitalWrite(led_pin_user[2],0);
      delay(100);
      digitalWrite(led_pin_user[3],0);
      delay(100);
  
      second_line();
    }
  }
  else if (x == 97)
  {
    for(i=0; i<3; ++i)
    {
      digitalWrite(led_pin_user[0],0);
      delay(100);
      digitalWrite(led_pin_user[3],0);
      delay(100);
  
      third_line();
    }
  }
  else if (x == 100)
  {
    for(i=0; i<4; ++i)
    {
      digitalWrite(led_pin_user[1],0);
      delay(100);
      digitalWrite(led_pin_user[2],0);
      delay(100);
  
      fourth_line();
    }
  }
  else if (x == 101)
  {
    digitalWrite(led_pin, 1);  // set to as HIGH LED is turn-off
    delay(3000);                   // Wait for 0.1 second
    digitalWrite(led_pin, 0);   // set to as LOW LED is turn-on
    delay(100);
    for(i=0; i<5; ++i)
    {
      for( i=0; i<4; i++ )
      {
        digitalWrite(led_pin_user[i], 1);
        delay(100);
      }
      
      for( i=0; i<4; i++ )
      {
        digitalWrite(led_pin_user[i], 0);
        delay(100);
      }
    }
    first_line();
    second_line();
    third_line();
    fourth_line();
  }
  

}

void setup(){
  // put your main code here, to run repeatedly:
  

}
