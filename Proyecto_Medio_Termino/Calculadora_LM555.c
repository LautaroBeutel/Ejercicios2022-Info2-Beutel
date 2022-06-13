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
#include <stdlib.h>
#include <conio.h>

typedef struct Componentes{ 
    float R1;
    float R2;
    float C1;
    float Freq;
    float Duty;
    short int bandera
}Comp;

/*Constructores de las funciones*/
void Calculo_Frecuencia(Comp *Val);
void Calculo_R1(Comp *Val);
void Calculo_R2(Comp *Val);
void Calculo_C1(Comp *Val);
void Ciclo_Trabajo(Comp *Val);
void Pedir_valores(Comp *Val);

const float K = 1.44;

int main(void){         //principio funcion main
    printf("\n%s\n", "----------------------CALCULADORA 555-----------------------");   //Mensaje de titulo
    Comp Val = {0, 0, 0, 0, 0, 0};

    /*Menu de opciones, se ingresa 1 para usar la calculadora y un 2 para salir*/
    int opcion;
    do{
        printf("\n\t1>Calculadora\n\t2>Salir\n>>");
        scanf("%d", &opcion);

        switch (opcion){
            case 1: Pedir_valores(&Val);
                    switch (Val.bandera){
                        case 1: Calculo_Frecuencia(&Val);
                                Ciclo_Trabajo(&Val);
                                printf(">>Freq:\t%f\n", Val.Freq);
                                printf(">>Ciclo util:\t%0.f%c\n", Val.Duty * 100, 37);
                            break;
                        case 2: Calculo_R1(&Val);
                                printf(">>R1:\t%f\n", Val.R1);
                            break;
                        case 3: Calculo_R2(&Val);
                                printf(">>R2:\t%f\n", Val.R2);
                            break;
                        case 4: Calculo_C1(&Val);
                                printf(">>C1:\t%f\n", Val.C1);
                            break;
                    }
                break;
            
            case 2: printf("saliendo");
                break;

            default:printf("\nopcion no definida\n");
                break;
        }
    } while (opcion != 2);
    /*Fin del menu de opciones y finalizacion del programa*/

    return 0;           //finalizacion exitosa del codigo
}//fin de de la funcion main

void Pedir_valores(Comp *Val){           //funcion que pide informacion al usuario y almacena lo que se quiere calcular en "bandera"
    int index_a;
    int index_b;
    do{
        printf("Que desea hacer? (presione 3 una vez ingresado los datos):\n\n\t1>Frecuencia\n\t2>Componentes\n\t3>Calcular\n>>");
        scanf("%d", &index_a);

        switch (index_a){
            case 1: printf("%s\n", "ingrese valores de R1, R2 y C (en su unidad)");
                    printf("\tR1:");scanf("%f", &Val->R1);
                    printf("\n\tR2:");scanf("%f", &Val->R2);
                    printf("\n\tC1:");scanf("%f", &Val->C1);
                    (*Val).bandera = 1;
                break;

            case 2: printf("\n\t1>calcular R1\n\t2>calcular R2\n\t3>calcular C1\n");
                    scanf("%d", &index_b);
                    switch (index_b){
                        case 1: printf("%s\n", "ingrese valores de Freq, R2 y C (en su unidad)");

                                printf("\tFreq:");scanf("%f", &Val->Freq);
                                printf("\n\tR2:");scanf("%f", &Val->R2);
                                printf("\n\tC1:");scanf("%f", &Val->C1);
                                (*Val).bandera = 2;

                            break;
                        case 2: printf("%s\n", "ingrese valores de Freq, R1 y C (en su unidad)");

                                printf("\tFreq:");scanf("%f", &Val->Freq);
                                printf("\n\tR1:");scanf("%f", &Val->R1);
                                printf("\n\tC1:");scanf("%f", &Val->C1);
                                (*Val).bandera = 3;

                            break;
                        case 3: printf("%s\n", "ingrese valores de Freq, R1 y R2 (en su unidad)");

                                printf("\tFreq:");scanf("%f", &Val->Freq);
                                printf("\n\tR1:");scanf("%f", &Val->R1);
                                printf("\n\tR2:");scanf("%f", &Val->R2);
                                (*Val).bandera = 4;

                            break;
                        default:
                            printf("\nopcion no definida\n");
                            break;
                }
                break;

            case 3: printf("\ncalculando...\n");
                break;

            default:printf("\nopcion no definida\n");
                break;
        }
    } while (index_a != 3);
    return;
}

/*Funciones que realizan los calculos para cada tarea*/

void Calculo_Frecuencia(Comp *Val){      //funcion que realiza el calculo de la frecuencia segun el datasheet del LM555_Fairchild

    //formula magica
    float Vel_carga = (((*Val).R1 + (2 * (*Val).R2)) * (*Val).C1);
    
    (*Val).Freq = K / Vel_carga;

    return;     //funcion finalizada
}

void Calculo_R1(Comp *Val){             //funcion que calcula R1

    //formula magica
    (*Val).R1 = (K / (*Val).C1)-(2 * (*Val).Freq * (*Val).R2) / (*Val).Freq;

    return;     //funcion finalizada
}

void Calculo_R2(Comp *Val){             //funcion que calcula R2

    //formula magica
    (*Val).R2 = ((K / (*Val).C1)-((*Val).Freq * (*Val).R1)) / (2 * (*Val).Freq);

    return;     //funcion finalizada
}

void Calculo_C1(Comp *Val){             //funcion que calcula C1

    //formula magica
    printf("r3");

    return;     //funcion finalizada
}

void Ciclo_Trabajo(Comp *Val){

    //formula magica
    (*Val).Duty = ((*Val).R1 + (*Val).R2)/((*Val).R1 + 2*(*Val).R2);

    return;
}
//