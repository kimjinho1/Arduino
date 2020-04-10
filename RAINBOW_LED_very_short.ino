#include <Adafruit_NeoPixel.h>
#define LED 11 // LED Pin
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(1, LED, NEO_GRB + NEO_KHZ800);

const int SW = 10; // Button Pin
int led = 0; // LED의 상태를 저장해주는 변수

// RGB 값이 저장되어 있는 2차원 배열(빨강, 파랑, 초록, 노랑, 보라, 하늘, 하양)
int RGB[7][3] = {{100,0,0}, {0,100,0}, {0,0,100}, {100,100,0}, {100,0,100}, {0,100,100}, {100,100,100}};

void setup() {
  pixels.begin();
  pixels.show();
  pinMode(SW, INPUT);
}

void loop() {  
  // 버튼을 누르고 있을 때 Led를 켬
  if (digitalRead(SW) == LOW) {
    // 배열을 사용함으로써 코드를 엄청 짧게 만들수 있음
    pixels.setPixelColor(0, RGB[led%7][0], RGB[led%7][1], RGB[led%7][2]); 
    pixels.show(); 
    delay(1000); // 1초 주기
    led += 1;
  }
  // 버튼을 누르지 않았을 때는 정전 상태
  pixels.setPixelColor(0, 0, 0, 0); 
  pixels.show();     
}
