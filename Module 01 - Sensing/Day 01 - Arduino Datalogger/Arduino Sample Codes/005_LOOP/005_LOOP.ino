void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < 10; i = i + 1) {
    Serial.print("Loop Nr.");
    Serial.print(i);
    Serial.print("\t \t ");

    flash (500, LED_BUILTIN);
  }
}

void flash (int period, int led) {
  digitalWrite(led, HIGH);
  delay(period);
  digitalWrite(led, LOW);
  delay(period);
  Serial.print("The delay is: ");
  Serial.println(period);
}
