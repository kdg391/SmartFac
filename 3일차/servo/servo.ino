#include <Servo.h>

Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(random(30, 160));
  delay(10);
}
