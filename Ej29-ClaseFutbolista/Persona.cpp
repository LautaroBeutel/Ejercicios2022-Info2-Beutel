#include "Persona.h"

#include <iostream>
#include <string>

using namespace std;

persona::persona(string nombre, string apellido){
	this->nombre = nombre;
	this->apellido = apellido;
}

void persona::stdprint(){
	cout << "nombre: " << this->nombre << endl;
	cout << "nombre: " << this->apellido << endl;
}
