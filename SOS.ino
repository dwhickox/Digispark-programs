/*
Copyright David Hickox 2017
This program simply blinks the digispark model a led in an SOS morse code pattern and timing

Jan 25 17
*/
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(1, OUTPUT); //LED on Model A   
  
}

// the loop routine runs over and over again forever:
void loop() {
  // turn the LED on (HIGH is the voltage level)
  int basetime = 200;
  digitalWrite(1, HIGH);
  delay(basetime);               // wait for a second
  // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(basetime);               // wait for a second
  digitalWrite(1, HIGH);
  delay(basetime);               // wait for a second
  // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(basetime);               // wait for a second
  digitalWrite(1, HIGH);
  delay(basetime);               // wait for a second
  // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(3*basetime);               // wait for a second
  digitalWrite(1, HIGH);
  delay(3*basetime);               // wait for a second
  // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(basetime);               // wait for a second
  digitalWrite(1, HIGH);
  delay(3*basetime);               // wait for a second
  // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(basetime);               // wait for a second
  digitalWrite(1, HIGH);
  delay(3*basetime);               // wait for a second
  // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(3*basetime);               // wait for a second
  digitalWrite(1, HIGH);
  delay(basetime);               // wait for a second
  // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(basetime);               // wait for a second
  digitalWrite(1, HIGH);
  delay(basetime);               // wait for a second
  // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(basetime);               // wait for a second
  digitalWrite(1, HIGH);
  delay(basetime);               // wait for a second
  // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(7*basetime);               // wait for a second
}
