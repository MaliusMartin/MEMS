const int flameSensorPin = 2; // Connect the flame sensor to digital pin 2

void setup() {
  Serial.begin(9600);
  pinMode(flameSensorPin, INPUT);
}

void loop() {
  int flameValue = digitalRead(flameSensorPin);
  
  if (flameValue == HIGH) {
    Serial.println("Flame detected! Alert!");
    // Add your code to trigger an alert or take necessary actions
  }

  delay(1000); // Adjust the delay as needed
}
