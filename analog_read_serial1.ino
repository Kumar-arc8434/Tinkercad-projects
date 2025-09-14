// C++ code

void setup()
{
// initialize serial communication at 9600 bits per second: 
Serial.begin(9600);
}

void loop()
{
  //print out the sensorValue.
    int sensorValue = analogRead (A0);
	Serial.println(sensorValue); 

  //delay for the print.
  delay(1000);
}