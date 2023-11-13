#include <LoRa.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);

  Serial.println("LoRa Sender");

  if (!LoRa.begin(433E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
}

void loop() {
  Serial.println("Sending packet...");

  // Send a message
  LoRa.beginPacket();
  LoRa.print("Hello, LoRa!");
  LoRa.endPacket();

  delay(5000); // Send every 5 seconds
}
