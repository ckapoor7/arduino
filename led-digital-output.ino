const int LED = 9;  //tells the board that pin 9 is assigned the name 'LED'
void setup ()      {
  pinMode (LED , OUTPUT); //sets pin 9 as the ouptut for the le
}
void loop ()  //nothing to be repeated  
{
  digitalWrite(LED, HIGH);
  delay(60);
  digitalWrite(LED, LOW);
  delay(70);
}
