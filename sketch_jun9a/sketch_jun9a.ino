int LED[] = {16,5,4,0};

void setup(){
  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
  pinMode(LED[2], OUTPUT);
  pinMode(LED[3], OUTPUT);
}

void loop(){
  for(int i=0; i<=3 ; i++ ){
    digitalWrite(LED[i], HIGH);
    delay(500);
    digitalWrite(LED[i], LOW);
    delay(500);
}
//เมื่อออกจากloop ให้Buzzer ดัง1ครั้ง
}