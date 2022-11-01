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

void Perecedero::calcularPerecedero(int cant){
	int calculo = this->calcular(cant, "FALSE");
	double precio;
	switch(this->dias_a_vencer){
		case 1: precio = calculo / 4;
			break;
		case 2: precio = calculo / 3;
			break;
		case 3: precio = calculo / 2;
	}
	std::cout<< "cant: " << cant << " precio final: " << precio << std::endl;
}
