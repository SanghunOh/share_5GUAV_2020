String x;

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
  x = Serial.read()
  }
  if (x == 'f'){
  digitalWrite(22,0);
  digitalWrite(23,0);
  tone(BDPIN_BUZZER, NOTE_C4, 500);
  delay(500);
  }
  else if (x == 'b'){
  digitalWrite(24,0);  
  digitalWrite(25,0);  
  tone(BDPIN_BUZZER, NOTE_G3, 500);
  delay(500);
  }
  else if (x == 'r'){
  digitalWrite(22,0);  
  digitalWrite(25,0);
  tone(BDPIN_BUZZER, NOTE_A3, 500);
  delay(500);
  }
  else if (x == 'l' ){
  digitalWrite(23,0);  
  digitalWrite(24,0);
  tone(BDPIN_BUZZER, NOTE_B3, 500);
  delay(500);
  }
  else if (x  == 'q'){
  digitalWrite(22,0);
  delay(1000);
  digitalWrite(23,0);
  delay(1000);
  digitalWrite(24,0);
  delay(1000);
  digitalWrite(25,0);
  delay(1000);
  tone(BDPIN_BUZZER, NOTE_C3, 500);
  delay(500);
  
  }
}
