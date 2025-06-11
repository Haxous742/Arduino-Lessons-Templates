int LEDPinGreen = 8;
int LEDPinRed = 9;
int waitTimeOnGreen = 500;
int waitTimeOffGreen = 500;
int waitTimeOnRed = 500;
int waitTimeOffRed = 500;

void setup()
{
  pinMode(LEDPinGreen,OUTPUT);
  pinMode(LEDPinRed,OUTPUT);
}

void loop()
{
  for(int i = 0;i < 9;i++){
    if (i%2 == 0){
      digitalWrite(LEDPinGreen,HIGH);
      delay(waitTimeOnGreen);
      digitalWrite(LEDPinGreen,LOW); 
      delay(waitTimeOffGreen);
    }
    else{
      digitalWrite(LEDPinRed,HIGH);
      delay(waitTimeOnRed);
      digitalWrite(LEDPinRed,LOW); 
      delay(waitTimeOffRed);
    }
  }
}