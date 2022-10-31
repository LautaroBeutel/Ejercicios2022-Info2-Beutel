#include <iostream>
#include "Empleado.h"

Empleado::Empleado(std::string nombre, int edad, int salario){
	this->nombre = nombre;
	this->edad = edad;
	this->salario = salario;
}

void Empleado::setter(){
}

void Empleado::getter(){
	std::cout << "nombre: "<< this->nombre << std::endl;
	std::cout << "edad: " << this->edad << std::endl;
	std::cout << "salario: " << this->salario << std::endl;
}

Repartidor::Repartidor(std::string nombre, int edad, int salario, int zona)
	:Empleado(nombre, edad, salario){
		this->zona = zona;
}

void Repartidor::getterRepartidor(){
	getter();
	std::cout << "zona: " << this->zona << std::endl;
}

void Repartidor::plus(){
	this->salario += this->edad && this->zona == 3 <= 25 ? this->plus_salario : 0;
}

Comercial::Comercial(std::string nombre, int edad, int salario, double comision)
	:Empleado(nombre, edad, salario){
		this->comision = comision;
}

void Comercial::getterComercial(){
	getter();
	std::cout << "comision: " << this->comision << std::endl;
}

void Comercial::plus(){
	this->salario += this->edad >= 30 && this->comision <= 25000 ? this->plus_salario : 0; 
}
