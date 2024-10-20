void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {
    char letter = Serial.read();
    
    if (letter == '1') {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("LED is on!");
      return;
    }
    else if (letter == '0') {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("LED is OFF!");
      return;
    }

    // this part is in addition to the example before. 
    // it simply reads the status of the pin and 
    // reports back the status. This could be useful 
    // for incoming signals for example.

    if (digitalRead(LED_BUILTIN) == LOW) {
      Serial.println("The LED is really OFF");
    }
    else if (digitalRead(LED_BUILTIN) == HIGH) {
      Serial.println("The LED is really ON");
    }
    
  }
  
}
