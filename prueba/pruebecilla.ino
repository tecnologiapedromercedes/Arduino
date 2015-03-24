//Barrera de Parking.

#include <Servo.h>
int led1v=6, led1r=2,led2v=7,led2r=3,led3v=8,led3r=4,led4v=9,led4r=5; //Declaramos los leds de indicacion
int ldrPin0=A0; // declaramos las ldr de entrada
int ldrPin1=A1; // declaramos las ldr de entrada
int ldrPin2=A2; // declaramos las ldr de entrada
int ldrPin3=A3; // declaramos las ldr de entrada
int ldrPin4=A4; // declaramos las ldr de entrada
int potPin=A5; // declaramos la entrada del potenciometro.

Servo barrera; //Creamos un objeto tipo servo
int coches=0; //numero de coches dentro


void setup() {
  Serial.begin(9600);
  
pinMode(led1v, OUTPUT);
pinMode(led1r, OUTPUT);
pinMode(led2v, OUTPUT);
pinMode(led2r, OUTPUT);
pinMode(led3v, OUTPUT);
pinMode(led3r, OUTPUT);
pinMode(led4v, OUTPUT);
pinMode(led4r, OUTPUT);


barrera.attach(11);
barrera.write(115);
}


void loop() {
  int ldrValue0=analogRead(ldrPin0);
  int ldrValue1=analogRead(ldrPin1);
  int ldrValue2=analogRead(ldrPin2);
  int ldrValue3=analogRead(ldrPin3);
  int ldrValue4=analogRead(ldrPin4);
  
  int threshold=analogRead(potPin);
  
  Serial.println(threshold);
  
  



if(ldrValue0>threshold){
  
  barrera.write(25);//sube barrera
    delay(8000);
   
  }
  else{
    barrera.write(115);//baja barrera
    delay(3000);
  }
  
  if(ldrValue1>threshold){
  
  digitalWrite(led1v,LOW);
  digitalWrite(led1r,HIGH);
    
   
  }
  else{
    
    digitalWrite(led1v,HIGH);
    digitalWrite(led1r,LOW);
    
  }
  
  if(ldrValue2>threshold){
  
  digitalWrite(led2v,LOW);
  digitalWrite(led2r,HIGH);
    
   
  }
  else{
    
    digitalWrite(led2v,HIGH);
    digitalWrite(led2r,LOW);
    
  }
  
  
  if(ldrValue3>threshold){
  
  digitalWrite(led3v,LOW);
  digitalWrite(led3r,HIGH);
    
   
  }
  else{
    
    digitalWrite(led3v,HIGH);
    digitalWrite(led3r,LOW);
    
  }
  
  
  if(ldrValue4>threshold){
  
  digitalWrite(led4v,LOW);
  digitalWrite(led4r,HIGH);
    
   
  }
  else{
    
    digitalWrite(led4v,HIGH);
    digitalWrite(led4r,LOW);
    
  }
  
  
  
  
  
}
  






