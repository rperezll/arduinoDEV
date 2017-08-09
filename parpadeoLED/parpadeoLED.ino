//Parpadeo de LED

const int led = 2;

void setup() {
  pinMode(led, OUTPUT);
  digitalWrite(led,LOW);
}

void loop() {
  digitalWrite(led,HIGH);
  delay(250);
  digitalWrite(led,LOW);
  delay(250);

}
