char x;

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
  digitalWrite(22,0);
  digitalWrite(23,0);
  tone(BDPIN_BUZZER, NOTE_C4, 500);
  delay(500);
  noTone(BDPIN_BUZZER);
  digitalWrite(22,1);
  digitalWrite(23,1);
  delay(1000);
  }

  
  else if(x='b'){
  digitalWrite(24,0);
  digitalWrite(25,0);
  tone(BDPIN_BUZZER, NOTE_G3, 500);
  delay(500);
  noTone(BDPIN_BUZZER);
  digitalWrite(24,1);
  digitalWrite(25,1);
  delay(1000);
  }

  
  else if(x='r'){
  digitalWrite(22,0);
  digitalWrite(25,0);
  tone(BDPIN_BUZZER, NOTE_A3, 500);
  delay(500);
  noTone(BDPIN_BUZZER);
  digitalWrite(22,1);
  digitalWrite(25,1);
  delay(1000);
  }

  
  else if(x='l'){
  digitalWrite(23,0);
  digitalWrite(24,0);
  tone(BDPIN_BUZZER, NOTE_B3, 500);
  delay(500);
  noTone(BDPIN_BUZZER);
  digitalWrite(23,1);
  digitalWrite(24,1);
  delay(1000);
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
