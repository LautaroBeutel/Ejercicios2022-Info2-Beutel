#include "acelerometro.h"

#ifndef _HERENCIAACC_H_
#define _HERENCIAACC_H_

class herenciaAcc:public acelerometro{
	private:
		int num_medicion;
	public:
		herenciaAcc(double, double, double, int);

		void getterHerencia();
};

#endif
