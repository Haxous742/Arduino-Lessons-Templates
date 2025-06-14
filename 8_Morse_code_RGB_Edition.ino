int main_pin = 9;
int letter_pin = 10;
int word_pin = 8; 
String input;

void setup() {
  Serial.begin(9600);
  Serial.println("Please enter the sentence to convert to Morse code: ");
  while (Serial.available() == 0) {}
  input = Serial.readString();
  input.toLowerCase();  
  pinMode(main_pin, OUTPUT);
  pinMode(letter_pin,OUTPUT);
  pinMode(word_pin,OUTPUT);
}

void loop() {
  for (int i = 0; i < input.length(); i++) {
    char c = input[i];
    
    if (c == ' ') {
      wordSpace();  
    } 
    
    else {
      Morse_converter(c);
      letterSpace();  
    }
  }

  delay(5000);  //Marks the end
}

void Morse_converter(char c) {
  switch (c) {
    case 'a': a(); break;
    case 'b': b(); break;
    case 'c': c_(); break;  
    case 'd': d(); break;
    case 'e': e(); break;
    case 'f': f(); break;
    case 'g': g(); break;
    case 'h': h(); break;
    case 'i': i_(); break;
    case 'j': j(); break;
    case 'k': k(); break;
    case 'l': l(); break;
    case 'm': m(); break;
    case 'n': n(); break;
    case 'o': o(); break;
    case 'p': p(); break;
    case 'q': q(); break;
    case 'r': r(); break;
    case 's': s(); break;
    case 't': t(); break;
    case 'u': u(); break;
    case 'v': v(); break;
    case 'w': w(); break;
    case 'x': x(); break;
    case 'y': y(); break;
    case 'z': z(); break;
  }
}

void letterSpace() {
  digitalWrite(letter_pin,HIGH);
  delay(500);
  digitalWrite(letter_pin,LOW);
  delay(500);
}

void wordSpace() {
  digitalWrite(word_pin,HIGH);
  delay(500);
  digitalWrite(word_pin,LOW);
  delay(500); 
}

void dot() {
  digitalWrite(main_pin, HIGH);
  delay(500);
  digitalWrite(main_pin, LOW);
  delay(500);  
}

void dash() {
  digitalWrite(main_pin, HIGH);
  delay(1500); 
  digitalWrite(main_pin, LOW);
  delay(500);  
}

void a() { dot(); dash(); }
void b() { dash(); dot(); dot(); dot(); }
void c_() { dash(); dot(); dash(); dot(); } 
void d() { dash(); dot(); dot(); }
void e() { dot(); }
void f() { dot(); dot(); dash(); dot(); }
void g() { dash(); dash(); dot(); }
void h() { dot(); dot(); dot(); dot(); }
void i_() { dot(); dot(); }  
void j() { dot(); dash(); dash(); dash(); }
void k() { dash(); dot(); dash(); }
void l() { dot(); dash(); dot(); dot(); }
void m() { dash(); dash(); }
void n() { dash(); dot(); }
void o() { dash(); dash(); dash(); }
void p() { dot(); dash(); dash(); dot(); }
void q() { dash(); dash(); dot(); dash(); }
void r() { dot(); dash(); dot(); }
void s() { dot(); dot(); dot(); }
void t() { dash(); }
void u() { dot(); dot(); dash(); }
void v() { dot(); dot(); dot(); dash(); }
void w() { dot(); dash(); dash(); }
void x() { dash(); dot(); dot(); dash(); }
void y() { dash(); dot(); dash(); dash(); }
void z() { dash(); dash(); dot(); dot(); }
