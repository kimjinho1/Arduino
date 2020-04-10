#include <Adafruit_NeoPixel.h>
#define LED 11 // LED Pin
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(1, LED, NEO_GRB + NEO_KHZ800);

const int SW = 10; // Button Pin
int led = 0; // LED의 상태를 저장해주는 변수

void setup() {
  pixels.begin();
  pixels.show();
  pinMode(SW, INPUT);
}

void loop() {  
  // 버튼을 누르고 있을 때 Led를 켬
  if (digitalRead(SW) == LOW) {
    if (led == 0) {
      pixels.setPixelColor(0, 100, 0, 0); // 빨강
      pixels.show(); 
      delay(1000);
    }    
    if (led == 1) {
      pixels.setPixelColor(0, 0, 100, 0); // 파랑
      pixels.show(); 
      delay(1000);
    }
    if (led == 2) {
      pixels.setPixelColor(0, 0, 0, 100); // 초록
      pixels.show(); 
      delay(50);
    }
    if (led == 3) {
      pixels.setPixelColor(0, 100, 100, 0); // 노랑
      pixels.show(); 
      delay(1000);
    }
    if (led == 4) {
      pixels.setPixelColor(0, 100, 0, 100); //  보라
      pixels.show(); 
      delay(1000);
    }
    if (led == 5) {
      pixels.setPixelColor(0, 0, 100, 100); // 하늘
      pixels.show(); 
      delay(1000);
    }
    if (led == 6) {
      pixels.setPixelColor(0, 100, 100, 100); // 하양
      pixels.show(); 
      delay(1000);
      led = -1;
    }
    led += 1;
  }
  // 버튼을 누르지 않았을 때는 정전 상태
  else {
    pixels.setPixelColor(0, 0, 0, 0);
    pixels.show();     
  }
}
