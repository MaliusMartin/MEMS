// Include the Wire library for I2C
#include <Wire.h>

// ADXL337 analog pins
const int xPin = A0;
const int yPin = A1;
const int zPin = A2;

void setup() {
  // Start the serial communication
  Serial.begin(9600);
}

void loop() {
  // Read analog values from the ADXL337
  int xValue = analogRead(xPin);
  int yValue = analogRead(yPin);
  int zValue = analogRead(zPin);

  // Print the values to the Serial Monitor
  Serial.print("X: ");
  Serial.print(xValue);
  Serial.print("\tY: ");
  Serial.print(yValue);
  Serial.print("\tZ: ");
  Serial.println(zValue);

  // Add a delay if needed
  delay(1000);
}
