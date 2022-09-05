#include <iostream>

using namespace std;

#define FLOTANTE
//#define ENTERO

template <class x>
x f(x a, x b);

int main(){
#ifdef FLOTANTE
    float a = 4.5;
    float b = 3.5; 
#endif
#ifdef ENTERO
    int a = 3;
    int b = 5;
#endif
    //f(a, b);

    cout << "el menor es\t" << f(a, b) << endl;
    return 0; 
}

template <class x>
x f(x a, x  b){
	//cout << "numero_1: "<< a << "\tnumero_2: " << b << endl;
	if(a < b){
        	return a;
    	}
    	else
    	{
        	return b;
    	}
}
