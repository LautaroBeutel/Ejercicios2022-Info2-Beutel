#include <string>

#ifndef _PRODUCTO_H_
#define _PRODUCTO_H_

class Producto{
	private:
		std::string nombre;
		int precio;
	public:
		Producto(std::string nombre, int precio);
		
		int calcular(int);
		void getter();
		void setter(std::string nombre, int precio);
		void toString();
};

#endif
