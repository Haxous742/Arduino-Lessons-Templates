int LEDPin = 9;
int waitTimeOn = 500;
int waitTimeOff = 500;

void setup()
{
  pinMode(LEDPin,OUTPUT);
}

void loop()
{
  digitalWrite(LEDPin,HIGH);
  delay(waitTimeOn);
  digitalWrite(LEDPin,LOW); 
  delay(waitTimeOff);
}
