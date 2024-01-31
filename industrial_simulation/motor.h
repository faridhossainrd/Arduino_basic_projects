#include <Servo.h> 

class servoMotor{

Servo *servo;
public:
servoMotor(const uint8_t* pin)
{
  servo=new Servo[strlen(pin)];

  for(int i=0;i<strlen(pin);i++)
  {
   servo[i].attach(pin[i]);
  }
}

void servoPosition(unsigned int p,uint8_t m)
{
  unsigned int cp=servo[m].read();
  if((p-cp)>0 )
  {
   servo[m].write(cp++);
  }
  else if((p-cp)<0)
  {
      servo[m].write(cp--);
  }
 
}
bool begin(String data)
{
  
}

  
};
