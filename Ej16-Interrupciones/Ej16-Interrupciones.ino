void setup()
{
  pinMode(4, OUTPUT);//LED1
  pinMode(5, OUTPUT);//LED2
  pinMode(6, OUTPUT);//LED3
  attachInterrupt(digitalPinToInterrupt(2), incremento, RISING); //configuracion interrupcion
  attachInterrupt(digitalPinToInterrupt(3), decremento, RISING); //configuracion interrupcion
}
int x=1;

void incremento(){ //funcion para incrementar x
  if(x>3){
   x=1; 
  }
  else(x++); 
}
void decremento(){ //funcion para decrementar x
  if(x<1){
   x=3; 
  }
 else(x--); 
}


void loop()
{
  if(x==1){
     digitalWrite(4, HIGH);
     digitalWrite(5, LOW);
     digitalWrite(6, LOW);
  }
  if(x==2){
     digitalWrite(4, LOW);
     digitalWrite(5, HIGH);
     digitalWrite(6, LOW);
  }
  if(x==3){
     digitalWrite(4, LOW);
     digitalWrite(5, LOW);
     digitalWrite(6, HIGH);
  } 
}