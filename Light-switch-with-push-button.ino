const int button_ON = A0;
const int button_Off = A1;     // the number of the pushbutton pin
const int Load = 2;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(Load, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(button_ON, INPUT_PULLUP);
    pinMode(button_Off, INPUT_PULLUP);
    digitalWrite(Load, HIGH);
}

void loop() {
  
  if (digitalRead(button_ON) == LOW) {
   digitalWrite(Load, LOW);
    delay (250);
  }
  else if (digitalRead(button_Off) == LOW) {
    digitalWrite(Load, HIGH);
    delay (250);
  }
}
