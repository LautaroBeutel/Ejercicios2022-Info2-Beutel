//**************************************************************//
//  Name    : xxxxxxxxxxxx, xxxxxxxxxxx                         //
//  Author  : Lautaro Beutel                                    //
//  Date    : xx, xx, xx                                        //
//  Version : 1.0                                               //
//  Notes   : Descripcion programa                              //
//          :                                                   //
//****************************************************************


#include <stdio.h>
#include <conio.h>


int main(void){         //principio funcion main
    int opcion;
    do{
        printf("1>Calculadora\t2>Salir\n");
        scanf("%d", &opcion);

        switch (sizeof(opcion))
        {
        case 1: printf("es un char");
            break;
        case 4: printf("es un int");
        default:
            break;
        }
    } while (opcion != 2);
    

    return 0;           //finalizacion exitosa del codigo
}//fin de de la funcion main