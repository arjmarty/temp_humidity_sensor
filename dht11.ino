#include <Adafruit_sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#define DHTTYPE DHT11
#define DHTPIN4



void setup() {
  Serial.begin(9600); //initialize the device
  dht.begin();
  Serial.println(F("DHT11 sensor example"))
}

void loop() {
  //Delay between measurements.
  delay(delayMS);
  //Get temperature event and print its value
  sensors_event_t event;

}
