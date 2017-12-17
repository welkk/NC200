void setup(){
  pinMode(5, INPUT);
  Serial.begin(9600);
}

void loop(){
  delay(250);
  if (digitalRead(5) == HIGH) Serial.println("OCCUPIED");
  else Serial.println("EMPTY");
  delay(250);
}
