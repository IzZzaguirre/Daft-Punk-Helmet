//#include <Adafruit_NeoPixel.h>

//#include <Adafruit_NeoPixel.h>

// Adafruit_NeoMatrix example for single NeoPixel Shield.
// Scrolls 'Howdy' across the matrix in a portrait (vertical) orientation.

#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#ifndef PSTR
#define PSTR // Make Arduino Due happy
#endif

#define PIN 6

// MATRIX DECLARATION:
// Parameter 1 = width of NeoPixel matrix
// Parameter 2 = height of matrix
// Parameter 3 = pin number (most are valid)
// Parameter 4 = matrix layout flags, add together as needed:
//   NEO_MATRIX_TOP, NEO_MATRIX_BOTTOM, NEO_MATRIX_LEFT, NEO_MATRIX_RIGHT:
//     Position of the FIRST LED in the matrix; pick two, e.g.
//     NEO_MATRIX_TOP + NEO_MATRIX_LEFT for the top-left corner.
//   NEO_MATRIX_ROWS, NEO_MATRIX_COLUMNS: LEDs are arranged in horizontal
//     rows or in vertical columns, respectively; pick one or the other.
//   NEO_MATRIX_PROGRESSIVE, NEO_MATRIX_ZIGZAG: all rows/columns proceed
//     in the same order, or alternate lines reverse direction; pick one.
//   See example below for these values in action.
// Parameter 5 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)


// Example for NeoPixel Shield.  In this application we'd like to use it
// as a 5x8 tall matrix, with the USB port positioned at the top of the
// Arduino.  When held that way, the first pixel is at the top right, and
// lines are arranged in columns, progressive order.  The shield uses
// 800 KHz (v2) pixels that expect GRB color data.
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(8, 32, PIN,
  NEO_MATRIX_TOP     + NEO_MATRIX_RIGHT +
  NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG,
  NEO_GRB            + NEO_KHZ800);

const uint16_t colors[] = {
  matrix.Color(255, 0, 0), matrix.Color(0, 255, 0), matrix.Color(0, 0, 255) };

void setup() {
  matrix.begin();
  matrix.setTextWrap(false);
  matrix.setBrightness(40);
  matrix.setTextColor(colors[0]);
}

int x    = matrix.width();
int pass=0;

void loop() {
  sineWaveRotateRight(100,5);
  pass++;
  sineWaveRotateRight(100,1);
  pass++;
  sineWaveRotateRight(100,1);
  pass=0;
  
  sineWaveRotateLeft(10,1);
  pass++;
  sineWaveRotateLeft(10,1);
  pass++;
  sineWaveRotateLeft(10,1);
  pass=0;
  //clearScreen(1000);


  
  
  
//sineWave();
//matrix.show();
//delay(1000);
//
//matrix.fillScreen(0);

//sineWave2();
//matrix.show();
//delay(1000);
//
//matrix.fillScreen(0);
}



void sineWaveRotateRight(int rotateDelay,int iterations){
  
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

setColumn(c0,0);
setColumn(c1,1);
setColumn(c2,2);
setColumn(c3,3);
setColumn(c4,4);
setColumn(c5,5);
setColumn(c6,6);
setColumn(c7,7);
setColumn(c8,8);
setColumn(c9,9);
setColumn(c10,10);
setColumn(c11,11);
setColumn(c12,12);
setColumn(c13,13);
setColumn(c14,14);
setColumn(c15,15);
setColumn(c16,16);
setColumn(c17,17);
setColumn(c18,18);
setColumn(c19,19);
setColumn(c20,20);
setColumn(c21,21);
setColumn(c22,22);
setColumn(c23,23);
setColumn(c24,24);
setColumn(c25,25);
setColumn(c26,26);
setColumn(c27,27);
setColumn(c28,28);
setColumn(c29,29);
setColumn(c30,30);
setColumn(c31,31);

matrix.show();
matrix.fillScreen(0);

for(int l=0;l<iterations;l++){ 
for(int k=0;k<32;k++){


temp=c31;
c31=c30;
c30=c29;
c29=c28;
c28=c27;
c27=c26;
c26=c25;
c25=c24;
c24=c23;
c23=c22;
c22=c21;
c21=c20;
c20=c19;
c19=c18;
c18=c17;
c17=c16;
c16=c15;
c15=c14;
c14=c13;
c13=c12;
c12=c11;
c11=c10;
c10=c9;
c9=c8;
c8=c7;
c7=c6;
c6=c5;
c5=c4;
c4=c3;
c3=c2;
c2=c1;
c1=c0;
c0=temp;

setColumn(c0,0);
setColumn(c1,1);
setColumn(c2,2);
setColumn(c3,3);
setColumn(c4,4);
setColumn(c5,5);
setColumn(c6,6);
setColumn(c7,7);
setColumn(c8,8);
setColumn(c9,9);
setColumn(c10,10);
setColumn(c11,11);
setColumn(c12,12);
setColumn(c13,13);
setColumn(c14,14);
setColumn(c15,15);
setColumn(c16,16);
setColumn(c17,17);
setColumn(c18,18);
setColumn(c19,19);
setColumn(c20,20);
setColumn(c21,21);
setColumn(c22,22);
setColumn(c23,23);
setColumn(c24,24);
setColumn(c25,25);
setColumn(c26,26);
setColumn(c27,27);
setColumn(c28,28);
setColumn(c29,29);
setColumn(c30,30);
setColumn(c31,31);

matrix.show();
delay(rotateDelay);
matrix.fillScreen(0);
}}}







































