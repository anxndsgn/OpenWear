#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
 
#define NUM_PIXELS 1   

Adafruit_NeoPixel ws2812b(NUM_PIXELS, NEOPIXEL, NEO_GRB + NEO_KHZ800);

void setup()
{
  
  ws2812b.begin();
  ws2812b.clear();  

}

void loop()
{
  
  for(int i=0;i<100;i++){
    ws2812b.setPixelColor(0, ws2812b.Color(0, 100, i)); 
    ws2812b.show(); 
    delay(20);
  }
  for(int i=0;i<100;i++){
    ws2812b.setPixelColor(0, ws2812b.Color(0, i, 100)); 
    ws2812b.show(); 
    delay(20);
  }

  for(int i=100;i>0;i--){
    ws2812b.setPixelColor(0, ws2812b.Color(i, 100, 0)); 
    ws2812b.show(); 
    delay(20);
  }
  
}
