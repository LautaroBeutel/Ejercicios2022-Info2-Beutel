#include <iostream>
#include "herenciaAcc.h"

herenciaAcc::herenciaAcc(double gx, double gy, double gz, int num_medicion)
	:acelerometro(gx, gy, gz){
		this->num_medicion = num_medicion;
	}

void herenciaAcc::getterHerencia(){
	this->getter();
	std::cout << "num medicion: " << this->num_medicion << std::endl;
}
