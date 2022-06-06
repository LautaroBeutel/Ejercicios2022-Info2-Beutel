//**************************************************************************//
//  Name    : Calculadora_LM555                                             //
//  Author  : Lautaro Beutel                                                //
//  Date    : 25/05/2022                                                    //
//  Version : 1.0                                                           //
//  Notes   : Este programa esta diseñado para calcular la frecuencia       //
//          : que se obtendria a la salida del integrado con los valores    //
//          : de los componentes seleccionados                              //
//**************************************************************************//

#include <stdio.h>

typedef struct Componentes{ 
    float R1;
    float R2;
    float C1;

    float Freq
}Comp;

/*Constructores de las funciones*/
void Calculo_Frecuencia(Comp *Val);
void Pedir_valores(Comp *Val);


int main(void){         //principio f*uncion main
    Comp Val;

    Pedir_valores(&Val);    //llamada a la funcion Pedir_valores y se le pasa como arumento la direccion de la estructura Val de tipo Comp
    
    Calculo_Frecuencia(&Val);   //llamada a la funcion Calculo_Frecuencia y se le pasa como argumento la direccion de la estructura Val de tipoComp

    printf("\nLa frecuencia es %f Hz", Val.Freq);

    return 0;           //finalizacion exitosa del codigo
}//fin de de la funcion main

void Pedir_valores(Comp *Val){           //funcion que solicita los valores de los componentes
    printf("\n%s\n", "----------------------CALCULADORA 555-----------------------");
    printf("%s\n", "ingrese valores de R1, R2 y C (en su unidad)");
    printf("\tR1:");scanf("%f", &Val->R1);
    printf("\n\tR2:");scanf("%f", &Val->R2);
    printf("\n\tC1:");scanf("%f", &Val->C1);

    return;     //funcion finalizada
}

void Calculo_Frecuencia(Comp *Val){      //funcion que realiza el calculo de la frecuencia segun el datasheet del LM555_Fairchild
    const float C = 1.44;

    float Vel_carga = (((*Val).R1 + (2 * (*Val).R2)) * (*Val).C1);
    
    (*Val).Freq = C / Vel_carga;

    return;     //funcion finalizada
}