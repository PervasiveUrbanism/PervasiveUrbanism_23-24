int timedelay[] = {200, 40, 50, 500, 70};

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i = i + 1) {
    Serial.print("Loop Nr.");
    Serial.print(i);
    Serial.print("\t");
    Serial.print("Number from array: "); 
    Serial.print(timedelay[i]);
    Serial.print("\t");
    flash (timedelay[i], LED_BUILTIN);
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
