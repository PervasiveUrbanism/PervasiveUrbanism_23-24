/*
This sketch has been taken from the examples that come with the library. The sensor connects to the port A1 of the groove shield. 
the relevatn info is from this webside: https://wiki.seeedstudio.com/Grove-Air_Quality_Sensor_v1.3/
*/

#include "Air_Quality_Sensor.h"

AirQualitySensor sensor(A0); // this statement creates an object called "sensor" that holds the value and the info about the air quality

void setup(void) {
    Serial.begin(9600); // this establishes the serial communication to the computer and sets the communication speed. 
    Serial.println("Waiting sensor to init..."); // a simple message that tells the user to be patient
    delay(20000); // and let's wait for the sensor to be ready
    
    if (sensor.init()) { // this statement executes after 20s, it checks if anyting has come through
        Serial.println("Sensor ready.");
    } else {
        Serial.println("Sensor ERROR!");
    }
}

void loop(void) {
    int quality = sensor.slope();
    Serial.print("Sensor value: ");
    Serial.println(sensor.getValue());
    if (quality == AirQualitySensor::FORCE_SIGNAL) {
        Serial.println("High pollution! Force signal active.");
    } else if (quality == AirQualitySensor::HIGH_POLLUTION) {
        Serial.println("High pollution!");
    } else if (quality == AirQualitySensor::LOW_POLLUTION) {
        Serial.println("Low pollution!");
    } else if (quality == AirQualitySensor::FRESH_AIR) {
        Serial.println("Fresh air.");
    }

    delay(1000);
}
