#include <Servo.h> 

#define S1_PIN A5

Servo s1;
int a, b;

void setup() {
  s1.attach(S1_PIN);
  a = 0;
  b = -1;
  s1.write(0);
}

void loop() {
  delay(10000);
  b *= -1;
  if (b > 0) {
    s1.write (10);
  } else {
    s1.write(-10);
  }
}
