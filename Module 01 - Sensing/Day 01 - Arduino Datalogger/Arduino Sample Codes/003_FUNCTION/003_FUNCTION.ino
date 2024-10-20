void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  flash();
}

void flash () {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
}
