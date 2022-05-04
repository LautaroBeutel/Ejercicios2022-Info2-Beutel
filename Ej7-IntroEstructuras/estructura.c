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

    //A) Al miembro apellido de la estructura registroCliente
    printf("%s", "Apellido:\t");
    scanf("%s", registroCliente.apellido);
    printf("%s", registroCliente.apellido);
    //B) Al miembro apellido de la estructura apuntada por ptrCliente
    printf("%s", "\nApellido:\t");
    scanf("%s", ptrCliente->apellido);
    printf("%s", ptrCliente->apellido);
    //C) Al miembro nombre de la estructura registroCliente.
    printf("%s", "\n\nNombre:\t");
    scanf("%s", registroCliente.nombre);
    printf("%s", registroCliente.nombre);
    //D) Al miembro nombre de la estructura apuntada por ptrCliente
    printf("%s", "\nNombre:\t");
    scanf("%s", ptrCliente->nombre);
    printf("%s", ptrCliente->nombre);
    //E Al miembro numeroCliente de la estructura registroCliente.
    printf("%s", "\n\nNum_Cliente:\t");
    scanf("%d", registroCliente.numerocliente);
    printf("%d", registroCliente.numerocliente);


    return 0;           //finalizacion exitosa del codigo
}//fin de de la funcion main