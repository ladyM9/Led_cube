#ifndef __ADAFRUIT_GFX_CUBE_H__
#define __ADAFRUIT_GFX_CUBE_H__

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include <Adafruit_NeoPixel.h>
#include <Adafruit_GFX.h>

#define PIN1        PB0 // Connected to D2
#define PIN2        PB9 // Connected to D3
#define PIN3        PB8 // Connected to D4
#define PIN4        PB7 // Connected to D5
#define PIN5        PB6 // Connected to D6
#define PIN6        PB5 // Connected to D7
#define PIN7        PB4 // Connected to D8
#define PIN8        PA0 // Connected to D9
#define NUMPIXELS 	64 // How many LEDs there are on one layer
#define LAYERS		8

class LEDCube : public Adafruit_GFX {
	public:
	LEDCube();

  	void begin(void);
  	void clear(void);
  	void display(void);
  	void drawPixel(int16_t x, int16_t y, uint16_t color);
	void drawPixel_2(int16_t a, int16_t b, uint16_t color);
	void drawPixel_3(int16_t x1, int16_t y1, uint16_t color);
	void setDepth(int _d);
	void setDepth_2(int _d2);
	void setDepth_3(int _d3);

	private:
	Adafruit_NeoPixel *pixels[8];
	int _depth = 0;
	int _depth2 = 8;
	int _depth3 = 0;

};

#endif