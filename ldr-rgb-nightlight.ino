const int bled = 10;
const int ldr = 0;
const int min_val = 36;
const int max_val = 850;
int val = 0;

void setup()
{
  pinMode(bled, OUTPUT);
}

void loop()
{
  val = analogRead(ldr);
  val = map (val, min_val, max_val, 0, 255);
  val = constrain(val, 0, 255);
  analogWrite (bled, val);
}
