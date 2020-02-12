const int g1= 4;
const int y1=3;
const int r1=2;
const int g2= 13;
const int y2= 12;
const int r2= 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(g1, OUTPUT);
  pinMode(y1, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(y2, OUTPUT);
  pinMode(r2, OUTPUT);
  digitalWrite(g1, LOW);
  digitalWrite(y1, LOW);
  digitalWrite(r1, HIGH);
  digitalWrite(g2, LOW);
  digitalWrite(y2, LOW);
  digitalWrite(r2, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightRun(r1, y1, g1);
  delay(500);
  lightRun(r2, y2, g2);
  delay(500);
}

void lightRun(int r, int y, int g){
  digitalWrite(r, LOW);
  digitalWrite(g, HIGH);
  delay(2500);
  digitalWrite(g, LOW);
  digitalWrite(y, HIGH);
  delay(2500);
  digitalWrite(y, LOW);
  digitalWrite(r, HIGH);
}
