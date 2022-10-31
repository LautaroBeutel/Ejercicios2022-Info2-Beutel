#include <iostream>
#include "Empleado.h"

using namespace std;

int main(){
	Repartidor juan("juan", 25, 17045, 4);
	Comercial carlos("carlos", 30, 5000, (double)25000);

	juan.getterRepartidor();
	carlos.getterComercial();

	cout << endl;

	carlos.plus();
	juan.plus();

	juan.getterRepartidor();
	carlos.getterComercial();
	return 0;
}
