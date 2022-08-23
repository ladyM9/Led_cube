#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#ifndef PSTR
#define PSTR // Make Arduino Due happy
#endif

#define PIN1 PB0
#define PIN2 PB9
#define PIN3 PB8

int j = 0;
Adafruit_NeoMatrix matrix1 = Adafruit_NeoMatrix(8, 8, PIN1,
                             8    + 8 +
                             8 + NEO_MATRIX_ZIGZAG,
                             NEO_GRB            + NEO_KHZ800);

Adafruit_NeoMatrix matrix2 = Adafruit_NeoMatrix(8, 8, PIN2,
                             65     + 8 +
                             8 + NEO_MATRIX_ZIGZAG,
                             NEO_GRB            + NEO_KHZ800);


Adafruit_NeoMatrix matrix3 = Adafruit_NeoMatrix(8, 8, PIN3,
                             NEO_MATRIX_TOP     + NEO_MATRIX_RIGHT +
                             NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG,
                             NEO_GRB            + NEO_KHZ800);

Adafruit_NeoMatrix matrix[] = {matrix1, matrix2, matrix3};


const uint16_t colors[] = {
  (matrix1.Color(255, 0, 0), matrix1.Color(0, 255, 0), matrix1.Color(0, 0, 255)),
  (matrix2.Color(255, 0, 0), matrix2.Color(0, 255, 0), matrix2.Color(0, 0, 255)),
  (matrix3.Color(255, 0, 0), matrix3.Color(0, 255, 0), matrix3.Color(0, 0, 255))
};

void setup() {
  int j = 0;
  for (int i = 0 ; i < 3 ; i++) {
    for ( j ; j < 2 ; j++) {
      matrix[i].begin();
      matrix[i].setTextWrap(false);
      matrix[i].setBrightness(15);
      matrix[i].setTextColor(colors[j]);
    }
  }

}

void loop() {

  for (int i = 0; i < 3 ; i++) {
    for ( j ; j < 2 ; j++) {
      int x    = matrix[i].width();
      int pass = 0;
      matrix[i].fillScreen(colors[j]);
      matrix[i].setCursor(0, 0);
      matrix[i].print(F("Howdy"));

      delay(100);
      matrix[i].clear();
      matrix[i].fillScreen(colors[j+1]);
      matrix[i].show();

      //      if (--x < -36) {
      //        x = matrix[i].width();
      //        if (++pass >= 3) pass = 0;
      //        matrix[i].setTextColor(colors[j]);
      //      } j++;
    }
  
    //delay(100);
    //matrix[i].clear();
  }
}
