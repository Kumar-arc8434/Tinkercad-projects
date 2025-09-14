// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode (2,OUTPUT); //green
  pinMode(3,OUTPUT); //red
  
}

void loop()
{
 int analogValue = analogRead(A0);
    
  // print the analog value:
  Serial.println(analogValue);
  delay(1);  
  
  if (analogValue <= 300) { //green
    digitalWrite(3,LOW);//red
    digitalWrite(2, HIGH); //green
  } 
  else if (analogValue <= 700){ //yellow
    digitalWrite(3,HIGH); //red
    digitalWrite(2,HIGH); //green
  }
  else{ //red 
    digitalWrite(2,LOW); 
    digitalWrite (3,HIGH);
  }


}
