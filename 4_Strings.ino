void setup(){
    String redMessage="The Red LED is Blinking";
    String yellowMessage="The Yellow LED is Blinking";

    String st1="Hello"; 
    String st2="World"; 
    String st3;         
}

void loop(){
    Serial.println(redMessage);
    Serial.println(yellowMessage);
    st3=st1+st2;            
    Serial.println(st3);
}
