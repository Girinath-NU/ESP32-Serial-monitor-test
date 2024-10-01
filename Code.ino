void setup() {
  Serial.begin(115200);  // Start Serial communication
}

void loop() {
  Serial.println("Serial monitor test");  // Print test message
  delay(1000);  // Wait 1 second
}
