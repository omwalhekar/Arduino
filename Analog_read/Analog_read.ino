int readPin = A3;
int delayTime = 500;
float v2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  v2 = analogRead(readPin);
  if(v2*5/1023 == 5)
  {      
   Serial.println("HIGH");
  }
  else if(2 < v2*5/1023 && v2*5/1023 < 3)
  {
    Serial.println("MED");
  }
  else if(v2*5/1023 == 0)
  {
    Serial.println("LOW");
  }
Serial.println(v2*5/1023);
  delay(delayTime);
}
