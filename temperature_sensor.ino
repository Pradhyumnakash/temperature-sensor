#include <elapsedMillis.h>

const int lm35Pin = A0;
const int ledPin = 13;  // Onboard LED pin

int temperatureThreshold = 30;

elapsedMillis ledBlinkTimer;

void setup() {
  pinMode(lm35Pin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int temperature = readTemperature();

  if (temperature < temperatureThreshold) {
    blinkLED(250);
  } else {
    blinkLED(500);
  }
}

