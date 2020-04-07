#include <Adafruit_NeoPixel.h> // 사용하기 전 라이브러리 설치 필수

int led = 11; // 11번 Pin을 +로 사용           

// 첫 번째 led 사용, 11번 pin 사용
Adafruit_NeoPixel pixels(1, led, NEO_GRB + NEO_KHZ800); 

void setup() {
  pixels.begin();
}

void loop() {
  pixels.setPixelColor(0, 255, 0, 0);     // 빨간색
  pixels.show(); 
  delay(1000);                            // 1초간 딜레이
  pixels.setPixelColor(0, 0, 255, 0);     // 초록색
  pixels.show(); 
  delay(1000);                            // 1초간 딜레이
  pixels.setPixelColor(0, 0, 0, 255);     // 파란색
  pixels.show(); 
  delay(1000);                            // 1초간 딜레이
  pixels.setPixelColor(0, 255, 255, 0);   // 노란색
  pixels.show(); 
  delay(1000);                            // 1초간 딜레이
  pixels.setPixelColor(0, 255, 255, 255); // 흰색
  pixels.show(); 
  delay(1000);                            // 1초간 딜레이
}
