
// led pins
const int led_pin_0 = 0;
const int led_pin_1 = 1;
const int led_pin_2 = 2;
const int led_pin_3 = 3;
const int led_pin_4 = 4;
const int led_pin_5 = 5;
const int led_pin_6 = 6;
const int led_pin_7 = 7;
const int led_pin_8 = 8;
const int led_pin_9 = 9;
const int led_pin_10 = 10;
const int led_pin_11 = 11;
const int led_pin_12 = 12;
const int led_pin_13 = 13;
const int led_pin_14 = A0;
const int led_pin_15 = A1;
const int led_pin_cathode_1 = A2;



const int led_pin_cathode_1_volt = 255;
const int delay_ms  = 1000;


//
//// cathode analogue pin
//const int cathode_l0_pin = 2;

void setup()
{
    // setup write on led-pins
    pinMode(led_pin_0, OUTPUT);
    pinMode(led_pin_1, OUTPUT);
    pinMode(led_pin_2, OUTPUT);
    pinMode(led_pin_3, OUTPUT);
    pinMode(led_pin_4, OUTPUT);
    pinMode(led_pin_5, OUTPUT);
    pinMode(led_pin_6, OUTPUT);
    pinMode(led_pin_7, OUTPUT);
    pinMode(led_pin_8, OUTPUT);
    pinMode(led_pin_9, OUTPUT);
    pinMode(led_pin_10, OUTPUT);
    pinMode(led_pin_11, OUTPUT);
    pinMode(led_pin_12, OUTPUT);
    pinMode(led_pin_13, OUTPUT);
    pinMode(led_pin_14, OUTPUT);
    pinMode(led_pin_15, OUTPUT);
   

    pinMode(led_pin_cathode_1, OUTPUT);
    digitalWrite(led_pin_0, HIGH); 
    digitalWrite(led_pin_1, HIGH);
    digitalWrite(led_pin_2, HIGH);
    digitalWrite(led_pin_3, HIGH);
    digitalWrite(led_pin_4, HIGH);
    digitalWrite(led_pin_5, HIGH);
    digitalWrite(led_pin_6, HIGH);
    digitalWrite(led_pin_7, HIGH);
    digitalWrite(led_pin_8, HIGH);
    digitalWrite(led_pin_9, HIGH);
    digitalWrite(led_pin_10, HIGH);
    digitalWrite(led_pin_11, HIGH);
    digitalWrite(led_pin_12, HIGH);
    digitalWrite(led_pin_13, HIGH);
    digitalWrite(led_pin_14, HIGH);
    digitalWrite(led_pin_15, HIGH);
       
        
   
}
                
void loop()
{
      digitalWrite(led_pin_cathode_1, led_pin_cathode_1_volt);
      delay(delay_ms);
      digitalWrite(led_pin_cathode_1, 0);
      delay(delay_ms);
   
        
    
  

//      digitalWrite(led_pin_0, HIGH);
//      analogWrite(led_pin_1, analog_volt);
//      delay(delay_ms);
//      analogWrite(led_pin_1, 0);
//      delay(delay_ms);
      
      
//    digitalWrite(led_pin_0, HIGH);
//    digitalWrite(led_pin_1, HIGH);
//    digitalWrite(led_pin_2, HIGH);
//    digitalWrite(led_pin_3, HIGH);
//    
//    analogWrite(cathode_l0_pin, 255);
//    delay(1000);
//    analogWrite(cathode_l0_pin, 0);
  }    
