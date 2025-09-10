#include <Arduino.h>
#define LED 2

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  delay(50);
  digitalWrite(LED, HIGH);
  delay(50);
  digitalWrite(LED, LOW);
}

