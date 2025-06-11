int redLEDPin=9; 
int yellowLEDPin=8; 
int redOnTime=250;
int redOffTime=250;  
int yellowOnTime=250; 
int yellowOffTime=250; 
int numYellowBlinks=5; 
int numRedBlinks=5;  

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate, baud = bits per second
  Serial.println("Starting LED Blink Program"); // Print a message to the serial monitor
  pinMode(redLEDPin, OUTPUT);  
  pinMode(yellowLEDPin, OUTPUT);  
}

void loop() {

for (int j=1; j<=numRedBlinks; j=j+1) {  
    Serial.print("Blink number: ");  
    Serial.println(j);
    digitalWrite(redLEDPin,HIGH); 
    delay(redOnTime);             
    digitalWrite(redLEDPin,LOW);  
    delay(redOffTime);            
}

Serial.println("Red LED Blinks Completed"); // Print a message to the serial monitor
 
for (int j=1; j<=numYellowBlinks; j=j+1) {   
    Serial.print("Blink number: ");
    Serial.println(j);  
    digitalWrite(yellowLEDPin,HIGH); 
    delay(yellowOnTime);             
    digitalWrite(yellowLEDPin,LOW);  
    delay(yellowOffTime);          
}

Serial.println("Yellow LED Blinks Completed"); // Print a message to the serial monitor
  
}