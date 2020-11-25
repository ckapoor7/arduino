
const int bled = 9;
const int gled = 10;
const int rled = 11;
const int temp = 0;

const int upper = 64;//value input from the sensor
const int lower = 60;

int value = 0;

void setup()
{
  pinMode (bled, OUTPUT);
  pinMode (gled, OUTPUT);
  pinMode (rled, OUTPUT);
}

void loop()
{
   value = analogRead(temp);
   
   
   if (value > upper)
   {
      digitalWrite(bled, LOW);
      digitalWrite(gled, LOW);
      digitalWrite(rled, HIGH);
   }
  
    else if ( value < lower)
   { 
     digitalWrite(bled, HIGH);
     digitalWrite(gled, LOW);
     digitalWrite(rled, LOW);
   }
   
   else
   {
     digitalWrite(bled, LOW);
     digitalWrite(gled, HIGH);
     digitalWrite(rled, LOW);
}
}

