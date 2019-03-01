 
 
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

#ifndef PSTR 
#define PSTR // Make Arduino Due happy
#endif

#define PIN 6

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(32, 8, PIN,
  NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
  NEO_GRB            + NEO_KHZ800);

const uint16_t colors[] = {
  matrix.Color(255, 0, 0), matrix.Color(0, 255, 0), matrix.Color(0, 0, 255) };
  
void setup() {
  matrix.begin();
  matrix.setTextWrap(true);
  matrix.setBrightness(5);
  matrix.setTextColor(colors[0]);
  
  
clearScreen(1000);
//matrix.fillScreen(0);
//matrix.show();
//delay(1000);
}

//c0-c31 are dedicated to Sinwave subroutines
byte c0=0b00110000;  
byte c1=0b01000000;
byte c2=0b01000000;
byte c3=0b10000000;
byte c4=0b10000000;
byte c5=0b01000000;
byte c6=0b01000000;
byte c7=0b00110000;
byte c8=0b00001100;
byte c9=0b00000010;
byte c10=0b00000010;
byte c11=0b00000001;
byte c12=0b00000001;
byte c13=0b00000010;
byte c14=0b00000010;
byte c15=0b00001100;
byte c16=0b00110000;  
byte c17=0b01000000;
byte c18=0b01000000;
byte c19=0b10000000;
byte c20=0b10000000;
byte c21=0b01000000;
byte c22=0b01000000;
byte c23=0b00110000;
byte c24=0b00001100;
byte c25=0b00000010;
byte c26=0b00000010;
byte c27=0b00000001;
byte c28=0b00000001;
byte c29=0b00000010;
byte c30=0b00000010;
byte c31=0b00001100;

byte temp=0b00000000;
int x    = matrix.width();
int pass=0;

//clearScreen(1000);
//matrix.fillScreen(0);
//matrix.show();

void loop() {

//  matrix.drawPixel(0,0,colors[pass]);
//  matrix.drawPixel(0,1,colors[pass]);
//  matrix.drawPixel(0,2,colors[pass]);
//  matrix.drawPixel(0,3,colors[pass]);
//  matrix.drawPixel(0,4,colors[pass]);
//  matrix.drawPixel(0,5,colors[pass]);
//  matrix.drawPixel(0,6,colors[pass]);
//  matrix.drawPixel(0,7,colors[pass]);

  matrix.fillScreen(colors[2]);  
  matrix.show();
  delay(1000);
}



















void setColumn(int Value,int Column){
//ASSUMING 8 = j
  for(int j=0;j<8;j++){
  if(bitRead(Value,j)){
  matrix.drawPixel(Column,j,colors[pass]);
  matrix.show();
  }  
  }
}

  void clearScreen(int clearDelay){
  matrix.fillScreen(0);
  matrix.show();
  delay(clearDelay); 
}












