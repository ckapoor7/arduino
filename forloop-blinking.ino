const int LED = 9;
void setup ()  
{
  pinMode (LED, OUTPUT);
}
void loop () 
{
  for (int i = 200 ; i<=5000; i = i+100)
  {
    digitalWrite(LED, HIGH);
    delay (i);
    digitalWrite(LED, LOW);
    delay (i);
  }
}
