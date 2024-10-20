#include <TinyGPS++.h>
#include <SoftwareSerial.h>
#include <SPI.h>
#include <SD.h>

SoftwareSerial serial_connection(6, 7);
TinyGPSPlus gps;

const int chipSelect = 4;

File dataFile;
String filename = "Data.csv";
String Data = "";
String Header = "index \t lat \t long \t speed \t date \t time";

int index = 0;

void setup() {

  serial_connection.begin(9600);//This opens up communications to the GPS

  Serial.begin(9600);//This opens up communications to the Serial monitor in the Arduino IDE and sets the speed. This is basically the connection to the computer
  Serial.println(Header);//and these are the values

  SD.begin(chipSelect);
  SD.remove(filename);
  File dataFile = SD.open(filename, FILE_WRITE);
  if (dataFile)
  {
    dataFile.println(Header);
    dataFile.close();
  }
}



void loop()
{
  while (serial_connection.available()) //While there is data coming from the GPS, do follwing...
  {
    gps.encode(serial_connection.read());//...read the signal, transform into an object called "gps"
  }

  if (gps.location.isUpdated()) //if this object has been updated, do the following
  {
    Data = "";

    Data.concat(index);
    Data.concat("\t");
    Data.concat(String(gps.location.lat(), 6));
    Data.concat("\t");
    Data.concat(String(gps.location.lng(), 6));
    Data.concat("\t");
    Data.concat(gps.speed.mph());
    Data.concat("\t");
    Data.concat(gps.date.value());
    Data.concat("\t");
    Data.concat(gps.time.value());

    dataFile = SD.open(filename, FILE_WRITE);
    if (dataFile)
    {
      dataFile.println(Data);
      dataFile.close();
      Serial.println(Data);
    }
    index = index + 1;
  }


}
