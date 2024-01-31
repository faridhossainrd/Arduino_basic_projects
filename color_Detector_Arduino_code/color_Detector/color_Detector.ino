#include <Wire.h>
#include "Adafruit_TCS34725.h"
#include "color_name.h"

#define commonAnode true

// our RGB -> eye-recognized gamma color
 byte gammatable[256];
 
 byte r;
 byte g;
 byte b;
Color_Nmae colorname;
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

void setup() {
  Serial.begin(9600);
  if (tcs.begin()) {
    Serial.println("Found sensor");
  } else {
    Serial.println("No sensor Found ");
    while (1); // halt!
  }
}
void loop() {
  uint16_t clear, red, green, blue;
  
  tcs.setInterrupt(false);      // turn on LED
  delay(60);  // takes 50ms to read 
  
  tcs.getRawData(&red, &green, &blue, &clear);
  tcs.setInterrupt(true);  // turn off LED
 if(red>255)
 {
  r=255;
 }
 else
 {
   r=red;
 }
 if(green>255)
 {
   g=255;
 }
 else
 {
   g=green;
 }
 if(blue>255)
 {
   b=255;
 }
 else
 {
  b=blue;
 }
  colorname.setRGBValue(r,g,b);
  String myString = String(r);
  String myString1 = String(g);
  String myString2 = String(b);
  String myString3 ="$"+colorname.getColorName+"#"+myString+"#"+myString1+"#"+myString2+"#*";
  Serial.print(myString3);
}
