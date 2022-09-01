#include <iostream>

using namespace std;

//#define FLOTANTE
#define ENTERO

template <class x>
x f(x a, x b);

int main(){
#ifdef FLOTANTE
    float a = 4.5;
    float b = 3.5;

    cout << "el menor es" << f(a, b); 
#endif
#ifdef ENTERO
    int a = 3;
    int b = 5;

    cout << "el menor es" << f(a, b);
#endif
    return 0; 
}

template <class x>
x min(x a, x b){
    if(a < b){
        return a;
    }
    else
    {
        return b;
    }
}