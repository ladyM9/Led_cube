#include "GFX_LED_Cube.h"
LEDCube myCube;

void setup() {
  // put your setup code here, to run once:
  myCube.begin();
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
}
//slovo I
//  myCube.begin();
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 0, 12535);
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 2, 32568);
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 1 , 65535);
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 3 , 65535);
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 4 , 65535);
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 5 , 65535);
//
//  myCube.display();

//slovo u
// myCube.begin();
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 0, 12535);
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 2, 32568);
//  //  myCube.setDepth(1);
//  //  myCube.drawPixel(1, 1 , 65535);
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 3 , 65535);
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 4 , 65535);
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 5 , 65535);
//  myCube.setDepth(2);
//  myCube.drawPixel(2, 1 , 65535);
//  myCube.setDepth(3);
//  myCube.drawPixel(3, 1 , 65535);
//  myCube.setDepth(3);
//  myCube.drawPixel(4, 0 , 65535);
//  myCube.setDepth(3);
//  myCube.drawPixel(4, 2 , 65535);
//  myCube.setDepth(3);
//  myCube.drawPixel(4, 3 , 65535);
//  myCube.setDepth(3);
//  myCube.drawPixel(4, 4 , 65535);
//  myCube.setDepth(3);
//  myCube.drawPixel(4, 5 , 65535);


//slovo O
// myCube.setDepth(1);
//  myCube.drawPixel(1, 0, 12535);
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 2, 32568);
//  //  myCube.setDepth(1);
//  //  myCube.drawPixel(1, 1 , 65535);
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 3 , 65535);
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 4 , 65535);
//  myCube.setDepth(1);
//  myCube.drawPixel(2, 5 , 65535);
//  myCube.setDepth(2);
//  myCube.drawPixel(2, 1 , 65535);
//  myCube.setDepth(3);
//  myCube.drawPixel(3, 1 , 65535);
//  myCube.setDepth(3);
//  myCube.drawPixel(4, 0 , 65535);
//  myCube.setDepth(3);
//  myCube.drawPixel(4, 2 , 65535);
//  myCube.setDepth(3);
//  myCube.drawPixel(4, 3 , 65535);
//  myCube.setDepth(3);
//  myCube.drawPixel(4, 4 , 65535);
//  myCube.setDepth(3);
//  myCube.drawPixel(3, 5 , 65535);
//  myCube.setDepth(2);
//  myCube.drawPixel(2, 5 , 65535);

//slovo E

////Vodoravna linija od slova E
//myCube.setDepth(1);
//myCube.drawPixel(1, 0, 12535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 2, 32568);
//myCube.setDepth(1);
//myCube.drawPixel(1, 1 , 65535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 3 , 65535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 4 , 65535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 5 , 65535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 6 , 65535);
//
////donja linija od slova E
//myCube.setDepth(2);
//myCube.drawPixel(2, 1, 12535);
//myCube.setDepth(3);
//myCube.drawPixel(3, 1, 12535);
//myCube.setDepth(4);
//myCube.drawPixel(4, 1, 12535);
//myCube.setDepth(5);
//myCube.drawPixel(5, 1, 12535);
//
//
////srednja linija od slova E
//myCube.setDepth(2);
//myCube.drawPixel(1, 3, 12535);
//myCube.setDepth(3);
//myCube.drawPixel(2, 3, 535);
//myCube.setDepth(4);
//myCube.drawPixel(3, 3, 22535);
//myCube.setDepth(5);
//myCube.drawPixel(4, 3, 35697);
//
////gornja linija od slova E
//myCube.setDepth(2);
//myCube.drawPixel(1, 6, 32535);
//myCube.setDepth(3);
//myCube.drawPixel(2, 6, 8535);
//myCube.setDepth(4);
//myCube.drawPixel(3, 6, 22535);
//myCube.setDepth(5);
//myCube.drawPixel(4, 6, 50000);
//myCube.setDepth(6);
//myCube.drawPixel(5, 6, 41258);


///slovo A
//myCube.setDepth(2);
//myCube.drawPixel(1, 3 , 65535);
//myCube.setDepth(2);
//myCube.drawPixel(1, 2 , 65535);
//myCube.setDepth(2);
//myCube.drawPixel(1, 1 , 65535);
//myCube.setDepth(2);
//myCube.drawPixel(1, 0 , 12586);
//myCube.setDepth(3);
//myCube.drawPixel(1, 4 , 24789);
//myCube.setDepth(4);
//myCube.drawPixel(2, 4 , 65535);
//myCube.setDepth(4);
//myCube.drawPixel(3, 3 , 65535);
//myCube.setDepth(4);
//myCube.drawPixel(3, 2 , 31458);
//myCube.setDepth(4);
//myCube.drawPixel(3, 1 , 65535);
//myCube.setDepth(4);
//myCube.drawPixel(3, 0 , 65535);
//
////vrh na slovu A
//myCube.setDepth(3);
//myCube.drawPixel(2, 5 , 65535);
//
////srednja linija na slovu A
//myCube.setDepth(3);
//myCube.drawPixel(1, 2 , 65535);
//myCube.setDepth(4);
//myCube.drawPixel(2, 2 , 65535);
//myCube.setDepth(4);
//myCube.drawPixel(1, 2 , 65535);

