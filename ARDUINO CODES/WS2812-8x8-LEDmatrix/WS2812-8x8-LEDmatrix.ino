#include <FastLED.h>

#define LED_PIN 6
#define NUM_LEDS 64

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  // Fill the entire matrix with a color (in this case, red)
  fill_solid(leds, NUM_LEDS, CRGB::Red);

  // Show the changes
  FastLED.show();

  // Pause for a moment
  delay(1000);
}
