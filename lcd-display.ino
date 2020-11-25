#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);
 int time_elapsed = 0;

void setup()
{
  lcd.begin(16,2);
  lcd.print("Parth paddu");
}
void loop()
{
  lcd.setCursor(12,0);
  lcd.print(time_elapsed);
  delay (1000);
  time_elapsed++;
}
