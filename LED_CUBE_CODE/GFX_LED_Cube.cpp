#include <avr/pgmspace.h>
#include <stdlib.h>

#include "Adafruit_GFX.h"
#include "GFX_LED_Cube.h"

LEDCube::LEDCube() : Adafruit_GFX(8, 8)
{
	
}

void LEDCube::begin(void)
{
	Adafruit_NeoPixel *pixels1 = new Adafruit_NeoPixel(NUMPIXELS, PIN1, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels2 = new Adafruit_NeoPixel(NUMPIXELS, PIN2, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels3 = new Adafruit_NeoPixel(NUMPIXELS, PIN3, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels4 = new Adafruit_NeoPixel(NUMPIXELS, PIN4, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels5 = new Adafruit_NeoPixel(NUMPIXELS, PIN5, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels6 = new Adafruit_NeoPixel(NUMPIXELS, PIN6, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels7 = new Adafruit_NeoPixel(NUMPIXELS, PIN7, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels8 = new Adafruit_NeoPixel(NUMPIXELS, PIN8, NEO_GRB + NEO_KHZ800);
	
	pixels[0] = pixels1;
	pixels[1] = pixels2;
	pixels[2] = pixels3;
	pixels[3] = pixels4;
	pixels[4] = pixels5;
	pixels[5] = pixels6;
	pixels[6] = pixels7;
	pixels[7] = pixels8;
	
	for (int i = 0; i < LAYERS; i++)
	{
		pixels[i]->begin();
	}
}

void LEDCube::clear(void)
{
	for (int i = 0; i < LAYERS; i++)
	{
		for (int j = 0; j < NUMPIXELS; j++)
		{
			pixels[i]->setPixelColor(j, 0);
		}
	}
}

void LEDCube::display(void)
{
	for (int i = 0; i < LAYERS; i++)
	{
		pixels[i]->show();
	}
}

void LEDCube::drawPixel(int16_t x, int16_t y, uint16_t color)
{
	if ((x < 0) || (x > 7) || (y < 0) || (y > 7)) return;
	int16_t _x0 = (_depth % 2 == 0 ? (7 - x) : x);
	pixels[y]->setPixelColor((_depth * 8) + _x0, color);
	
	// Debug stuff, ignore it for now.
	//Serial.print("X:");
	//Serial.print(x, DEC);
	//Serial.print(" Y:");
	//Serial.print(y, DEC);
	//Serial.print(" Z:");
	//Serial.print(_depth, DEC);
	//Serial.print(" Color:");
	//Serial.print(color, DEC);
	//Serial.print(" LED:");
	//Serial.print((_depth * 4) + _x0, DEC);
	//Serial.println();
}

void LEDCube::setDepth(int _d)
{
	if ((_d > 7) || (_d < 0)) return;
	_depth = _d;
}

void LEDCube :: drawPixel_2(int16_t a, int16_t b, uint16_t color)
{
	
	if ((a < 0) || (a > 64) || (b < 0) || (b > 64)) return;
	int16_t _x1 = (_depth2 % 2 == 0 ? (64 - a) : b);
	pixels[b]->setPixelColor((_depth2 * 8) + _x1, color);
}

void LEDCube::setDepth_2(int _d2)
{
	if ((_d2 > 64) || (_d2 < 0)) return;
	_depth2 = _d2;
}


void LEDCube :: drawPixel_3(int16_t x1, int16_t y1, uint16_t color)
{
	
	if ((x1 < 0) || (x1 > 7 )|| (y1 < 0) || (y1 > 7)) return;
	int16_t _x2 = (x1 % 2 == 0 ? (7 - _depth3) : y1);
	pixels[y1]->setPixelColor((x1 * 8) + _x2, color);
}

void LEDCube::setDepth_3(int _d3)
{
	if ((_d3 > 8) || ( _d3< 0)) return;
	_depth3 = _d3;
}