void sineWaveRotateLeft(int rotateDelay,int iterations){
  
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

setColumn(c0,0);
setColumn(c1,1);
setColumn(c2,2);
setColumn(c3,3);
setColumn(c4,4);
setColumn(c5,5);
setColumn(c6,6);
setColumn(c7,7);
setColumn(c8,8);
setColumn(c9,9);
setColumn(c10,10);
setColumn(c11,11);
setColumn(c12,12);
setColumn(c13,13);
setColumn(c14,14);
setColumn(c15,15);
setColumn(c16,16);
setColumn(c17,17);
setColumn(c18,18);
setColumn(c19,19);
setColumn(c20,20);
setColumn(c21,21);
setColumn(c22,22);
setColumn(c23,23);
setColumn(c24,24);
setColumn(c25,25);
setColumn(c26,26);
setColumn(c27,27);
setColumn(c28,28);
setColumn(c29,29);
setColumn(c30,30);
setColumn(c31,31);

matrix.show();
matrix.fillScreen(0);

for(int l=0;l<iterations;l++){ 
for(int k=0;k<32;k++){


temp=c0;
c0=c1;
c1=c2;
c2=c3;
c3=c4;
c4=c5;
c5=c6;
c6=c7;
c7=c8;
c8=c9;
c9=c10;
c10=c11;
c11=c12;
c12=c13;
c13=c14;
c14=c15;
c15=c16;
c16=c17;
c17=c18;
c18=c19;
c19=c20;
c20=c21;
c21=c22;
c22=c23;
c23=c24;
c24=c25;
c25=c26;
c26=c27;
c27=c28;
c28=c29;
c29=c30;
c30=c31;
c31=temp;

setColumn(c0,0);
setColumn(c1,1);
setColumn(c2,2);
setColumn(c3,3);
setColumn(c4,4);
setColumn(c5,5);
setColumn(c6,6);
setColumn(c7,7);
setColumn(c8,8);
setColumn(c9,9);
setColumn(c10,10);
setColumn(c11,11);
setColumn(c12,12);
setColumn(c13,13);
setColumn(c14,14);
setColumn(c15,15);
setColumn(c16,16);
setColumn(c17,17);
setColumn(c18,18);
setColumn(c19,19);
setColumn(c20,20);
setColumn(c21,21);
setColumn(c22,22);
setColumn(c23,23);
setColumn(c24,24);
setColumn(c25,25);
setColumn(c26,26);
setColumn(c27,27);
setColumn(c28,28);
setColumn(c29,29);
setColumn(c30,30);
setColumn(c31,31);

matrix.show();
delay(rotateDelay);
matrix.fillScreen(0);
}}}






































































void setColumn(byte Value,int Column){
  for(int i=0;i<8;i++){
  if (bitRead(Value,i)){
  matrix.drawPixel(i,Column,colors[pass]);
  //matrix.show();
  }
  } 
}

void setRow(int Value,int Row){
  for(int j=0;j<32;j++){
  if(bitRead(Value,j)){
  matrix.drawPixel(Row,j,colors[pass]);
  //matrix.show();
  }  
  }
}



void clearScreen(int clearDelay){
  matrix.fillScreen(0);
  matrix.show();
  delay(clearDelay); 
}













































