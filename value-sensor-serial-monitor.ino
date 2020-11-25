const int temp = 0;

int val = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  val = analogRead(temp);
  Serial.println(val);
  delay(250);
}
