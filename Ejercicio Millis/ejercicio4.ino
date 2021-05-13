long tiempo1=0;
long tiempo2=0;
long tiempo3=0;
int led=4;
int led2=3;
bool estado1=false;
bool estado2=false;

void setup()
{
 Serial.begin(9600);
 pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
 tiempo1 = millis();
  if((tiempo1-tiempo2)>2000){
    tiempo2=tiempo1;
    if(estado1==true){
      estado1=false;
    }
    else{
      estado1=true;
    }


  }
    if((tiempo1-tiempo3)>1000){
    tiempo3=tiempo1;
 if(estado2==true){
      estado2=false;
    }
    else{
      estado2=true;
    }
    }
 
  digitalWrite(led, estado1);
  digitalWrite(led2, estado2);

}
