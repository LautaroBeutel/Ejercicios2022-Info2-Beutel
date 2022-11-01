#include <iostream>
#include "Producto.h"

Producto::Producto(std::string nombre, int precio){
	this->nombre = nombre;
	this->precio = precio;
}

int Producto::calcular(int cant, std::string arg){
	int calculo = this->precio * cant;
	if(arg == "TRUE"){
		std::cout << "precio: " << calculo << std::endl;
	}
	return (calculo);
}

void Producto::getter(){
	std::cout << this->nombre << ": $" << this->precio << std::endl;
}

void Producto::setter(std::string nombre, int precio){
	this->nombre = nombre;
	this->precio = precio;
}

void Producto::toString(){
}
