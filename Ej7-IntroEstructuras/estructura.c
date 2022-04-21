/* nombre: ~Lautaro Beutel~
 *  email: ~lautarob52@gmail.com~
 *  fecha: ~20-04-2022~
 */ 

//ejercicio 7: escriba una expresión que pueda utilizarse para acceder a los miembros de la estructura en 
//cada una de las siguientes partes


#include <stdio.h>

struct cliente{
    char apellido[15];
    char nombre[15];
    int numerocliente;
    struct 
    {
        char numerotelefonico[11];
        char direccion[50];
        char ciudad[15];
        char estado[3];
        char codigoPostal[6];
    }personal;
} registroCliente, *ptrCliente;


int main(void){         //principio funcion main

    ptrCliente = &registroCliente;
    struct cliente alumno_1;

    //a) Al miembro apellido de la estructura registroCliente
    ptrCliente.apellido="a";
    printf("%c", ptrCliente->apellido);
 
    return 0;           //finalizacion exitosa del codigo
}//fin de de la funcion main