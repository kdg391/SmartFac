
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  randomSeed(analogRead(0));
}

void loop() {
  int red = random(0, 256);
  int green = random(0, 256);
  int blue = random(0, 256);

  setColor(red, green, blue);
  delay(100);
}

void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue); 
}
