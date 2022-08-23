void setup() {
  pinMode(6,OUTPUT);
}
int x;
void loop() {
  x=analogRead(A0)/4;
  analogWrite(6,x);
}
