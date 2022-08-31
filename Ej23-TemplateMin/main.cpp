#include <iostream>

using namespace std;

#define FLOTANTE
//#define ENTERO

template <class num>
num min(num _a, num _b);

int main(){
#ifdef FLOTANTE
    float a = 4.5;
    float b = 3.5;

    cout << "el menor es" << min(a, b); 
#endif
#ifdef ENTERO
    int a = 3;
    int b = 5;

    cout << "el menor es" << min(a, b);
#endif
    return 0;
}

template <class num>
num min(num _a, num _b){
    if(_a < _){
        return _a;
    }
    else
    {
        return _b;
    }
}
