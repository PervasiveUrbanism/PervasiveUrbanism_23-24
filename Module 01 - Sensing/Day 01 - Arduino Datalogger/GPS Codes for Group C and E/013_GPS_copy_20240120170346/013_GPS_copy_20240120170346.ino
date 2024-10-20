#include <TinyGPS++.h>
#include <SoftwareSerial.h>

/*the documentation of the tinyGPS library is http://arduiniana.org/libraries/tinygpsplus/
It just so happened that this sketch uses this library, there are many more
*/

SoftwareSerial serial_connection(2,3); // RXpin, TXpin
TinyGPSPlus gps;//This is the GPS object that carries the info we will extract


void setup() {
  Serial.begin(9600);//This opens up communications to the Serial monitor in the Arduino IDE and sets the speed. This is basically the connection to the computer
  serial_connection.begin(9600);//This opens up communications to the GPS
  Serial.println("GPS Start\n**************************");//Just show to the monitor that the sketch has started
}

void loop()
{
  while (serial_connection.available()) //While there is data coming from the GPS, do follwing...
  {
    gps.encode(serial_connection.read());//...read the signal, transform into an object called "gps"
    }

  if (gps.location.isUpdated()) //if this object has been updated, do the following

  {
    //...Get the latest info from the gps object which it derived from the data sent by the GPS unit and print to to the serial monitor
    Serial.print("Satellite Count:\t");
    Serial.println(gps.satellites.value());
    Serial.print("Latitude:\t\t");
    Serial.println(gps.location.lat(), 6);
    Serial.print("Longitude:\t\t");
    Serial.println(gps.location.lng(), 6);
    Serial.print("Speed MPH:\t\t");
    Serial.println(gps.speed.mph());
    Serial.print("Altitude Feet:\t\t");
    Serial.println(gps.altitude.feet());
    Serial.print("Date:\t\t\t");
    Serial.println(gps.date.value());
    Serial.print("Time:\t\t\t");
    Serial.println(gps.time.value());
    Serial.println("__________________________________");
  }
}
