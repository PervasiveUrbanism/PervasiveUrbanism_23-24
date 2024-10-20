bool Fast = true;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  if (true == Fast) {
    flash (50, LED_BUILTIN);
  }
  else {
    flash (400, LED_BUILTIN);
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
