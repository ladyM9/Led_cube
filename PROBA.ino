#include "GFX_LED_Cube.h"
//#include <Adafruit_GFX.h>
LEDCube myCube;
//void drawRect(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint16_t color);
uint16_t x0[] = {0, 1, 2, 3, 4, 5, 6};
uint16_t color[] = {12555, 123, 29857, 35214, 48975, 60000};
unsigned long previousMillis = 0;
const long interval = 1000;
const long interval2 = 1000;
void setup() {
  // put your setup code here, to run once:
  //  uint16_t x0 = 1;
  //  uint16_t x1 = 5;
  //  uint16_t y0 = 0;
  //  uint16_t y1 = 5;
  //  uint16_t color_1 = 32158;
  //  uint16_t w = 5 ;
  //  uint16_t h = 5 ;

  myCube.begin();
 // myCube.clear();
  // myCube.drawRect( 0, 2, 4, 4, 12555);
  //myCube.drawChar(0, 0, 89, 65535, 0, 1);
  // myCube.display();
}

void loop() {
  unsigned long currentMillis = millis();

  // put your main code here, to run repeatedly:
  if (currentMillis  > interval) {
    previousMillis = currentMillis;
    // save the last time you blinked the LED
    for (int i = 0; i < 6 ; i++) {
      myCube.setDepth(i);
      myCube.drawRect( x0[i], 2, 4, 4, color[i]);
      //myCube.drawChar(0, 0, 89, 65535, 0, 1);
      myCube.display();
    }
  } else {
    myCube.setDepth(1);
    myCube.drawPixel(1, 0, 12535);
    myCube.setDepth(1);
    myCube.drawPixel(1, 2, 32568);
    myCube.setDepth(1);
    myCube.drawPixel(1, 1 , 65535);
    myCube.setDepth(1);
    myCube.drawPixel(1, 3 , 52138);
    myCube.setDepth(1);
    myCube.drawPixel(1, 4 , 65535);
    myCube.setDepth(1);
    myCube.drawPixel(1, 5 , 789);
    myCube.setDepth(1);
    myCube.drawPixel(1, 6 , 65535);
    myCube.setDepth(2);
    myCube.drawPixel(1, 5 , 65535);
    myCube.setDepth(2);
    myCube.drawPixel(2, 4 , 65535);
    myCube.setDepth(2);
    myCube.drawPixel(3, 3 , 65535);
    myCube.setDepth(2);
    myCube.drawPixel(4, 2 , 65535);
    myCube.setDepth(2);
    myCube.drawPixel(5, 0 , 65535);

    ///Desna linija slova N
    myCube.setDepth(3);
    myCube.drawPixel(6, 0 , 65535);
    myCube.setDepth(3);
    myCube.drawPixel(6, 1 , 65535);
    myCube.setDepth(3);
    myCube.drawPixel(6, 2 , 2800);
    myCube.setDepth(3);
    myCube.drawPixel(6, 3 , 5535);
    myCube.setDepth(3);
    myCube.drawPixel(6, 4 , 17535);
    myCube.setDepth(3);
    myCube.drawPixel(6, 5 , 65535);
    myCube.setDepth(3);
    myCube.drawPixel(6, 6 , 52535);
    myCube.display();
    myCube.clear();
  }
 // myCube.clear();

}
