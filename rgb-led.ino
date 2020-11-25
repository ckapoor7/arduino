const int bled = 9;
const int gled = 10;
const int rled = 11;
const int button = 2;

boolean lastButton = LOW;
boolean currentButton = LOW;
int ledMode = 0;

void setup()
{
  pinMode(bled, OUTPUT);
  pinMode(rled, OUTPUT);
  pinMode(gled, OUTPUT);
  
  Serial.begin(9600);
}

void do_serial_port_print(String message, int mode)
{
    Serial.print(message);
    Serial.print(mode);
    Serial.println();
    
    return;
}

// debounce function follows...

boolean debounce (boolean last)
{
  boolean current = digitalRead(button);
  
  if (last != current)
  {
    delay(5);
    current = digitalRead(button);
  }
  
  do_serial_port_print("button: ", current);
    
  return current;
}

// function no.2 for the selection of the leds colour by number.

void setMode (int mode)
{
  do_serial_port_print("mode: ",    mode);
  
  //red
  if (mode == 1)
  {
    digitalWrite(rled, HIGH);
    digitalWrite(bled, LOW);
    digitalWrite(gled, LOW);
  }
  
  if (mode == 2)//blue
  {
    digitalWrite(rled, LOW);
    digitalWrite(bled, HIGH);
    digitalWrite(gled, LOW);
  }
  
  if (mode == 3)//green
  {
    digitalWrite(rled, LOW);
    digitalWrite(bled, LOW);
    digitalWrite(gled, HIGH);
  }
  
  if (mode == 4)//purple (red +blue)
  {
    digitalWrite(rled, HIGH);
    digitalWrite(bled, HIGH);
    digitalWrite(gled, LOW);
  }
  
  if (mode == 5)//teal(blue +green)
  {
    digitalWrite(rled, LOW);
    digitalWrite(bled, HIGH);
    digitalWrite(gled, HIGH);
  }
  
  if (mode == 6)//orange(green+red)
  {
    digitalWrite(rled, HIGH);
    digitalWrite(bled, LOW);
    digitalWrite(gled, HIGH);
  }
  
  if (mode == 7) //white (green + red +blue)
  {
    digitalWrite(rled, HIGH);
    digitalWrite(bled, HIGH);
    digitalWrite(gled, HIGH);
  }
  
  else // led is off
  {
    digitalWrite(rled, LOW);
    digitalWrite(bled, LOW);
    digitalWrite(gled, LOW);
  }
}

void loop()
{
  currentButton = debounce(lastButton);
  
  // if the button is pressed...
  if (lastButton == LOW && currentButton == HIGH) {
    ledMode++;
  }
  
  lastButton = currentButton;
  
  //after all the modes are done reset the mode number to 0
  if (ledMode == 8) {
    ledMode = 0;
  }
    
  
  setMode(ledMode);
}
    
  
