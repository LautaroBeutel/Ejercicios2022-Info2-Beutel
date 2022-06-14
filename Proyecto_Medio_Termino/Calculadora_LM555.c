//**************************************************************************//
//  Name    : Calculadora_LM555                                             //
//  Author  : Lautaro Beutel                                                //
//  Date    : 25/05/2022                                                    //
//  Version : 2.0                                                           //
//  Notes   : Este programa calcula la frecuencia del circuito y tambien    //
//          : calcula los componentes necesarios para tener una frecuencia  //
//          : deseada                                                       //
//**************************************************************************//

#include <stdio.h>
#include <stdlib.h>

//estructura de tipo componentes que contiene todos los datos ingresados
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
void Calculo_Resistencia(Comp *Val);
void Ciclo_Trabajo(Comp *Val);
void Pedir_valores(Comp *Val);
float Valor_comercial(float vlr[], int leght, float numeronuevo);

//variables necesarias para el calculo
const float K = 1.44;
const float LOG_N_2 = 0.69314;

//Array de valores comerciales de resistencias. se necesita para el calculo de resistencias
float R_Comercial[] = {1,        1.2,     1.5,     1.8,     2.2,     2.7,     3.3,     3.9,     4.7,     5.1,     5.6,     6.8,     8.2,
                        10,      12,      15,      18,      22,      27,      33,      39,      47,      51,      56,      68,      82,
                        100,     120,     150,     180,     220,     270,     330,     390,     470,     510,     560,     680,     820,
                        1000,    1200,    1500,    1800,    2200,    2700,    3300,    3900,    4700,    5100,    5600,    6800,    8200,
                        10000,   12000,   15000,   18000,   22000,   27000,   33000,   39000,   47000,   51000,   56000,   68000,   82000,
                        100000,  120000,  150000,  180000,  220000,  270000,  330000,  390000,  470000,  510000,  560000,  680000,  820000,
                        1000000, 1200000, 1500000, 1800000, 2200000, 2700000, 3300000, 3900000, 4700000, 5100000, 5600000, 6800000, 8200000,
                        10000000};

int main(void){         //principio funcion main
    Comp Val = {0, 0, 0, 0, 0, 0};

    /*Menu de opciones, se ingresa 1 para usar la calculadora y un 2 para salir*/
    int opcion;
    do{
        printf("\n%s\n", "----------------------CALCULADORA 555-----------------------");   //Mensaje de titulo
        printf("\n\t1>Calculadora\n\t2>Salir\n>>");
        scanf("%d", &opcion);

        switch (opcion){
            case 1: Pedir_valores(&Val);
                    switch (Val.bandera){       //caso 1 se solicito calcular frecuencia, caso 2 se solicita calculo de componentes del circuito
                        case 1: Calculo_Frecuencia(&Val);
                                Ciclo_Trabajo(&Val);
                                printf(">>Freq:\t%fHz\n", Val.Freq);
                                printf(">>Ciclo util:\t%0.f%c\n", Val.Duty * 100, 37);
                            break;
                        case 2: Calculo_Resistencia(&Val);
                                printf(">>R1:\t%f\n", Val.R1);
                                printf(">>R2:\t%f\n", Val.R2);
                            break;
                        default: printf("\nNo deberias poder leer esto");       //nunca deberia parar esto
                            break;
                    }
                break;
            
            case 2: printf("saliendo");
                break;

            default:printf("\nopcion no definida\n");
                break;
        }
    } while (opcion != 2);      //Se repite el clico "menu" siempre y cuando opcion sea distinta de 2
    /*Fin del menu de opciones y finalizacion del programa*/

    return 0;           //finalizacion exitosa del codigo
}//fin de de la funcion main

void Pedir_valores(Comp *Val){           //funcion que pide informacion al usuario y almacena lo que se quiere calcular en "bandera"
    int index_a;
    do{
        printf("Que desea saber? (presione 3 una vez ingresado los datos):\n\n\t1>Frecuencia\n\t2>Componentes\n\t3>Calcular\n>>");
        scanf("%d", &index_a);

        switch (index_a){
            case 1: printf("%s\n", "Ingrese valores de R1, R2 y C (en su unidad)");
                    printf("\tR1:");scanf("%f", &Val->R1);
                    printf("\n\tR2:");scanf("%f", &Val->R2);
                    printf("\n\tC1:");scanf("%f", &Val->C1);
                    (*Val).bandera = 1;
                break;

            case 2: printf("\nIngrese la Frecuencia deseada y un valor de Capacitor\n");
                    printf("\n\tFreq:");scanf("%f", &Val->Freq);
                    printf("\n\tC1:");scanf("%f", &Val->C1);
                    (*Val).bandera = 2;
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

void Calculo_Resistencia(Comp *Val){             //funcion que calcula R1
    float RT, T;
    //formula magica
    T = (1 / (*Val).Freq);
    RT = (T / (LOG_N_2 * (*Val).C1));
    (*Val).R2 = Valor_comercial(R_Comercial, sizeof(R_Comercial)/sizeof(float), RT/2);
    (*Val).R1 = (RT - (2 * (*Val).R2));
    (*Val).R1 = Valor_comercial(R_Comercial, sizeof(R_Comercial)/sizeof(float), (*Val).R1);
    return;     //funcion finalizada
}

float Valor_comercial(float vlr[], int leght, float numeronuevo){           //Funcion que devuelve el valor comercial de Resistencia mas cercano y menor al ingresado

    float Buffer[leght];    //se crea un array en cual se iguala a R_comercial, esto es para no modificar los elementos de R_comercial
    for (int i = 0; i <= leght; i++){
        Buffer[i] = R_Comercial[i];
    }

    Buffer[leght] = numeronuevo;       //se le agrega un nuevo elemento a arreglo y se ordenan todos los elementos de menor a mayor

    for (int i = 0; i < leght+1; i++){
        for (int j = i+1; j < leght+1; j++){
            if (Buffer[j] < Buffer[i]){
                float temp = Buffer[i];
                Buffer[i] = Buffer[j];
                Buffer[j] = temp;
            }   
        }
    }
    
    for (int i = 0; i < leght+1; i++){      //se recorre todo el array hasta encontrar el elemento nuevo y se devuelve 
        if (Buffer[i] == numeronuevo){      //el elemento anterior a este, el cual va a ser el valor comercial de resistencia
            float index = Buffer[i-1];      // mas cercano anterior
            return index;
        }  
    } 
}

void Ciclo_Trabajo(Comp *Val){              //funcion que calcula el ciclo util de la onda cuadrada, el ciclo util es el porcentaje
                                            //de tiempo en el que la señal esta en un estado alto sobre el tiempo en el que esta en un estado bajo
    //formula magica
    (*Val).Duty = ((*Val).R1 + (*Val).R2)/((*Val).R1 + 2*(*Val).R2);

    return;
}
