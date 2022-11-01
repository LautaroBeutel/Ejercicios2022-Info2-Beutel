#include "Producto.h"

#ifndef _NOPERECEDERO_H_
#define _NOPERECEDERO_H_

class NoPerecedero:public Producto{
	private:
		std::string tipo;
	public:
		NoPerecedero(std::string nombre, int precio, std::string tipo);

		void setterNoPerecedero(std::string nombre, int precio, std::string tipo);
		void getterNoPerecedero();

		void calcularNoPerecedero(int);
};

#endif
