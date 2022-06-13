//**************************************************************//
//  Name    : xxxxxxxxxxxx, xxxxxxxxxxx                         //
//  Author  : Lautaro Beutel                                    //
//  Date    : xx, xx, xx                                        //
//  Version : 1.0                                               //
//  Notes   : Descripcion programa                              //
//          :                                                   //
//****************************************************************


#include <Arduino.h>


void setup(){
  Serial.begin(9600);

}

char str[] = {'a', 's', 'd'};
int i = 0;

void loop(){
  while (Serial.availableForWrite())
  {
    Serial.println(str[i]);
    delay(1000);
    i++;
    i %= 3;
  }
}