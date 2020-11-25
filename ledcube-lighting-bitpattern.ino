const int columnPins[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
const int layerPin = 16;

int bit_pattern [][16] = {
  
                            /*{0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0},
                            {1,0,0,1,0,0,1,0,0,0,0,1,0,1,0,1},
                            {1,1,1,1,1,0,0,1,1,0,0,1,1,1,1,1},
                            {0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0},*/
                            
                            /*
                             * light up led's bottom-left to top-right, along the diagonal.
                            **/
                            /* 0-8                     9-15                   */
                            /* 0  1  2  3  4  5  6  7  0  1  2  3  4  5  6  7 */
                            {  0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0  }, // time-step == 0
                            {  0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0  }, // time-step == 1
                            {  0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0  }, // time-step == 2
                            {  1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1  }, // time-step == 3
                            {  0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0  }, // time-step == 4
                            {  0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0  }, // time-step == 5
                            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0  }, // time-step == 6
                            
                            
                        };

void setup()
{
        for (int i = 0; i < 16; i++) { 
                pinMode(columnPins[i], OUTPUT);
        }      
                pinMode(layerPin, OUTPUT);
             
}

void loop()
{
          
          for(int i = 0; i <=6; i++)
          {
                switchonn(i);
                delay(500);
                
       }
       
}

void switchonn (int x)
{
  int *temp_arr = bit_pattern[x];
  
          for(int i = 0; i < 16; i++)
          {
            if(temp_arr[i] == 1)
            {
             digitalWrite(columnPins[i], HIGH);
            }
          }
 /* for(int j = 0; j < 16; j++)
  {
  digitalWrite(columnPins[j], LOW);
  delay(15);
  }*/
  
}
