// C++ code

//Turns an LED on for one second, then off for one second, repeatedly. 
void setup()
{
  pinMode(12, OUTPUT);
  test1();
}

void loop()
{

}


void test1()
{
  for(int i = 0; i <= 10; i++)
  {
    digitalWrite(12, HIGH); //turn the LED on with high voltage
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW); //turn the LED off with low voltage
  delay(1000); // Wait for 1000 millisecond(s) 
  }
}
