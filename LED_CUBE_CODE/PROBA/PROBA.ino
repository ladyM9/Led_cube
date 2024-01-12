#include "GFX_LED_Cube.h"
//#include <Adafruit_GFX.h>
LEDCube myCube;
//void drawRect(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint16_t color);
uint16_t x0[] = {0, 1, 2, 3, 4, 5, 6};
uint16_t y[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
char slova[5] = {'F', 'E', 'R', 'I', 'T'};
char slova_2[8] = {'L', 'E', 'D', '_', 'C', 'U', 'B', 'E'};
uint16_t linijax[5] = {0,2,4,6,8};
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
    if (pattern > 10)  //ako su animacije odnosno caseovi došli do kraja postavi pattern na 0 i kreni ispočetka
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
    case 0:  //ispisivanje teksta LED_CUBE
      myCube.clear();
      for (int i = 0 ; i < 8 ; i++)
      {
        myCube.setCursor(0, 0);
        myCube.setDepth(7);      //PODEŠAVANJE Z OSI
        myCube.setPlane(1);       //PODEŠAVANJE STRANICE NA KOJOJ ŽELIM DA MI SE NEŠTO ISPISUJE NA LED KOCKI
        myCube.setTextColor(65535, 0);
        myCube.setTextSize(1);
        myCube.print(slova_2[i]);
        myCube.display();
        delay(500);
      }
      break;

    case 1:  //iscrtavanje krugova

      myCube.clear();
      for (int i = 0 ; i < 7 ; i++)
      {
        myCube.setPlane(0);
        myCube.setDepth(0);
        myCube.drawCircle(x0[i] , 3, 1, 30000);
        //myCube.drawPixel_3(5, 0 , 1256);
        myCube.display();
        delay(500);
      }
      for (int i = 0 ; i < 7 ; i++)
      {
        myCube.setPlane(1);
        myCube.setDepth(7);
        myCube.drawCircle(x0[i] , 3, 1, 12589);
        //myCube.drawPixel_3(5, 0 , 1256);
        myCube.display();
        delay(500);
      }
      break;
    case 2:
      myCube.clear();
      for (int i = 8 ; i > 0 ; i--)
      {
        myCube.setPlane(0);
        myCube.setDepth(3);
        myCube.drawPixel(3, y[i] , color[i]);
        myCube.setDepth(6);
        myCube.drawPixel(5, y[i] + 1 , color[i]);
        myCube.setDepth(8);
        myCube.drawPixel(1, y[i] + 1 , color[i]);
        myCube.setDepth(2);
        myCube.drawPixel(6, y[i] , color[i]);
        myCube.setDepth(1);
        myCube.drawPixel(0, y[i] , color[i]);
        myCube.display();
        delay(200);
      }
      for (int i = 0 ; i < 8 ; i++)
      {
        myCube.setPlane(0);
        myCube.setDepth(4);
        myCube.drawPixel(0, y[i] , 22500);
        myCube.setDepth(0);
        myCube.drawPixel(8, y[i]  , 41000);
        myCube.setDepth(7);
        myCube.drawPixel(5, y[i]  , 5289);
        myCube.display();
        delay(200);
      }
      break;

    case 3:
      myCube.clear();
      myCube.setPlane(0);
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
        myCube.drawCircle( 5, y, 1, 42158);
        delay(250);
        myCube.display();
      }
      for (int y = 0 ; y < 8 ; y++)
      {
        myCube.setDepth(7);
        myCube.drawCircle( 3, y, 1, 20000);
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
        myCube.setDepth(0);
        myCube.setTextColor(65535, 0);
        myCube.setTextSize(1);
        myCube.print(slova[i]);
        myCube.display();
        delay(250);
      } break;
    case 6:
      myCube.clear();
      myCube.setCursor(1, 0);
      myCube.setDepth(i % 8);
      myCube.print((i++) % 9, DEC);
      myCube.display();
      delay(250);
      break;

    case 7:
      myCube.clear();
      for (int i = 0; i < 8 ; i++)
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
      }
      for (int i = 0; i < 8 ; i++)
      {
        myCube.setDepth(i);
        myCube.drawPixel(x0[i], 0, color[i]);
        myCube.display();
        delay(250);
      } break;
    case 8:
      myCube.clear();
      for (int i = 0; i < 7 ; i++)
      {
        myCube.setDepth(i);
        myCube.drawFastVLine(x0[i], y[i], 4, 4587);
        myCube.display();
        delay(250);

      } break;
    case 9:
      myCube.clear();
      for (int i = 0 ; i < 7 ; i++)
      {
        myCube.setDepth(i);
        myCube.fillScreen(12589);
        myCube.display();
        delay(250);

      } break;
    case 10:
      myCube.clear();
      for(int i = 0 ; i < 7 ; i++)
      { 
      myCube.setDepth(i);
      myCube.drawFastVLine(linijax[i], 0, 8, color[i]);
      myCube.display();
      delay(250);
      }
      break;
  }
}
