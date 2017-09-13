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
int pass = 0;

void loop() {
  
   matrix.drawPixel(4,0,colors[pass]);
   matrix.drawPixel(5,0,colors[pass]);  
  
   matrix.drawPixel(6,1,colors[pass]);
   matrix.drawPixel(6,2,colors[pass]);
   
   matrix.drawPixel(7,3,colors[pass]);
   matrix.drawPixel(7,4,colors[pass]);
   
   matrix.drawPixel(6,5,colors[pass]);
   matrix.drawPixel(6,6,colors[pass]);
   
   matrix.drawPixel(5,7,colors[pass]);
   matrix.drawPixel(4,7,colors[pass]);
  
   matrix.drawPixel(3,8,colors[pass]);
   matrix.drawPixel(2,8,colors[pass]);  
  
   matrix.drawPixel(1,9,colors[pass]);
   matrix.drawPixel(1,10,colors[pass]);
   
   matrix.drawPixel(0,11,colors[pass]);
   matrix.drawPixel(0,12,colors[pass]);
   
   matrix.drawPixel(1,13,colors[pass]);
   matrix.drawPixel(1,14,colors[pass]);
   
   matrix.drawPixel(2,15,colors[pass]);
   matrix.drawPixel(3,15,colors[pass]);
  
   matrix.drawPixel(4,16,colors[pass]);
   matrix.drawPixel(5,16,colors[pass]);  
  
   matrix.drawPixel(6,17,colors[pass]);
   matrix.drawPixel(6,18,colors[pass]);
   
   matrix.drawPixel(7,19,colors[pass]);
   matrix.drawPixel(7,20,colors[pass]);
   
   matrix.drawPixel(6,21,colors[pass]);
   matrix.drawPixel(6,22,colors[pass]);
   
   matrix.drawPixel(5,23,colors[pass]);
   matrix.drawPixel(4,23,colors[pass]);
  
   matrix.drawPixel(3,24,colors[pass]);
   matrix.drawPixel(2,24,colors[pass]);  
  
   matrix.drawPixel(1,25,colors[pass]);
   matrix.drawPixel(1,26,colors[pass]);
   
   matrix.drawPixel(0,27,colors[pass]);
   matrix.drawPixel(0,28,colors[pass]);
   
   matrix.drawPixel(1,29,colors[pass]);
   matrix.drawPixel(1,30,colors[pass]);
   
   matrix.drawPixel(2,31,colors[pass]);
   matrix.drawPixel(3,31,colors[pass]);
  
   matrix.show();
   delay(1000);
   pass++;
   
   matrix.drawPixel(4,0,colors[pass]);
   matrix.drawPixel(5,0,colors[pass]);  
  
   matrix.drawPixel(6,1,colors[pass]);
   matrix.drawPixel(6,2,colors[pass]);
   
   matrix.drawPixel(7,3,colors[pass]);
   matrix.drawPixel(7,4,colors[pass]);
   
   matrix.drawPixel(6,5,colors[pass]);
   matrix.drawPixel(6,6,colors[pass]);
   
   matrix.drawPixel(5,7,colors[pass]);
   matrix.drawPixel(4,7,colors[pass]);
  
   matrix.drawPixel(3,8,colors[pass]);
   matrix.drawPixel(2,8,colors[pass]);  
  
   matrix.drawPixel(1,9,colors[pass]);
   matrix.drawPixel(1,10,colors[pass]);
   
   matrix.drawPixel(0,11,colors[pass]);
   matrix.drawPixel(0,12,colors[pass]);
   
   matrix.drawPixel(1,13,colors[pass]);
   matrix.drawPixel(1,14,colors[pass]);
   
   matrix.drawPixel(2,15,colors[pass]);
   matrix.drawPixel(3,15,colors[pass]);
  
   matrix.drawPixel(4,16,colors[pass]);
   matrix.drawPixel(5,16,colors[pass]);  
  
   matrix.drawPixel(6,17,colors[pass]);
   matrix.drawPixel(6,18,colors[pass]);
   
   matrix.drawPixel(7,19,colors[pass]);
   matrix.drawPixel(7,20,colors[pass]);
   
   matrix.drawPixel(6,21,colors[pass]);
   matrix.drawPixel(6,22,colors[pass]);
   
   matrix.drawPixel(5,23,colors[pass]);
   matrix.drawPixel(4,23,colors[pass]);
  
   matrix.drawPixel(3,24,colors[pass]);
   matrix.drawPixel(2,24,colors[pass]);  
  
   matrix.drawPixel(1,25,colors[pass]);
   matrix.drawPixel(1,26,colors[pass]);
   
   matrix.drawPixel(0,27,colors[pass]);
   matrix.drawPixel(0,28,colors[pass]);
   
   matrix.drawPixel(1,29,colors[pass]);
   matrix.drawPixel(1,30,colors[pass]);
   
   matrix.drawPixel(2,31,colors[pass]);
   matrix.drawPixel(3,31,colors[pass]);
   
   
   matrix.show();
   delay(1000);
   pass++;
  
  
   matrix.drawPixel(4,0,colors[pass]);
   matrix.drawPixel(5,0,colors[pass]);  
  
   matrix.drawPixel(6,1,colors[pass]);
   matrix.drawPixel(6,2,colors[pass]);
   
   matrix.drawPixel(7,3,colors[pass]);
   matrix.drawPixel(7,4,colors[pass]);
   
   matrix.drawPixel(6,5,colors[pass]);
   matrix.drawPixel(6,6,colors[pass]);
   
   matrix.drawPixel(5,7,colors[pass]);
   matrix.drawPixel(4,7,colors[pass]);
  
   matrix.drawPixel(3,8,colors[pass]);
   matrix.drawPixel(2,8,colors[pass]);  
  
   matrix.drawPixel(1,9,colors[pass]);
   matrix.drawPixel(1,10,colors[pass]);
   
   matrix.drawPixel(0,11,colors[pass]);
   matrix.drawPixel(0,12,colors[pass]);
   
   matrix.drawPixel(1,13,colors[pass]);
   matrix.drawPixel(1,14,colors[pass]);
   
   matrix.drawPixel(2,15,colors[pass]);
   matrix.drawPixel(3,15,colors[pass]);
  
   matrix.drawPixel(4,16,colors[pass]);
   matrix.drawPixel(5,16,colors[pass]);  
  
   matrix.drawPixel(6,17,colors[pass]);
   matrix.drawPixel(6,18,colors[pass]);
   
   matrix.drawPixel(7,19,colors[pass]);
   matrix.drawPixel(7,20,colors[pass]);
   
   matrix.drawPixel(6,21,colors[pass]);
   matrix.drawPixel(6,22,colors[pass]);
   
   matrix.drawPixel(5,23,colors[pass]);
   matrix.drawPixel(4,23,colors[pass]);
  
   matrix.drawPixel(3,24,colors[pass]);
   matrix.drawPixel(2,24,colors[pass]);  
  
   matrix.drawPixel(1,25,colors[pass]);
   matrix.drawPixel(1,26,colors[pass]);
   
   matrix.drawPixel(0,27,colors[pass]);
   matrix.drawPixel(0,28,colors[pass]);
   
   matrix.drawPixel(1,29,colors[pass]);
   matrix.drawPixel(1,30,colors[pass]);
   
   matrix.drawPixel(2,31,colors[pass]);
   matrix.drawPixel(3,31,colors[pass]);
  
  
   matrix.show();
   delay(1000);
   pass=0;
  
  
  //matrix.fillScreen(colors[pass]);
  //matrix.show();
  //delay(1000);
  //pass++;
  //matrix.fillScreen(colors[pass]);
  //matrix.show();
  //delay(1000);
  //pass++;
  //matrix.fillScreen(colors[pass]);
  //matrix.show();
  //delay(1000);
  //pass=0; 

 
 
  
  //matrix.setCursor(0, 0);
  
 //matrix.drawPixel(0,0,colors[pass]);
 // matrix.drawPixel(1,0,colors[pass]);
 // matrix.drawPixel(2,0,colors[pass]);
  
  //matrix.print(F("A B C D E F G"));
  //if(--x < -36) {
  //  x = matrix.width();
  //  if(++pass >= 3) pass = 0;
  //  matrix.setTextColor(colors[pass]);
  //}

}
