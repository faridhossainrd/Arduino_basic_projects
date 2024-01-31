#include <SoftwareSerial.h>
#include <Wire.h>
SoftwareSerial mySerial(7, 8);   //rx 8 tx 7

void setup() {
 
  Serial.begin(9600);
  mySerial.begin(9600);

}

void loop() {

  if(Serial.available()>0)
  {
     mySerial.write(Serial.read());
  }
 if(mySerial.available()>0)
 {
    Serial.write(mySerial.read());
 }


}
