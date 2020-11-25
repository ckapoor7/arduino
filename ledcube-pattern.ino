const int columnPins[] = {2,3,4,5,6,7,8,9};
const int rowPins[] = {10,11,12,15,16,17,18,19};

int led = 0;
int columnL = 0;
int rowL = 0;

void setup()
{
  for(int i =0; i<8; i++)
  {  
      pinMode(columnPins[i], OUTPUT);
      pinMode(rowPins[i], OUTPUT);
  }
}


void loop()
{
  led = led + 1;
  if(led > 63)
  led = 0;
  
  columnL = led/8;
  rowL = led % 8;
    for(int column = 0; column<8; column ++)
   {
        digitalWrite(columnPins[column], HIGH);
       
         for(int row = 0; row<8; row++)
        {
           if(columnL > column)
          {
             digitalWrite(rowPins[row], HIGH);
          }
           else if( columnL == column && rowL >= row)
          {
            digitalWrite(rowPins[row], HIGH);
          }
           else
          {
            digitalWrite(columnPins[column], LOW);
          }
           
           delayMicroseconds(300);
        digitalWrite(rowPins[row], LOW);
        }
   }
}   
