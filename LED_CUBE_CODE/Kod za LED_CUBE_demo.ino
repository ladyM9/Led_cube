#include "GFX_LED_Cube.h"
#include <Adafruit_NeoPixel.h>
//#include <Adafruit_GFX.h>
LEDCube myCube;
uint16_t x0[] = {0, 1, 2, 3, 4, 5, 6};
uint16_t y[] = {0, 1, 2, 3, 4, 5, 6, 7};
uint16_t X[] = {0, 3, 5, 7};
uint16_t Y[] = {0, 3, 5, 7};
uint16_t D[] = {0, 1, 2, 3, 4, 5, 6, 7};
char slova[5] = {'F', 'E', 'R', 'I', 'T'};
char slova_2[8] = {'L', 'E', 'D', '_', 'C', 'U', 'B', 'E'};
uint16_t linijax[5] = {0, 2, 4, 6, 8};
uint16_t pinovi[] = {PB0, PB9, PB8};
uint16_t color[] = {12555, 22587, 29857, 35214, 48975, 60000, 18000, 7841};
unsigned long previousMillis = 0;
const long interval = 1000;
const long interval2 = 10000;
#define BRIGHTNESS 25

Adafruit_NeoPixel strip(64, PB0, NEO_GRBW + NEO_KHZ800);




unsigned long change_Timer = 0;
int pattern = 0;
unsigned long TIMER_CHANGE_INTERVAL = 5000;
void setup() {


  myCube.begin();
  strip.setBrightness(BRIGHTNESS);

}
int i = 0;
void loop() {
  upadate_Animacije(pattern);  //pozivanje funkcije unutar koje su animacije za prikaz na led kocki
  
  if ((unsigned long)(millis() - change_Timer) >= TIMER_CHANGE_INTERVAL)  ///ako je  razlika vremena otkad je upaljen mikroupravljač i vremena promjene vremena veća od promjene intervala učini sljedeće
  {
    change_Timer = millis();  //varijabli za promjenu timera priduži millis odnosno milisekunde odnosno kreni brojati
    pattern++;  //pattern je ustvari _p iz funkcije za promjenu animacije, pomoću _p odnosno pattern odabire se case tj animacija
    if (pattern > 12)  //ako su animacije odnosno caseovi došli do kraja postavi pattern na 0 i kreni ispočetka
    {
      pattern = 0;
    }
  }



  return;
}

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
        myCube.setTextColor(1258, 0);
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
        myCube.drawCircle(x0[i] , 3, 1, 2587);
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
      for (int i = 7 ; i >= 0 ; i--)
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
        myCube.setDepth(5);
        myCube.drawPixel(3, y[i]  , 41000);
        myCube.setDepth(7);
        myCube.drawPixel(5, y[i]  , 5289);
        myCube.setDepth(1);
        myCube.drawPixel(4, y[i]  , 5289);
        myCube.display();
        delay(200);
      }
      break;

    case 3:
      myCube.clear();
      myCube.setPlane(0);
      for (int y = 7 ; y >= 0 ; y--)
      {

        myCube.setDepth(3);
        myCube.drawCircle( 2, y, 1, 12458);
        delay(250);
        myCube.display();
      }
      for (int y = 0 ; y < 8 ; y++)
      {
        myCube.setDepth(1);
        myCube.drawCircle( 5, y, 1, 49875);
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
      for (int i = 0; i <= 7 ; i++)
      {
        myCube.setDepth(i);
        myCube.drawPixel(x0[i], y[i], color[i]);
        myCube.display();
        delay(250);
      }
      for (int i = 8; i >= 0 ; i--)
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
      for (int i = 0 ; i < 8 ; i++)
      {
        myCube.setDepth(i);
        myCube.fillScreen(12589);
        myCube.display();
        delay(250);

      } break;
    case 10:
      myCube.clear();
      myCube.setPlane(0);
      myCube.setDepth(5);
      myCube.drawTriangle(1, 8, 8, 8, 5, 2, 3258);
      myCube.setDepth(2);
      myCube.drawTriangle(0, 8, 8, 8, 4, 2, 25879);
      myCube.display();
      delay(250);
      break;
    case 11:
      myCube.clear();
      for (int i = 0 ; i < 8 ; i++)
      {
        myCube.setPlane(0);
        myCube.setDepth(i);
        myCube.fillScreen(color[i]);
        myCube.display();
        delay(250);

      }break;

  }
}
