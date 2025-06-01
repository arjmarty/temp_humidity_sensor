#include <Adafruit_sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#define DHTTYPE DHT11
#define dataPin 4

void setup() {
  Serial.begin(9600); //initialize the device
  dht.begin();
  Serial.println(F("DHT11 sensor example"));
}

void loop() {
  int readData = DHT.read11(dataPin);
  float t = DHT.temperature;
  float h = DHT.humidity;

  //print the values on the serial monitor
  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print(" *C");
  Serial.print("Humidity = ");
  Serial.print(h);
  Serial.print(" %");

  //Delay between measurements.
  delay(2000);
  
}
