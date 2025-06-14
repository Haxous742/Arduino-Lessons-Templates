int mynum;
int buzzpin = 8;
String msg = "Please input your number: ";
void setup() {
  Serial.begin(9600);
  pinMode(buzzpin,OUTPUT);
}

void loop() {
  Serial.println(msg);
  while(Serial.available() == 0){}
  mynum = Serial.parseInt();

  if (mynum > 10){
    digitalWrite(buzzpin,HIGH);
    delay(2000);
    digitalWrite(buzzpin,LOW);
  }

}
