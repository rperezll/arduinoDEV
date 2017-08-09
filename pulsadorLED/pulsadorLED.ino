int pulsador = 2;
int led = 3;
int estado= LOW;
 
void setup() {
  // put your setup code here, to run once:
  pinMode(pulsador,INPUT);
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(pulsador)==LOW);
  estado = digitalRead(led);
  digitalWrite(led,!estado);
  while(digitalRead(pulsador)==HIGH);
}
