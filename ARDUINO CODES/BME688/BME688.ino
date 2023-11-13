#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME680.h>

Adafruit_BME680 bme; // Create a BME680 object

void setup() {
  Serial.begin(9600);
  if (!bme.begin()) {
    Serial.println("Could not find a valid BME680 sensor, check wiring!");
    while (1);
  }
}

void loop() {
  Serial.print("Temperature = ");
  Serial.print(bme.temperature());
  Serial.println(" *C");

  Serial.print("Pressure = ");
  Serial.print(bme.pressure() / 100.0);
  Serial.println(" hPa");

  Serial.print("Humidity = ");
  Serial.print(bme.humidity());
  Serial.println(" %");

  Serial.print("Gas = ");
  Serial.print(bme.gas_resistance() / 1000.0);
  Serial.println(" KOhms");

  Serial.println();

  delay(1000);
}
