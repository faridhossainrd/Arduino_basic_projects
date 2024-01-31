#include "lcd.h"

class Controll{
public:
String data="";
 Controll()
 {
  Serial.begin(9600);
  Serial.println("project successfully run");
  Serial.setTimeout(50);
 }

 void dataloop()
 {
  if(Serial.available()>0)
  {
     data="";
    data=Serial.readString();
  }
  
 }
 

  
};
