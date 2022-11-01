#include <iostream>
#include "Perecedero.h"

Perecedero::Perecedero(std::string nombre, int precio, int dias_a_vencer)
	:Producto(nombre, precio){
		this->dias_a_vencer = dias_a_vencer;
	}

void Perecedero::setterPerecedero(std::string nombre, int precio, int dias_a_vencer){
	this->setter(nombre, precio);
	this->dias_a_vencer = dias_a_vencer;
	}

void Perecedero::getterPerecedero(){
	getter();
	std::cout << "vence en "<< this->dias_a_vencer << " dias" << std::endl;
}
