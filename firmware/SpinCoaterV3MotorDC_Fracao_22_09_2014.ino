long tmp = 0;
#define Mpin 5

void setup(){
 Serial.begin(9600);
 pinMode(Mpin,OUTPUT);
 digitalWrite(Mpin,LOW);
}
void Inicializar(){
  bool Ini = true;
  while(Ini){
    while(!Serial.available()){;}
    char entrada = Serial.read();
    if(entrada == 'S'){
      Ini = false;
      }
  }
  while(!Serial.available()){;}
    tmp = long(Serial.parseInt());
}
void Calc(){ 
  tmp = tmp*1;
  delay(1000);
}
void Spinnig(){
   digitalWrite(Mpin,HIGH);
   Serial.print(tmp);
   Serial.print("GIRO");
   delay(tmp);
}
void Finalizar(){
  digitalWrite(Mpin,LOW);
  Serial.print("FIM");
  tmp = 0;
}
void loop(){
  Inicializar();
  Calc();
  Spinnig();
  Finalizar();
}
