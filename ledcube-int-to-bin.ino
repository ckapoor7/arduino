const int columnPins[] = {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
const int layerPin[] =   {16, 17, 18, 19};

int bit_pattern[16]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

void setup()
{
        for (int i = 0; i < 16; i++) {
                pinMode(columnPins[i], OUTPUT);
        }
        
        for (int i = 0; i < 4; i++) {
                pinMode(layerPin[i], OUTPUT);
        }
}

/*
 * this function is called to switchoff all leds. currently we assume that
 * number of leds is 16.
**/
void switchoff_all_leds(void)
{
        for (int i = 0; i < 16; ++i) {
                digitalWrite(columnPins[i], LOW);
        }
        
        return;
}

/*
 * this function is called to switch leds on for bits which are set
 * in the supplied bitmap. it is assumed, that there are 16bits in
 * the bitmap.
**/
void switchon_led_bitmap(int *bm)
{
        for (int j = 0; j < 16; j++) {
                if (bm[j] == 1) {
                        digitalWrite(columnPins[j], HIGH);
                }
        }

        return;
}



/*
 * this function is called to print the bitmap (of 16 bits)
 * on the serial console.
**/
void debug_print_bitmap(int *bm)
{
        Serial.begin(115200);
        for (int i = 0; i < 16; ++i) {
                Serial.print("bm[");
                Serial.print(i);
                Serial.print("]: ");
                Serial.print(bm[i]);
                Serial.print("\n");
        }
        
        Serial.print("---");
        Serial.print("\n");
        
        return;
}

void loop()
{
        const int random_number = random(0, 65536); //random(0, 65536);
             
           convert_number_to_binary(random_number);
         
        /*
         * convert a number to binary, and store the result in 
         * a bitmap (16bits)
        **/
       // convert_number_to_binary(random_number);
        
        /*
         * display set bits (in the bitmap) on the led
        **/
        switchon_led_bitmap(bit_pattern);

        delay(500);
        
        switchoff_all_leds();
        analogWrite
        
        /*
         * switchon a specific layer for output
        **/
}


void convert_number_to_binary(unsigned int num)
{
       int bit_position = 15;
       int quotient = 0;
       int remainder = 0;
       
       

       /*
        * convert integer to binary
       **/   
       while (num != 0) {
                quotient = num / 2;
                remainder = num - 2*quotient;
                
                bit_pattern[bit_position] = remainder;
                
                num = quotient;
                bit_position = bit_position - 1;
        }
                
        return;
}
