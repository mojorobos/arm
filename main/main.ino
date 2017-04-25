#include <Servo.h>

#define S1_PIN 7
#define FULL_CYCLE 802.0

Servo s1;
int angle, value;

void setup() {
  Serial.begin(57600);
}

void loop() {
  if (Serial.available()) {
    angle = Serial.parseInt();
    value = floor(FULL_CYCLE * angle / 360.0);
    s1.attach(S1_PIN);
    s1.write(0);
    delay(value);
    s1.detach();
  }
}
