#include <iostream>
#include "Futbolista.h"

using namespace std;

futbolista::futbolista(string nombre, string apellido, int numCamisa)
	:persona(nombre, apellido){	
		
		this->numCamisa = numCamisa;
}

void futbolista::futbolprint(){
	stdprint();
	cout << "num camisa:" << this->numCamisa << endl;
} 
