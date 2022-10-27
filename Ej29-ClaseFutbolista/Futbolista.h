#ifndef _FUTBOLISTA_H_
#define _FUTBOLISTA_H_

#include <iostream>
#include <string>
#include "Persona.h"

using namespace std;

class futbolista:public persona{
	private:
		int numCamisa;
	public:
		futbolista(string nombre, string apellido, int numCamisa);
		void futbolprint();
};

#endif
