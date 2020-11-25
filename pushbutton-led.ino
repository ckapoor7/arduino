const int LED = 9;
const int BUTTON = 2;
int iteration = 0;


void setup ()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void show_on_serial_port(int iter, int port_2_val)
{
    Serial.print(iter);
    Serial.print("    port-2: ");
    Serial.print(port_2_val);
    Serial.println();
    
    return;
}

void loop ()
{
  int read_port_2 = digitalRead(BUTTON);
  
  iteration = iteration + 1;
  show_on_serial_port(iteration, read_port_2);
  
  if (read_port_2 != LOW) {
      digitalWrite(LED, HIGH);
  }
  else {
      digitalWrite(LED, LOW);
  }

}