//Slovo D
//myCube.setDepth(1);
//myCube.drawPixel(1, 0, 12535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 2, 32568);
//myCube.setDepth(1);
//myCube.drawPixel(1, 1 , 65535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 3 , 65535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 4 , 65535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 5 , 65535);
//myCube.setDepth(2);
//myCube.drawPixel(2, 5 , 65535);
//myCube.setDepth(3);
//myCube.drawPixel(3, 5 , 65535);
//myCube.setDepth(3);
//myCube.drawPixel(4, 4 , 65535);
//myCube.setDepth(3);
//myCube.drawPixel(4, 3 , 65535);
//myCube.setDepth(3);
//myCube.drawPixel(4, 2 , 65535);
//myCube.setDepth(1);
//myCube.drawPixel(2, 1 , 65535);
//myCube.setDepth(2);
//myCube.drawPixel(3, 1 , 65535);
//myCube.setDepth(3);
//myCube.drawPixel(4, 0 , 65535);

///slovo C
// myCube.setDepth(1);
//  myCube.drawPixel(1, 2, 32568);
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 3 , 65535);
//  myCube.setDepth(1);
//  myCube.drawPixel(1, 4 , 65535);
//  myCube.setDepth(2);
//  myCube.drawPixel(1, 5 , 65535);
//  myCube.setDepth(3);
//  myCube.drawPixel(2, 5 , 65535);
//  myCube.setDepth(3);
//  myCube.drawPixel(2, 0 , 65535);
//  myCube.setDepth(2);
//  myCube.drawPixel(1, 0 , 65535);


///slovo L
//myCube.setDepth(1);
//myCube.drawPixel(1, 0, 12535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 2, 32568);
//myCube.setDepth(1);
//myCube.drawPixel(1, 1 , 65535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 3 , 52138);
//myCube.setDepth(1);
//myCube.drawPixel(1, 4 , 65535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 5 , 789);
//myCube.setDepth(1);
//myCube.drawPixel(1, 6 , 65535);
//myCube.setDepth(2);
//myCube.drawPixel(2, 1 , 28741);
//myCube.setDepth(3);
//myCube.drawPixel(3, 1 , 65535);
//myCube.setDepth(4);
//myCube.drawPixel(4, 1 , 47891);
//myCube.setDepth(5);
//myCube.drawPixel(5, 1 , 65535);

///Slovo N
//myCube.setDepth(1);
//myCube.drawPixel(1, 0, 12535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 2, 32568);
//myCube.setDepth(1);
//myCube.drawPixel(1, 1 , 65535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 3 , 52138);
//myCube.setDepth(1);
//myCube.drawPixel(1, 4 , 65535);
//myCube.setDepth(1);
//myCube.drawPixel(1, 5 , 789);
//myCube.setDepth(1);
//myCube.drawPixel(1, 6 , 65535);
//myCube.setDepth(2);
//myCube.drawPixel(1, 5 , 65535);
//myCube.setDepth(2);
//myCube.drawPixel(2, 4 , 65535);
//myCube.setDepth(2);
//myCube.drawPixel(3, 3 , 65535);
//myCube.setDepth(2);
//myCube.drawPixel(4, 2 , 65535);
//myCube.setDepth(2);
//myCube.drawPixel(5, 0 , 65535);
//
/////Desna linija slova N
//myCube.setDepth(3);
//myCube.drawPixel(6, 0 , 65535);
//myCube.setDepth(3);
//myCube.drawPixel(6, 1 , 65535);
//myCube.setDepth(3);
//myCube.drawPixel(6, 2 , 2800);
//myCube.setDepth(3);
//myCube.drawPixel(6, 3 , 5535);
//myCube.setDepth(3);
//myCube.drawPixel(6, 4 , 17535);
//myCube.setDepth(3);
//myCube.drawPixel(6, 5 , 65535);
//myCube.setDepth(3);
//myCube.drawPixel(6, 6 , 52535);




void loop() {
  // put your main code here, to run repeatedly:

}
