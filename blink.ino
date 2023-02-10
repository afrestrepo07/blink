int ledrojo =3;
int ledamarillo =13;
int tpoencendido =300;
int tpoapagado =200;

void setup() {
  // put your setup code here, to run once:
pinMode(ledrojo,OUTPUT);
pinMode(ledamarillo,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledamarillo,HIGH);
delay(tpoencendido);
digitalWrite(ledamarillo,LOW);
delay(tpoapagado);

digitalWrite(ledrojo,HIGH);
delay(tpoencendido);
digitalWrite(ledrojo,LOW);
delay(tpoapagado);
}
