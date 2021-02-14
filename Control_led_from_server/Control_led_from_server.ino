#include <ESP8266WiFi.h>
WiFiServer server(80);
int LED = D0;
String clientResponse;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  digitalWrite(LED,HIGH);
  Serial.begin(9600);
  WiFi.disconnect();
  delay(20);
  Serial.println("START");
  WiFi.begin("Asusphone","dancemonkey");
  while(!(WiFi.status()==WL_CONNECTED))
  {
    delay(30);
    Serial.print(".");
  }
  Serial.println("connected");
  Serial.println(WiFi.localIP());
  server.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  WiFiClient client = server.available();
  if(!client)
  {
    delay(30);
    return;
  }
  while(!client.available())
  {
    delay(30);
  }
  clientResponse="";
  clientResponse=client.readStringUntil('/r');
  Serial.println(clientResponse);
  if(clientResponse.indexOf("GET /on5")>=0)
  {
    clientResponse="";
    digitalWrite(LED, LOW);
    Serial.println(clientResponse);
  }
  else if(clientResponse.indexOf("GET /off5")>=0)
  {
    clientResponse="";
    digitalWrite(LED,HIGH); 
  }

    client.println("<HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println("");
    client.println("<!Doctype html>");
//    client.println("<html>");
    client.println("<a href=\"on5\"><button>ON</button></a>");
    client.println("<a href=\"off5\"><button>OFF</button></a>");
    client.println("</html>");
    client.println("");
    delay(1);




  
}
