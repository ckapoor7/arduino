
const int C1 = A2;
int Anodes[4] = {3,0,2,1};

void setup()
{
        pinMode(C1, OUTPUT);
    
        for(int i = 0; i< 4; i++) {
                pinMode(Anodes[i], OUTPUT);
                digitalWrite(Anodes[i], HIGH);
        }
}
  
void loop()
{
  digitalWrite(C1, HIGH);
  delay(2);
  digitalWrite(C1, LOW);
  delay(10);
}
