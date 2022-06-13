//**************************************************************//
//  Name    : xxxxxxxxxxxx, xxxxxxxxxxx                         //
//  Author  : Lautaro Beutel                                    //
//  Date    : xx, xx, xx                                        //
//  Version : 1.0                                               //
//  Notes   : Descripcion programa                              //
//          :                                                   //
//****************************************************************


#include <Arduino.h>


#define GPIO_LED_VERDE 5
#define GPIO_LED_AMARILLO 6
#define GPIO_LED_ROJO 7

void toggle(uint8_t gpio){
  digitalWrite(gpio, !digitalRead(gpio));
}

void setup(){
  // Inicializa el puerto serie (UART) a 9600 bps.
    Serial.begin(9600);
    // inicialización de los pines GPIO como salida para los LEDs.
    pinMode(GPIO_LED_VERDE, OUTPUT);
    pinMode(GPIO_LED_AMARILLO, OUTPUT);
    pinMode(GPIO_LED_ROJO, OUTPUT);
}

void loop(){
  size_t n;
  uint8_t letra[1];

  // Lee la letra (1 byte ) por puerto serie.
  n = Serial.readBytes(letra, 1);
  if(n == 1) {
    switch ( letra [0]) {
        case 'a':
            toggle(GPIO_LED_VERDE);
            break;
        case 's':
            toggle(GPIO_LED_AMARILLO);
            break;
        case 'd':
            toggle(GPIO_LED_ROJO);
            break;
        case 'w':
          toggle(GPIO_LED_AMARILLO);
          toggle(GPIO_LED_ROJO);
          toggle(GPIO_LED_VERDE);
        break;
    }
  }
}