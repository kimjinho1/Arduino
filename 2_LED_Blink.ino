int LED1 = 11; // 11번 Pin을 +로 사용
int LED2 = 10; // 10번 Pin을 +로 사용

void setup() {
  // LED는 입력을 받는게 아니라 그저 출력할 뿐이므로 OUTPUT으로 설정
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT); 
}

void loop() {
  digitalWrite(LED1, HIGH); // LED1 킴
  digitalWrite(LED2, HIGH); // LED2 킴
  delay(1000);             // 1초간 딜레이
  digitalWrite(LED1, LOW);  // LED1 끔
  delay(1000);             // 1초간 딜레이
  digitalWrite(LED1, HIGH); // LED1 킴
  digitalWrite(LED2, LOW);  // LED2 끔
  delay(1000);             // 1초간 딜레이
  digitalWrite(LED1, LOW); // LED1 킴
  delay(1000);             // 1초간 딜레이
}
