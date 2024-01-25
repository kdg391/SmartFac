int trigPin = 12;
int echoPin = 13;

int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  digitalWrite(echoPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  unsigned long duration = pulseIn(echoPin, HIGH);
  float distance = ((float)(360 * duration) / 1000) / 2;

  Serial.print(distance);
  Serial.println(" mm");
  
  if (distance <= 100) {
    setColor(255, 0, 0);
    delay(500);
    digitalWrite(redPin, LOW);
  }
  else if (distance <= 200) {
    setColor(0, 255, 0);
    delay(500);
    digitalWrite(greenPin, LOW);
  }
  else {
    setColor(0, 0, 255);
    delay(500);
    digitalWrite(bluePin, LOW);
  }
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}