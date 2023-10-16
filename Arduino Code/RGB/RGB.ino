#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define PIN_WS2812B 10  
#define NUM_PIXELS 1   

Adafruit_NeoPixel ws2812b(NUM_PIXELS, PIN_WS2812B, NEO_GRB + NEO_KHZ800);

void setup()
{
  pinMode(5,OUTPUT);
  digitalWrite(5,HIGH);
  ws2812b.begin();
  ws2812b.clear();  

}

void loop()
{
  
  for(int i=0;i<150;i++){
    ws2812b.setPixelColor(0, ws2812b.Color(0, 100, i)); 
    ws2812b.show(); 
    delay(20);
  }
  for(int i=150;i>0;i--){
    ws2812b.setPixelColor(0, ws2812b.Color(100, 0, i)); 
    ws2812b.show(); 
    delay(20);
  }
  
}
