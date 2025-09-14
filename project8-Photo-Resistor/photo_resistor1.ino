// C++ code
//
void setup()
{
Serial.begin(9600); 
  pinMode (2,OUTPUT); 
}

void loop()
{
int analogValue = analogRead(A1);
    
  // print the analog value:
  Serial.println(analogValue);
  delay(1);   
  
  if (analogValue <=930 ) { 
    digitalWrite(2, HIGH); 
  } 
  else if (analogValue > 930){ 
    digitalWrite(2,LOW); 
  } 
}
