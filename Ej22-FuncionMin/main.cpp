#include <iostream>
using namespace std;

//#define INT
#define FLOAT

void funcion(int *a, int *b, int *m);
void funcion(float *a, float *b, float *m);

int main(){
#ifdef INT
    int a = 5;
    int b = 8;
    int Min;
#endif
#ifdef FLOAT
    float a = 4.5;
    float b = 6.8;
    float Min;
#endif
    funcion(&a, &b, &Min);
    cout << "Menor:\t" << Min << "\n";

    return 0;
}

void funcion(int *a, int *b, int *m){
    if ((*a)<(*b))
    {
        (*m) = (*a);
    }
    else{
        (*m) = (*b);
    }
}

void funcion(float *a, float *b, float *m){
    if ((*a)<(*b))
    {
        (*m) = (*a);
    }
    else{
        (*m) = (*b);
    }
}