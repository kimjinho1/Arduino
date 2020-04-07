int LED = 11; // 11번 Pin을 +로 사용

void setup() {
  // LED는 입력을 받는게 아니라 그저 출력할 뿐이므로 OUTPUT으로 설정
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH); // LED를 킴
  delay(1000);             // 1초간 딜레이
  digitalWrite(LED, LOW);  // LED를 끔
  delay(1000);             // 1초간 딜레이
}
