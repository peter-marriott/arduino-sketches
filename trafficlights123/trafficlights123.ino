/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int are = 13;
int bee = 12;
int red = 11;
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(are, OUTPUT);     
  pinMode(bee, OUTPUT);
  pinMode(red, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(are, LOW);   
  digitalWrite(bee, HIGH);   
  digitalWrite(red, LOW);   
  delay(500);               // wait for a half second
  digitalWrite(are, HIGH);    
  digitalWrite(bee, LOW);    
  digitalWrite(red, HIGH);    
  delay(250);               // wait for 
}
