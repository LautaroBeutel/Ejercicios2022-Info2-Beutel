#include <iostream>
#include "Producto.h"

Producto::Producto(std::string nombre, int precio){
	this->nombre = nombre;
	this->precio = precio;
}

int Producto::calcular(int cant){
	return this->precio * cant;
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
