long tiempo1=0;
long tiempo2=0;
int led=7;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
 tiempo1 = millis(); 
  if((tiempo1-tiempo2)>2000){
    digitalWrite(led, LOW);
    tiempo2=tiempo1;
digitalWrite(led, HIGH);  
    
}
}
