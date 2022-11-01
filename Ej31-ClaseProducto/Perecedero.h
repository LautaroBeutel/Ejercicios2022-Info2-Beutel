#include "Producto.h"

#ifndef _PERECEDERO_H_
#define _PERECEDERO_H_

class Perecedero:public Producto{
	private:
		int dias_a_vencer;
	public:
		Perecedero(std::string nombre, int precio, int dias_a_vencer);
		
		void setterPerecedero(std::string nombre, int precio, int dias_a_vencer);
		void getterPerecedero();
};

#endif
