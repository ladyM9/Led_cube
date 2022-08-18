#include <Adafruit_NeoPixel.h>
#define LED_PIN     PB0
#define LED_COUNT  64
#define BRIGHTNESS 2 // Set BRIGHTNESS to about 1/5 (max = 255)
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

void setup() {
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // put your setup code here, to run once:
  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(BRIGHTNESS);

}

void loop() {
  // put your main code here, to run repeatedly:
  //  colorWipe(strip.Color(255,   0,   0)); // Red
  //  colorWipe(strip.Color(  0, 255,   0)); // Green
  uint32_t blue = strip.Color(15, 25, 250);
  uint32_t rgbcolor ;
  colorWipe(blue, rgbcolor);


  //  whiteOverRainbow(80, 5);



}

void colorWipe(uint32_t color, uint32_t rgbcolor) {

  for (int i = 0; i < strip.numPixels() - 50; i++) { // For each pixel in strip...
    strip.setPixelColor(i, color);        //  Set pixel's color (in RAM)
    //delay(wait);                           //  Pause for a momen
  }
  //   strip.fill(rgbcolor);
  for (int i = 15; i < 25; i++) {
    strip.setPixelColor(i,  strip.ColorHSV(54145, 255, 255));
  }
  for (int i = 26; i < 42; i++) {
    strip.setPixelColor(i,  strip.ColorHSV(65625 / 2, 254, 254));
  }
  for (int i = 43; i < 58; i++) {
    strip.setPixelColor(i,  strip.ColorHSV(64120 , 254, 254));
  }
  strip.show();



}
