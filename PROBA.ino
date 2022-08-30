#include "GFX_LED_Cube.h"
//#include <Adafruit_GFX.h>
LEDCube myCube;
//void drawRect(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint16_t color);
uint16_t x0[] = {0, 1, 2, 3, 4, 5, 6};
uint16_t y[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
char slova[5] = {'F','E','R','I','T'};
uint16_t color[] = {12555, 123, 29857, 35214, 48975, 60000, 18000, 7841};
unsigned long previousMillis = 0;
const long interval = 1000;
const long interval2 = 10000;

unsigned long change_Timer = 0;
int pattern = 0;
unsigned long TIMER_CHANGE_INTERVAL = 5000;
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
  upadate_Animacije(pattern);  //pozivanje funkcije pattern
  //unsigned long currentMillis = millis()
  if ((unsigned long)(millis() - change_Timer) >= TIMER_CHANGE_INTERVAL)  ///ako je  razlika vremena otkad je upaljen mikroupravljač i vremena promjene vremena veća od promjene intervala učini sljedeće
  {
    change_Timer = millis();  //varijabli za promjenu timera priduži millis odnosno milisekunde odnosno kreni brojati
    pattern++;  //pattern je ustvari _p iz funkcije za promjenu animacije, pomoću _p odnosno pattern odabire se case tj animacija
    if (pattern > 6)  //ako su animacije odnosno caseovi došli do kraja postavi pattern na 0 i kreni ispočetka
    {
      pattern = 0;
    }
  }



  return;
}

//  // put your main code here, to run repeatedly:
// // if (currentMillis + previousMillis  < millis()  || millis() < previousMillis) {
////    previousMillis = currentMillis;
//    // save the last time you blinked the LED
//    for (int i = 0; i < 6 ; i++) {
//      myCube.setDepth(i);
//      myCube.drawRect( x0[i], 2, 4, 4, color[i]);
//      //myCube.drawChar(0, 0, 89, 65535, 0, 1);
//      myCube.display();
//      delay(250);
//    }
//  }
//  if (currentMillis > 2000 && currentMillis < 5000 ) {
//  myCube.clear();
//    myCube.setDepth(2);
//    myCube.fillCircle(2, 3, 2, 25874);
//    delay(250);
//    myCube.setDepth(4);
//    myCube.fillCircle(5, 3, 2, 45213);
//    myCube.display();
//  }
//  if ((currentMillis > 6000) && (currentMillis < 10000)) {
//    myCube.clear();
//    myCube.setCursor(1, 0);
//    myCube.setDepth(i % 8);
//    myCube.print((i++) % 9, DEC);
//    myCube.display();
//    delay(250);
//  }
//  if ((currentMillis > 10000) && (currentMillis < 12000)) {
//    myCube.clear();
//    myCube.setDepth(2);
//    myCube.drawLine(1, 1, 6, 5, 55879);
//    myCube.setDepth(5);
//    myCube.drawLine(1, 7, 1, 1, 22145);
//    myCube.display();
//  }
//  if ((currentMillis > 12000) && (currentMillis < 15000)) {
//    myCube.clear();
//    for (int i = 0; i < 8 ; i++) {
//      myCube.setDepth(i);
//      myCube.drawPixel(x0[i], y[i], color[i]);
//      myCube.display();
//      delay(250);
//    }
//    for (int i = 0; i > 8 ; i++) {
//      myCube.setDepth(i - 1);
//      myCube.drawPixel(x0[i], y[i], color[i]);
//      myCube.display();
//
//    }




void  upadate_Animacije(int _p)   ///funkcija pomoću koje odabirem animaciju koju želim da mi se prikazuje na led kocki
{
  switch (_p)
  {
    case 0:
      myCube.clear();
      for (int i = 0; i < 5 ; i++)
      {
        myCube.setDepth(i);
        myCube.drawPixel(x0[i], y[i], color[i]);
        myCube.display();
        delay(250);
      }
      for (int i = 8; i > 0 ; i--)
      {
        myCube.setDepth(8);
        myCube.drawPixel(x0[i], y[i], color[i]);
        myCube.display();
        delay(250);
      } break;
    case 1:
      myCube.clear();
      myCube.setCursor(1, 0);
      myCube.setDepth(i % 8);
      myCube.print((i++) % 9, DEC);
      myCube.display();
      delay(250);
      break;
    case 2:
      myCube.clear();
      for (int i = 8 ; i > 0 ; i--)
      {
        myCube.setDepth(3);
        myCube.drawPixel(3, y[i] , color[i]);
        myCube.setDepth(6);
        myCube.drawPixel(5, y[i] + 1 , color[i]);
        myCube.setDepth(8);
        myCube.drawPixel(1, y[i] + 1 , color[i]);
        myCube.setDepth(2);
        myCube.drawPixel(6, y[i] , color[i]);
        myCube.display();
        delay(500);
      }
      break;

    case 3:
      myCube.clear();
      for (int y = 8 ; y > 0 ; y--)
      {
        myCube.setDepth(3);
        myCube.drawCircle( 2, y, 1, 12458);
        delay(250);
        myCube.display();
      }
      for (int y = 0 ; y < 8 ; y++)
      {
        myCube.setDepth(1);
        myCube.drawCircle( 5, y, 1, 32000);
        delay(250);
        myCube.display();
      }
      break;
    case 4:
      myCube.clear();
      for (int i = 0; i < 6 ; i++)
      {
        myCube.setDepth(i);
        myCube.drawRect( x0[i], 2, 4, 4, color[i]);
        //myCube.drawChar(0, 0, 89, 65535, 0, 1);
        myCube.display();
        delay(250);
      } break;
    case 5:
      myCube.clear();
      for (int i = 0 ; i < 5; i++)
      {
        myCube.setCursor(0, 0);
        myCube.setTextColor(65535, 0);
        myCube.setTextSize(1);
        myCube.print(i);
        myCube.display();
      }

      break;

  }
}
