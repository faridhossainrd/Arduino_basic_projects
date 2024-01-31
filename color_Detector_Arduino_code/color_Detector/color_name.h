class Color_Nmae{

  public:
  String getColorName="unknown";
	void setRGBValue(byte r,byte g,byte b)
	{
		if(r>200& g<80 & b<80)
   {
    getColorName="Red";
   }
  else if(r<160 & g>130 & b<100)
   {
    getColorName="Green";
   }
    else if(r>200 & g>200 & b<130)
   {
    getColorName="yellow";
   }
    else if(r<90 & g>100 & b>100)
   {
    getColorName="Cyan";
   }
    else if(r<100 & g>90 & b>100)
   {
    getColorName="Blue";
   }
    else if(r<80 & g<60 & b<60)
   {
    getColorName="Black";
   }
   else 
   {
    getColorName="unknown";
   }
		
	}
};
