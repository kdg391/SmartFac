#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo5;

void setup() {
  Serial.begin(9600);
  Serial.println("start");

  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo5.attach(10);

  move(90, 90, 90, 90);

  delay(1000);
}

void loop() {
  // 1
  move(90, 45, 135, 90);
  delay(1000);

  move(150, 45, 135, 90);
  delay(500);
  move(150, 45, 135, 0);
  delay(100);
  move(150, 45, 135, 90);
  delay(300);

  // 2
  move(45, 45, 135, 90);
  delay(800);
  move(45, 45, 135, 0);
  delay(100);
  move(45, 45, 135, 90);
  delay(300);

  // 3
  move(120, 45, 135, 90);
  delay(500);
  move(120, 45, 135, 0);
  delay(100);
  move(120, 45, 135, 90);
  delay(300);
}

void move(int a, int b, int c, int d) {
  servo1.write(a); // 바닥
  servo2.write(b); // 중간
  servo3.write(c); // 상단
  servo5.write(d); // 
}