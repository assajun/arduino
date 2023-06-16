void ledrun(){

   for(int i=0; i<=3 ; i++ ){
    digitalWrite(LED[i], HIGH);
    delay(500);
    digitalWrite(LED[i], LOW);
    delay(500);
}
//เมื่อออกจากloop ให้Buzzer ดัง1ครั้ง
}