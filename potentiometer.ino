int buzz=6;
int fade=A4;
void setup() {
  Serial.begin(9600);
pinMode(fade,INPUT);
}

void loop() {
  int fadevalue=analogRead(fade);
  Serial.println(fadevalue);
  analogWrite(buzz,fadevalue);
}
