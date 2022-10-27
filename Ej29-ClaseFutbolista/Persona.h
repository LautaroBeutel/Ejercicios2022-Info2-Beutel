#ifndef _PERSONA_H_
#define _PERSONA_H_

#include <iostream>
#include <string>

using namespace std;

class persona{
	protected:
		string nombre;
		string apellido;
	public:
		persona(string nombre, string apellido);
		void stdprint();
};

#endif
