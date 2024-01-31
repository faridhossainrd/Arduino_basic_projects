#include "arr.h"

void setup() {

   Serial.begin(9600);
 sArr<int> mia;
 sArr<String> msa;

 for (size_t i = 0; i < 5; i++)
  {
    mia.add(10);
    msa.add("HELLO!");
  }
  for (size_t i = 0; i < 5; i++)
 {
    Serial.println(mia.get(i));
    Serial.println(msa.get(i));
  }
 // system("PAUSE");

}

void loop() {
  // put your main code here, to run repeatedly:

}
