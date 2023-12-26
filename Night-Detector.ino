const int ledPin = 2;   
const int ldrPin = A0;  

void setup() {     
  pinMode(ledPin, OUTPUT);    
  pinMode(ldrPin, INPUT); 

} 

void loop() {   
  
int ldrStatus = analogRead(ldrPin);      

 if (ldrStatus >=300) {     
   digitalWrite(ledPin, LOW);                   
  }   
  
  else {     
    digitalWrite(ledPin, HIGH);           
    } 
} 
