int LED = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
}
void dot(){
  int dit = 200;
//  int dit = 100;
  digitalWrite(LED,HIGH);
  delay(dit);
  digitalWrite(LED,LOW);
  delay(dit);
}
void dash(){
  int dah = 500;
//  int dah = 200;
  digitalWrite(LED,HIGH);
  delay(dah);
  digitalWrite(LED,LOW);
  delay(dah);
}
void SOS(){
  dot();
  dot();
  dot();
  delay(200);
  dash();
  dash();
  dash();
  delay(200);
  dot();
  dot();
  dot();
}
void loop() {
    SOS();
    delay(3000);
}
