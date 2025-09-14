// C++ code

void setup()
{
// initialize serial communication at 9600 bits per second: 
Serial.begin(9600); 
    // make the pushbutton's pin an input: 
  pinMode(2,INPUT); 
}

void loop()
{
    // read the input pin:
int sensorValue = digitalRead(2);
    // print out the state of the button: 
  Serial.println(sensorValue); 
    delay(1000);  // delay in between reads for stability 
}