void setup() {
  Serial.begin(9600);
}

void loop() {
  String message = "";
  
  if (Serial.available() > 0) {
    while (Serial.available() > 0) {
      message = message + char(Serial.read());
      delay(250);
    }
    Serial.println(message);
  }
  
}
