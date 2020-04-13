#include <Adafruit_NeoPixel.h>
#define LED 11 // LED Pin
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(1, LED, NEO_GRB + NEO_KHZ800);

const int SW = 10; // Button Pin
int led = 0; // LED의 상태를 저장해주는 변수

int R[7] = {100, 0, 0, 100, 100, 0, 100}; // 빨간색 
int G[7] = {0, 100, 0, 100, 0, 100, 100}; // 초록색
int B[7] = {0, 0, 100, 0, 100, 100, 100}; // 파란색

void setup() {
  pixels.begin();
  pixels.show();
  pinMode(SW, INPUT);
}

void loop() {  
  // 버튼을 누르고 있을 때 Led를 켬
  if (digitalRead(SW) == LOW) {
    // 배열을 사용함으로써 코드를 엄청 짧게 만들수 있음
    pixels.setPixelColor(0, R[led%7], G[led%7], B[led%7]); 
    pixels.show(); 
    delay(1000); // 1초 주기
    led += 1;
  }
  // 버튼을 누르지 않았을 때는 정전 상태
  pixels.setPixelColor(0, 0, 0, 0); 
  pixels.show();     
}
