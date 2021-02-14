int pin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pin,54);
  delay(3000);
  analogWrite(pin,108);
  delay(3000);
  analogWrite(pin,161);
  delay(3000);
  analogWrite(pin,214);
  delay(3000);
  analogWrite(pin,255);
  delay(3000);
}
