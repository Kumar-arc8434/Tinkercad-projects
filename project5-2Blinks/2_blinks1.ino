// C++ code
//
int pinMode_1 = 11;

int ledPin = 12;


void setup()
{
  pinMode(pinMode_1, OUTPUT);
  pinMode(ledPin, OUTPUT);

}

void loop()
{
  digitalWrite(ledPin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledPin, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  delay (2000);
  
  digitalWrite(pinMode_1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pinMode_1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  delay (2000); 
  
  
 
  
}
