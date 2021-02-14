int pin1 = 11;
int pin2 = 12;
int pin3 = 13;
int interval = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin3,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //0
  digitalWrite(pin3,LOW);
  digitalWrite(pin2,LOW);
  digitalWrite(pin1,LOW);
  delay(interval);

  //1
  digitalWrite(pin3,LOW);
  digitalWrite(pin2,LOW);
  digitalWrite(pin1,HIGH);
  delay(interval);

  //2
  digitalWrite(pin3,LOW);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin1,LOW);
  delay(interval);

  //3
  digitalWrite(pin3,LOW);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin1,HIGH);
  delay(interval);

  //4
  digitalWrite(pin3,HIGH);
  digitalWrite(pin2,LOW);
  digitalWrite(pin1,LOW);
  delay(interval);

  //5
  digitalWrite(pin3,HIGH);
  digitalWrite(pin2,LOW);
  digitalWrite(pin1,HIGH);
  delay(interval);

  //6
  digitalWrite(pin3,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin1,LOW);
  delay(interval);

  //7
  digitalWrite(pin3,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin1,HIGH);
  delay(interval);
}
