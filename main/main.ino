#include <Servo.h>

#define S1_PIN A5
#define FULL_CYCLE 850.0
#define BEGIN_SPEED 15

Servo s1;
int angle, value;

void setup() {
  Serial.begin(57600);
  s1.attach(S1_PIN);
  s1.writeMicroseconds(1500);
}

void loop() {
  if (Serial.available()) {
    angle = Serial.parseInt();
    value = floor(FULL_CYCLE * angle / 360.0);
    //if (value > )
    s1.writeMicroseconds(1000);
    delay(value);
    s1.writeMicroseconds(1500);
  }
}
