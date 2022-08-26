#include "GFX_LED_Cube.h"
//#include <Adafruit_GFX.h>
LEDCube myCube;
//void drawRect(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint16_t color);
uint16_t x0[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
uint16_t y[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
uint16_t color[] = {12555, 123, 29857, 35214, 48975, 60000, 18000, 7841};
unsigned long previousMillis = 0;
const long interval = 1000;
const long interval2 = 10000;
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
int i = 0;
void loop() {
  unsigned long currentMillis = millis();

  // put your main code here, to run repeatedly:
  if (currentMillis  < interval) {
    previousMillis = currentMillis;
    // save the last time you blinked the LED
    for (int i = 0; i < 6 ; i++) {
      myCube.setDepth(i);
      myCube.drawRect( x0[i], 2, 4, 4, color[i]);
      //myCube.drawChar(0, 0, 89, 65535, 0, 1);
      myCube.display();
      delay(250);
    }
  }
  if (currentMillis > 2000 && currentMillis < 5000 ) {
    myCube.clear();
    myCube.setDepth(2);
    myCube.fillCircle(2, 3, 2, 25874);
    myCube.setDepth(4);
    myCube.fillCircle(5, 3, 2, 45213);
    myCube.display();
  }
  if ((currentMillis > 6000) && (currentMillis < 10000)) {
    myCube.clear();
    myCube.setCursor(1, 0);
    myCube.setDepth(i % 8);
    myCube.print((i++) % 9, DEC);
    myCube.display();
    delay(250);
  }
  if ((currentMillis > 10000) && (currentMillis < 12000)) {
    myCube.clear();
    myCube.setDepth(2);
    myCube.drawLine(1, 1, 6, 5, 55879);
    myCube.setDepth(5);
    myCube.drawLine(1, 7, 1, 1, 22145);
    myCube.display();
  }
  if ((currentMillis > 12000) && (currentMillis < 15000)) {
    myCube.clear();
    for (int i = 0; i < 8 ; i++) {
      myCube.setDepth(i);
      myCube.drawPixel(x0[i], y[i], color[i]);
      myCube.display();
      delay(250);
    }
    for (int i = 0; i > 8 ; i++) {
      myCube.setDepth(i-1);
      myCube.drawPixel(x0[i], y[i], color[i]);
      myCube.display();

    }
    return;
  }
}
