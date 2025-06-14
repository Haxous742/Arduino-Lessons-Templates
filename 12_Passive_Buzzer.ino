int buzzPin = 8;
int potPin = A3;
int potVal;
int toneVal;
void setup() {
  pinMode(buzzPin,OUTPUT);
  pinMode(potPin,INPUT);
}

void loop() {
  potVal = analogRead(potPin);
  toneVal = (9940./1023.)*potVal + 60; // lower bound = 60 and upper bound = 10000 (microseconds)
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(toneVal);
}