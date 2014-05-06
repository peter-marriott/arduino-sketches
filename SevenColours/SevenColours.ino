/*
  Cycle through seven colours that can be displayed by a RGB led only using
  Outputs as on or off not PWM (Pulse-width modulation)
 */
 
int red = 13;
int green = 12;
int blue = 11;

boolean colourPatern[8][3] = { { false, false, false },
{ false, false,  true },
{ false,  true, false },
{ false,  true,  true },
{  true, false, false },
{  true, false,  true },
{  true,  true, false },
{  true,  true,  true } };

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(red, OUTPUT);     
  pinMode(green, OUTPUT);     
  pinMode(blue, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  
  for (byte i = 0;i < 8; i++) {
    digitalWrite(red,   colourPatern[i][0]);
    digitalWrite(green, colourPatern[i][1]);
    digitalWrite(blue,  colourPatern[i][2]);
    delay(1000);
  }
  
}
