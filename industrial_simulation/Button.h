class Button{

 
public:
void init(uint8_t* b,uint8_t i)
{
  while(i--)
  {
    pinMode(*b++,INPUT);
  }
}
void init(uint8_t b)
{
    pinMode(b,INPUT);
} 
 bool press_down(uint8_t d)
 {
   if(digitalRead(d)>0)
   {
    int i=0;
    delay(250);
    return true;
    
   }
   else
   {
    return false;
   }
   
 }
 bool press_up(uint8_t u)
 {
 if(digitalRead(u)>0)
   {
    
    while(digitalRead(u)!=0);
    return true;
    
   }
   else
   {
    return false;
   }
  
 }
 bool press_hold_P(uint8_t h)
 {
   if(digitalRead(h)>0)
   {
    return true;
   }
   else
    return false;
 }
  bool press_hold_N(uint8_t h)
 {
   if(digitalRead(h)==1)
   {
    return true;
   }
   else
    return false;
 }


};