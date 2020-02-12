const int out1=10;
const int out2=11;
const int out3=12;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   analogWrite(out2, 0);
   analogWrite(out3, 0);
   analogWrite(out1, 255);
   Serial.print("10: ");
   Serial.println(255);
   delay(200);
   analogWrite(out1, 0);
   Serial.print("10: ");
   Serial.println(0);
   delay(50);
   analogWrite(out2, 255);
   Serial.print("11: ");
   Serial.println(255);
   delay(200);
   analogWrite(out2, 0);
   Serial.print("11: ");
   Serial.println(0);
   delay(50);
   analogWrite(out3, 255);
   Serial.print("12: ");
   Serial.println(255);
   delay(200);
   analogWrite(out3,0);
   Serial.print("12: ");
   Serial.println(0);
   delay(50);
}
