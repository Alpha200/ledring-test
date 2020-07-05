#include <Arduino.h>
#include <FastLED.h>

#define NUM_LEDS 24

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 500);
  FastLED.addLeds<NEOPIXEL,D1>(leds, NUM_LEDS);

  for(int i = 0; i < NUM_LEDS; i++) {
    // leds[i] = CRGB::White;

    if (i % 2 == 0) {
      leds[i] = CRGB::White;
    } else {
      leds[i] = CRGB::Black;
    }
  }
   
   FastLED.show();
}

void loop() { }