const int LED = 11; // led is on pin 11
void setup () 
{
  pinMode(LED , OUTPUT); //set the led as an output
}
void loop ()
{
  for (int i=0; i<=255; i++)
  {
    analogWrite(LED, i); // range the pwm output from 0 to 255 
    delay(10); //wait for 10 miliseconds
  }
  for (int i=255; i>0; i--)
  {
    analogWrite(LED, i); // reduce the pwm from 255 to 0
    delay(10); //wait for 10 miliseconds and repeat the whole loop 
  }
}
