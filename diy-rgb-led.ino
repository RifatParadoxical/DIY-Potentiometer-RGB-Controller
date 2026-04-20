const int r = 11;
const int b = 12;
const int g = 13;

const int pinR = A0;
const int pinB = A1;
const int pinG = A2;

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(g, OUTPUT);
  
  pinMode(pinR, INPUT);
  pinMode(pinB, INPUT);
  pinMode(pinG, INPUT);
}

void loop()
{
  int rPot = analogRead(pinR);
  int bPot = analogRead(pinB);
  int gPot = analogRead(pinG);
  
  int rValue = map(rPot, 0, 1023, 0, 255);
  int bValue = map(bPot, 0, 1023, 0, 255);
  int gValue = map(gPot, 0, 1023, 0, 255);
  
  analogWrite(r, rValue);
  analogWrite(b, bValue);
  analogWrite(g, gValue);
  delay(10);
}