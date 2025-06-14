int red = 8;
int green = 9;
int blue = 10;
int onTime = 500;
int offTime = 500;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {
  digitalWrite(red,HIGH);
  delay(onTime);
  digitalWrite(red,LOW);
  delay(offTime);

  digitalWrite(green,HIGH);
  delay(onTime);
  digitalWrite(green,LOW);
  delay(offTime);

  digitalWrite(blue,HIGH);
  delay(onTime);
  digitalWrite(blue,LOW);
  delay(offTime);
}



int redPin=8;  //set red LED pin to 11
int greenPin=9; //set green LED pin to 10
int bluePin=10; //set blue LED pin to 6
int brightness=100; //Set brightness to 100

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600); //Turn on Serial port
pinMode(redPin, OUTPUT); //Set redPin to be an output
pinMode(greenPin, OUTPUT); //Set greenPin to be an output
pinMode(bluePin, OUTPUT); //set bluePin to be an output

}

void loop() {
  // put your main code here, to run repeatedly: 
  analogWrite(greenPin, 100); //turn off green pin
  analogWrite(redPin, 0); //turn off red pin
  analogWrite(bluePin, 100); //write 100 (brightness) to blue pin
}
