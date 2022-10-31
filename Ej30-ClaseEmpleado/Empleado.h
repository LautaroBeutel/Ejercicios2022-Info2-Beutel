#include <string>

#ifndef _EMPLEADO_H_
#define _EMPLEADO_H_

class Empleado{
	protected:
		std::string nombre;
		int edad;
		int salario;

		int plus_salario = 5000;	
	public:
		Empleado(std::string nombre, int edad, int salario);

		void setter();
		void getter();
};

class Repartidor:public Empleado{
	private:
		int zona;
	public:
		Repartidor(std::string nombre, int edad, int salario, int zona);

		void getterRepartidor();
		void plus();
};

class Comercial:public Empleado{
	private:
		double comision;
	public:
		Comercial(std::string nombre, int edad, int salario, double comision);
		
		void getterComercial();
		void plus();
};

#endif
