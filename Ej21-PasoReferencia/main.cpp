#include <iostream>
using namespace std;

//#define PASO_REFERENCIA
#define PASO_VALOR

void paso_referencia(int *a);
int paso_valor(int a);

int main(){
    int cuenta = 5;
#ifdef PASO_REFERENCIA
    paso_referencia(&cuenta);
#endif
#ifdef PASO_VALOR
    cuenta = paso_valor(cuenta);
#endif

    cout << "valor:\t" << cuenta << "\n";

    return 0;
}

void paso_referencia(int *a){
    (*a) = (*a) * 3; 
}

int paso_valor(int a){
    return a*3;
}