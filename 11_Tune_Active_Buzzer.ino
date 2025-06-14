int buzzPin = 8;
int delay_1 = 1;
int delay_2 = 2;

void setup() {
  pinMode(buzzPin,HIGH);
}

void loop() {
  for(int i = 1;i <= 100;i = i + 1){
    digitalWrite(buzzPin,HIGH);
    delay(delay_1);
    digitalWrite(buzzPin,LOW);
    delay(delay_1); 
  }

  for(int i = 1;i <= 100;i = i + 1){
    digitalWrite(buzzPin,HIGH);
    delay(delay_2);
    digitalWrite(buzzPin,LOW);
    delay(delay_2); 
  }
}
