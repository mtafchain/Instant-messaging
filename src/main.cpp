#include <Arduino.h>
#include <messager_wifi.h>

#define LED 2

void setup() {
  pinMode(LED, OUTPUT);
  setup_wifi();
}

void loop() {
  delay(50);
  digitalWrite(LED, HIGH);
  delay(50);
  digitalWrite(LED, LOW);
}





