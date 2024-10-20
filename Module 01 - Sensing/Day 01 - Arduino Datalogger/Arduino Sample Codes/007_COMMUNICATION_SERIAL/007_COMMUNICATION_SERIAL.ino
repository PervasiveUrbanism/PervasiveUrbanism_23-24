void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.begin(9600);
}

// Type "1" or "0" into the commandline to switch the LED ON or OFF. This is a demonstration of how 
// bi-directional communication works.

void loop() {
  if (Serial.available() > 0) {
    char letter = Serial.read();
    if (letter == '1') {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("LED is on!");
    }
    else if (letter == '0') {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("LED is OFF!");
    }
  }
}
