/*  nombre: ~Lautaro Beutel~
 *  email: ~lautarob52@gmail.com~
 *  fecha: ~30-03-2022~
 */


//calculo promedio
#include <stdio.h>
#include <stdint.h>

int32_t dato = 0;   //dato ingresado
float suma = 0;     //sumatoria de datos
int32_t n=0;        //cantidad de datos

/*inicio funcion main()*/
int main(void){
    while (1)       //bucle infinito 
    {
        printf(">>");           //cursor 
        scanf("%d", &dato);     //ingreso de datos
        printf("\n");           //bajar linea

        if (dato != 9999)   //si el dato es distinto de 9999...
        {   
            n++;                //cantidad de datos aumenta    
            suma = suma + dato; //se suma al total
            dato=0;             
        }
        else{               //si el dato es 9999
            float promedio = suma / n;  //se realiza el promedio
            printf("%f", promedio);     //se imprime el valor obtenido
            break;          //se sale del while
        }
    }


    return 0;       //finaliza el programa con exito    
}/*fin funcion main()*/