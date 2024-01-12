#include <avr/pgmspace.h>
#include <stdlib.h>

#include "Adafruit_GFX.h"
#include "GFX_LED_Cube.h"

LEDCube::LEDCube() : Adafruit_GFX(8, 8)
{
	
}

void LEDCube::begin(void)
{
	Adafruit_NeoPixel *pixels1 = new Adafruit_NeoPixel(NUMPIXELS, PIN1, NEO_GRB + NEO_KHZ800);  // pokazivac koji pokazuje na prvi layer
	Adafruit_NeoPixel *pixels2 = new Adafruit_NeoPixel(NUMPIXELS, PIN2, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels3 = new Adafruit_NeoPixel(NUMPIXELS, PIN3, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels4 = new Adafruit_NeoPixel(NUMPIXELS, PIN4, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels5 = new Adafruit_NeoPixel(NUMPIXELS, PIN5, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels6 = new Adafruit_NeoPixel(NUMPIXELS, PIN6, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels7 = new Adafruit_NeoPixel(NUMPIXELS, PIN7, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel *pixels8 = new Adafruit_NeoPixel(NUMPIXELS, PIN8, NEO_GRB + NEO_KHZ800); // pokazivac koji pokazuje na zadnji layer 
	
	pixels[0] = pixels1;
	pixels[1] = pixels2;
	pixels[2] = pixels3;
	pixels[3] = pixels4;
	pixels[4] = pixels5;
	pixels[5] = pixels6;
	pixels[6] = pixels7;
	pixels[7] = pixels8;
	
	for (int i = 0; i < LAYERS; i++) //petlja koja prolazi kroz polje unutar kojega se nalaze svi layeri
	{
		pixels[i]->begin();
	}
}

void LEDCube::clear(void)  //funkcija za brisanje odnosno iskucivanje svih led dioda odnosno layera 
{
	for (int i = 0; i < LAYERS; i++)
	{
		for (int j = 0; j < NUMPIXELS; j++)
		{
			pixels[i]->setPixelColor(j, 0);
		}
	}
}

void LEDCube::display(void) // funkcija za prikaz odnosno ukljucivanje led dioda
{
	for (int i = 0; i < LAYERS; i++)
	{
		pixels[i]->show();
	}
}

void LEDCube::drawPixel(int16_t x, int16_t y, uint16_t color)  // funkcija za ukljucivanje odredenog pixela na odredenoj dubini unutar led kocke
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

void LEDCube::setDepth(int _d)  //podesavanje dubine odnosno z osi na led kocki 
{
	if ((_d > 7) || (_d < 0)) return; 
	_depth = _d;
}




