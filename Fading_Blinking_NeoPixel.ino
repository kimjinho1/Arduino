#include <Adafruit_NeoPixel.h>

int led = 11; // 11번 Pin을 +로 사용

Adafruit_NeoPixel pixels(1, led, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
}

void loop() {
  // 빨간색 Blink(2초)
  for(int i = 0; i <= 20; i += 1)  {
    pixels.setPixelColor(0, 250, 0, 0);
    pixels.show(); 
    delay(50);  
    pixels.setPixelColor(0, 0, 0, 0);
    pixels.show(); 
    delay(50);  
  }  
  // 초록색 Fade in(2초)
  for(int brightness = 0; brightness <= 250; brightness += 5) {
    pixels.setPixelColor(0, 0, brightness, 0);
    pixels.show(); 
    delay(40);  
  }
  // 파란색 Fade out(2초)
  for(int brightness = 250; brightness >= 0; brightness -= 5) {  
    pixels.setPixelColor(0, 0, 0, brightness);
    pixels.show(); 
    delay(40);  
  }
}
