void setup(){
 pinMode(12, OUTPUT);
 pinMode(A1, INPUT);
 Serial.begin(9600);
}

void loop(){
  int light = analogRead(A1);
  Serial.println(light);
  if(light > 10)
  {
    digitalWrite(12, HIGH);
  }
  else{
    digitalWrite(12, LOW);
  }
  delay(50);
     
}
