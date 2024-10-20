int pause= 100;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(pause);
  digitalWrite(LED_BUILTIN, LOW);
  delay(pause);
  Serial.print("The delay is: "); 
  Serial.print(pause);
  Serial.println("ms");
}
