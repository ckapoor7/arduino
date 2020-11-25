const int LED = 9;      
const int BUTTON = 2;
boolean lastButton = LOW;//contains the previous button state
boolean currentButton = LOW;//contains the current buuton state
boolean ledOn  = false;  //current state of the led (on/off)
void setup  ()
{
  pinMode(LED, OUTPUT);
}
boolean debounce (boolean last)
{
  boolean current = digitalRead (BUTTON); // reads the button state
  if (last != current) //if its different, then..
  {
    delay(5);  //....stop for 5 miliseconds
    current = digitalRead (BUTTON); //read the value of the button again
  }
  return current;   //return the current value of the button
}
void loop ()
{
  currentButton = debounce (lastButton); //read the debounced state
  if (lastButton == LOW && currentButton == HIGH); //if the button is pressed
  {
    ledOn = !ledOn;  //toggle the led value
  }
  lastButton = currentButton;  //reset the button value
  digitalWrite(LED, ledOn);  //change the state of the led
}
    
