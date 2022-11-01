#include <iostream>
#include "Perecedero.h"
#include "NoPerecedero.h"

int main(){
	Perecedero heladera("heladera", 22000, 1);

	heladera.getterPerecedero();
	heladera.calcularPerecedero(2);

	return 0;
}
