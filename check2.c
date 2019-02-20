void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  for(int i=0;i<3;i++)
  {
  	digitalWrite(9, HIGH);
  	delay(100); 
  	digitalWrite(9, LOW);
  	delay(100); 
  }
  for(int i=0;i<3;i++)
  {
  	digitalWrite(9, HIGH);
  	delay(300); 
  	digitalWrite(9, LOW);
  	delay(100); 
  }
  for(int i=0;i<3;i++)
  {
  	digitalWrite(9, HIGH);
  	delay(100); 
  	digitalWrite(9, LOW);
  	delay(100); 
  }
  digitalWrite(9, LOW);
  	delay(300);
}
