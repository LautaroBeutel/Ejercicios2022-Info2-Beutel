#include <iostream>
#include "NoPerecedero.h"

NoPerecedero::NoPerecedero(std::string nombre, int precio, std::string tipo)
	:Producto(nombre, precio){
		this->tipo = tipo;
	}

void NoPerecedero::setterNoPerecedero(std::string nombre, int precio, std::string tipo){
	this->setter(nombre, precio);
	this->tipo = tipo;
}

void NoPerecedero::getterNoPerecedero(){
	getter();
	std::cout << "tipo: " << this->tipo << std::endl;
}

void NoPerecedero::calcularNoPerecedero(int dias){
	std::cout << "precio: " << this->calcular(dias, "FALSE") << std::endl;
}
