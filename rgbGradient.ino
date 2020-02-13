//RGB Gradient Formula from https://graphicdesign.stackexchange.com/questions/100917/how-do-i-calculate-color-gradients
const int rPin=6;
const int gPin=5;
const int bPin=3;
float rVal= 0;
float gVal= 0;
float bVal= 255;

void setup() {
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //(Loop 1) Starting RGB value: (255, 0, 0), Final RGB value: (0, 0, 255)
  for(float i=0; i<500; i+=10){
    rVal= ((i/500)*0) + ((1-(i/500))*255);
    bVal= ((i/500)*255) + ((1-(i/500))*0);
    rgbSet(rVal, gVal, bVal, rPin, gPin, bPin);
    delay(50);
  }
  //(Loop 2) Starting RGB value: (0, 0, 255), Final RGB value(0, 255, 0)
  for(float j=0; j<500; j+=10){
    bVal= ((j/500)*0) + ((1-(j/500))*255);
    gVal= ((j/500)*255) + ((1-(j/500))*0);
    rgbSet(rVal, gVal, bVal, rPin, gPin, bPin);
    delay(50);
  }
  //(Loop 3) Starting RGB value: (0, 255, 0), Final RGB value: (255, 0, 0)
  for(float k=0; k<500; k+=10){
    gVal= ((k/500)*0) + ((1-(k/500))*255);
    rVal= ((k/500)*255) + ((1-(k/500))*0);
    rgbSet(rVal, gVal, bVal, rPin, gPin, bPin);
    delay(50);
  }
}

void rgbSet(float r, float g, float b, int rPin, int gPin, int bPin){
  analogWrite(rPin, int(r));
  analogWrite(gPin, int(g));
  analogWrite(bPin, int(b));
}
