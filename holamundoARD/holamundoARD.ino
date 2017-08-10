//Hola mundo: Parpadeo LED

void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);
  delay(5000); //5000 ms = 5s 
  digitalWrite(13,LOW);
  delay(5000);
}
