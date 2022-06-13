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

float R_Comercial[] = {1,        1.2,     1.5,     1.8,     2.2,     2.7,     3.3,     3.9,     4.7,     5.1,     5.6,     6.8,     8.2,
                        10,      12,      15,      18,      22,      27,      33,      39,      47,      51,      56,      68,      82,
                        100,     120,     150,     180,     220,     270,     330,     390,     470,     510,     560,     680,     820,
                        1000,    1200,    1500,    1800,    2200,    2700,    3300,    3900,    4700,    5100,    5600,    6800,    8200,
                        10000,   12000,   15000,   18000,   22000,   27000,   33000,   39000,   47000,   51000,   56000,   68000,   82000,
                        100000,  120000,  150000,  180000,  220000,  270000,  330000,  390000,  470000,  510000,  560000,  680000,  820000,
                        1000000, 1200000, 1500000, 1800000, 2200000, 2700000, 3300000, 3900000, 4700000, 5100000, 5600000, 6800000, 8200000,
                        10000000};

float ordenar(float vlr[], int leght, int numeronuevo){
    float j = numeronuevo;
    float Buffer[leght];
    for (int i = 0; i <= leght; i++)
    {
        Buffer[i] = R_Comercial[i];
    }

    Buffer[leght] = j;

    for (int i = 0; i < leght+1; i++)
    {
        for (int j = i+1; j < leght+1; j++)
        {
            if (Buffer[j] < Buffer[i])
            {
                float temp = Buffer[i];
                Buffer[i] = Buffer[j];
                Buffer[j] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < leght+1; i++)
    {
        if (Buffer[i] == j)
        {   float ikj = Buffer[i-1];
            return ikj;
        }
        
    } 

}

int main(void){         //principio funcion main
    float numero = ordenar(R_Comercial, sizeof(R_Comercial)/sizeof(float), 40);

    printf("%f", numero);

    return 0;           //finalizacion exitosa del codigo
}//fin de de la funcion main