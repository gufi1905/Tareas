//Punto 1
void setup()
{
  Serial.begin(9600);
}

void loop()
{
long tiempo = millis(); 
  Serial.println(tiempo);
  delay(1000);
}
