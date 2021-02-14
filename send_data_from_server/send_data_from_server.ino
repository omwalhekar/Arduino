int ir = A0;
void setup() {
  pinMode(ir,INPUT);
  Serial.begin(9600);

}

void loop() {
   int LDR = analogRead(ir);
   Serial.println(LDR);
   delay(100);
  
}
