long tiempo1=0;
long tiempo2=0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
 tiempo1 = millis(); 
  if((tiempo1-tiempo2)>2000){
    tiempo2=tiempo1;
Serial.println("timer activado");    
}
}
