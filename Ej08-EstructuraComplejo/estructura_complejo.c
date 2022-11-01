/* nombre: ~Lautaro Beutel~
 *  email: ~lautarob52@gmail.com~
 *  fecha: ~xx-xx-xxxx~
 */ 


#include <stdio.h>

struct estructura_complejo
{
    float Real;
    float Imaginario;
};



int main(void){         //principio funcion main
    struct estructura_complejo x = {1.3, -2.2};
    
    int *px;
    px = &x;

    struct estructura_complejo cx[100];
    
    cx[17].Real=0;
    cx[17].Imaginario=0;

    return 0;           //finalizacion exitosa del codigo
}//fin de de la funcion main