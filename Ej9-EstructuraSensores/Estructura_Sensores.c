/* nombre: ~Lautaro Beutel~
 *  email: ~lautarob52@gmail.com~
 *  fecha: ~xx-xx-xxxx~
 */ 


#include <stdio.h>

typedef struct sensores{
    char sensor;            //1 byte
    int sensor_val;         //4 bytes
    unsigned long TX;       //4 bytes
}sensor;

int main(void){         //principio funcion main
    sensor variable;

    printf("%d + %d + %d = %d",sizeof(char), sizeof(int), sizeof(unsigned long), sizeof(variable));


    return 0;           //finalizacion exitosa del codigo
}//fin de de la funcion main

