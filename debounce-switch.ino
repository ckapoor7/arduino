const int led = 9;
const int button = 2;
boolean currentButton = LOW; // initialise current button state to off
boolean lastButton = LOW; //intitalise the previous button state to off
boolean ledstate = false; // initalise the state of the led to off

  void setup()
  {
    pinMode(led, OUTPUT);
  }
  
      boolean debounce (boolean last) //the data type the functon returns is boolean. The name of the function is debounce and the name of the parameter is "last" with its data type as boolean.
        {
            boolean current = digitalRead(button); // create a new variable with data type as boolean and name as "current". The value of "current" is = to the value of the value of the button 
            if ( last != current) // this checks whether the button has debounced or not when it was pressed, and if it has debounced...
              {
                  delay(5); // wait for 5 miliseconds and...
                  current = digitalRead(button); // set the value of the variable current as the value of the push button again.
              }
            return current;
        } // returns the current value to the compiler.
  
