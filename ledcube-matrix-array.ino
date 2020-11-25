const int columnPins[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
const int layerPin[] = {16,17,18,19};
int led [4][4] = {
                    {0,1,2,3},
                    {7,6,5,4},
                    {11,10,9,8},
                    {15,14,13,12},
                  };

void setup()
{
  for(int i = 0; i < 16; i++)
  {
    pinMode(columnPins[i], OUTPUT); 
    pinMode(layerPin[i], OUTPUT);
  }
}

void loop()
{
  /*for(int i = 0; i<=3; i++)
  {
      for(int j = 0; j<=3; j++)
      {*/
               
        light_location(3,0);
        
      
      
  

}

   
void light_location (int x, int y)
{  
  
 
     digitalWrite(columnPins[led[x][y]], HIGH);
     delay(60);
     digitalWrite(columnPins[led[x][y]], LOW);
     
   }
