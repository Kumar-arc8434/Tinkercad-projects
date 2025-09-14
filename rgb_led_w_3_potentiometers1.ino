
const int potR = A0; //analog pins attached to the potentiometers 
const int potB = A1; 
const int potG = A2; 

const int red = 9; // an integer that is constant 
const int green = 11; // all PWM - pulse width modulation 
const int blue = 10;

int brightnessR = 0; // allow us to store the LED brightness later in the code
int brightnessG = 0;
int brightnessB = 0;
 
int valR = 0; // variable to store pot reading 
int valB = 0; 
int valG = 0; 

void setup()
{
  Serial.begin(9600); 
 
  /*this command starts the serial monitor 
  9600 is baud rate - rate at which the computer and the arduino talk to each other
  use for checking sensors 
  */
 
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop()
{
  valR = analogRead(potR);
  valB = analogRead(potB);
  valG = analogRead(potG);
  
  Serial.print("valR = "); // "quoted text" will show up as text in the SM
  Serial.print(valR); //print the number of valR 
  Serial.print("  "); // print a space 
  Serial.print("valB = ");
  Serial.print(valB );
  Serial.print("  "); 
  Serial.print("valG = ");
  Serial.print(valG);
  Serial.println("  "); //the Serial.println command will start a new line in the SM 
  //delay(1000);
  
  brightnessR = map(valR,0,1023,0,255);
  /* this map function is allow us to map 10 bit number (0-1023) to 
  an 8 bit number (0-255) 
  */
  brightnessB = map(valB,0,1023,0,255);
  brightnessG = map(valG,0,1023,0,255);
  
  
  analogWrite(red,brightnessR);
  /* write to the red pin (numnber 9) with a brightness calculated above.
  This will be a number between 0 - 255. O means that the duty cyle is 0% 
  and the pin is always low. 127 means that the duty cycle is 50% and the pin is high 50%
  and low 50% of the time. 255 means that the duty cycle is 100% and the pin is always high. 
  */
  analogWrite(blue,brightnessB);
  analogWrite(green,brightnessG);
 
  
  
}

