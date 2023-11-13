void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int level = analogRead(A0);
  float volts = level * (5.0 / 1023);
  Serial.println(volts);
  delay(1);
}
