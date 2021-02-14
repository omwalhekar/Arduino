int pin = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pin,50);
  delay(100);
  analogWrite(pin,100);
  delay(100);
  analogWrite(pin,150);
  delay(100);
  analogWrite(pin,255);
  delay(100);
}
