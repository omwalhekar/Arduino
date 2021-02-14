#include <ESP8266WiFi.h>
WiFiServer server(80);
int ir = A0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  WiFi.disconnect();
  delay(20);
  Serial.println("START");
  WiFi.begin("Asusphone","dancemonkey");
  while(!(WiFi.status()==WL_CONNECTED))
  {
    delay(20);
    Serial.print(".");
  }
  Serial.println("connected");
  Serial.println(WiFi.localIP());

 // Start the server
 server.begin();
 Serial.println("Server started");
}

void loop() {
  // put your main code here, to run repeatedly:
  int LDR = analogRead(ir);
  Serial.println(LDR);
  
  WiFiClient client = server.available();
  if(!client)
  {
    //Serial.
    delay(30);
    return;
  }
  while(!client.available())
  {
    delay(30);
  }
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println("");
  client.println("<!Doctype html>");
  client.println("<meta http-equiv=\"refresh\" content=\"1\">");
  client.println("<p>LDR reading: </p>");
  client.print(LDR);
  client.println("</html>");
  client.println("");
  delay(1);
  
  
//  if(WiFi.status()==WL_CONNECTED)
//  {
//    digitalWrite(2,HIGH);
//    delay(100);
//    digitalWrite(2,LOW);
//    delay(100);
//  }
//  else{
//    digitalWrite(2,LOW);
//  }

}
