int v = 4;
int a = 5;
int r = 6;
int v1 = 7;
int a1 = 8;
int r1 = 9;
int t = 5000;
int t1 = 2000;
int t2 = 5000;
int t3 = 2000;
unsigned long ta = 0;
unsigned long tb = 0;
unsigned long tc = 0;
unsigned long td = 0;
bool estado = true;
bool estado1 = true;
void setup(){
  pinMode(v, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(v1, OUTPUT);
  pinMode(a1, OUTPUT);
  pinMode(r1, OUTPUT);
  digitalWrite(v,1);
  digitalWrite(r1,1);
}
void loop(){
  if(millis() >= t + td && estado==true){
    if(estado1 == true){
      estado=false;
      digitalWrite(v,0);
      digitalWrite(a,1);
      
      ta=millis();
    }
  }
  if(millis() >= t1 + ta && estado == false){
    if(estado1 == true){
      estado1 = false;
      digitalWrite(a,0);
      digitalWrite(r,1);
      digitalWrite(v1,1);
      digitalWrite(r1,0);
      tb=millis();
    }
  }
  if(millis() >= t2 + tb && estado1 == false){
    if(estado == false){
      estado = true;
      estado1 = false;
      digitalWrite(v1,0);
      digitalWrite(a1,1);
      tc=millis();
    }
  }
    if(millis() >= t3 + tc && estado == true){
    if(estado1 == false){
      estado = true;
      estado1 = true;
      digitalWrite(a1,0);
      digitalWrite(r1,1);
      digitalWrite(v,1);
      digitalWrite(r,0);
      td=millis();
    }
  }
  delay(1);
}
