int pin = 8; //this is the pin that recieves incoming data
unsigned long duration; // this is the duration of the measurement
unsigned long starttime; // this is the starttime
unsigned long sampletime_ms = 30000;// it takes measures for 30s
unsigned long lowpulseoccupancy = 0;
float ratio = 0;
float concentration = 0; // this is the start value of the current concentration
float maxcon = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(pin, INPUT);
  starttime = millis();// milliseconds since the Arduino board began running the current program. in this case it starts at 0
}

void loop()
{
  duration = pulseIn(pin, LOW);
  lowpulseoccupancy = lowpulseoccupancy + duration;

  if ((millis() - starttime) > sampletime_ms) //if the sampel time == 30s
  {
    ratio = lowpulseoccupancy / (sampletime_ms * 10.0); // Integer percentage 0=>100
    concentration = 1.1 * pow(ratio, 3) - 3.8 * pow(ratio, 2) + 520 * ratio + 0.62; // using spec sheet curve
    
    if (concentration > maxcon) {
      maxcon = concentration;
    }
    
    Serial.print(" concentration: ");
    Serial.print(concentration);
    Serial.println(" pcs/0.01cf");
    Serial.print(" max concentration: ");
    Serial.print(maxcon);
    Serial.println(" pcs/0.01cf");
    
    lowpulseoccupancy = 0;
    starttime = millis();
  }
}
