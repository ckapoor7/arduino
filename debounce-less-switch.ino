const int led = 9;
const int button = 2;
boolean ledstate = false;


void setup()
{
  pinMode(led, OUTPUT);
}
  
void loop()
{
  if (digitalRead(button) == HIGH)
  {
    ledstate = !ledstate;
    digitalWrite(led, ledstate);
  }
  else
  {
    digitalWrite(led, ledstate);
  }
}
