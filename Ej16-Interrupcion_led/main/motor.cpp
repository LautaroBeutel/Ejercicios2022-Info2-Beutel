#include "motor.h"



motor_pap::motor_pap(int pin_a, int pin_b, int pin_c, int pin_d){
  bobina_A = pin_a;
  bobina_B = pin_b;
  bobina_C = pin_c;
  bobina_D = pin_d;
}

motor_pap::init(){
  pinMode(bobina_A,OUTPUT);
  pinMode(bobina_B,OUTPUT);
  pinMode(bobina_C,OUTPUT);
  pinMode(bobina_D,OUTPUT);
}

void motor_pap::una_bobina(bool direccion, int tiempo){
  //dereicha
  if(direccionn == 0)
  {  
    digitalWrite(bobina_A,HIGH);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,HIGH);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,HIGH);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,HIGH);
    delayMicroseconds(tiempo);
  }
  //izquierdan
  //IZQUIERDA
  if(direccionn == 1)
  {  
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,HIGH);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,HIGH);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,HIGH);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,HIGH);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
  }

}

void motor_pap::dos_bobinas(bool direccion, int tiempo){
      //DERECHA
  if(direccionn == 0)
  {  
    digitalWrite(bobina_A,HIGH);
    digitalWrite(bobina_B,HIGH);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,HIGH);
    digitalWrite(bobina_C,HIGH);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,HIGH);
    digitalWrite(bobina_D,HIGH);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,HIGH);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,HIGH);
    delayMicroseconds(tiempo);
  }
     //IZQUIERDA
  if(direccionn == 1)
  {  
    digitalWrite(bobina_A,HIGH);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,HIGH);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,HIGH);
    digitalWrite(bobina_D,HIGH);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,HIGH);
    digitalWrite(bobina_C,HIGH);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,HIGH);
    digitalWrite(bobina_B,HIGH);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
  }
}

void motor_pap::medio_paso(bool direccion, int tiempo){
  //DERECHA
  if(direccionn == 0)
  {  
    digitalWrite(bobina_A,HIGH);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,HIGH);
    digitalWrite(bobina_B,HIGH);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,HIGH);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,HIGH);
    digitalWrite(bobina_C,HIGH);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,HIGH);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,HIGH);
    digitalWrite(bobina_D,HIGH);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,HIGH);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,HIGH);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,HIGH);
    delayMicroseconds(tiempo);
  }
     //IZQUIERDA
  if(direccionn == 1)
  {  
    digitalWrite(bobina_A,HIGH);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,HIGH);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,HIGH);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,HIGH);
    digitalWrite(bobina_D,HIGH);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,HIGH);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,HIGH);
    digitalWrite(bobina_C,HIGH);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,LOW);
    digitalWrite(bobina_B,HIGH);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,HIGH);
    digitalWrite(bobina_B,HIGH);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
    digitalWrite(bobina_A,HIGH);
    digitalWrite(bobina_B,LOW);
    digitalWrite(bobina_C,LOW);
    digitalWrite(bobina_D,LOW);
    delayMicroseconds(tiempo);
  } 
}
