#include <iostream>
#include "acelerometro.h"

acelerometro::acelerometro(double vx, double vy, double vz){
	float pendiente = 6 / 3.3;
	int ordenada = -3;

	this->vx = vx;
	this->vy = vy;
	this->vz = vz;

	this->gx = (pendiente * vx) + ordenada;
	this->gy = (pendiente * vy) + ordenada;
	this->gz = (pendiente * vz) + ordenada;
}

void acelerometro::getter(){
	std::cout << "gx: " << this->gx << std::endl;
	std::cout << "gy: " << this->gy << std::endl;
	std::cout << "gz: " << this->gz << std::endl;
}

void acelerometro::getGravity(double vx, double vy, double vz){
	float pendiente = 6 / 3.3;
	int ordenada = -3;

	this->gx = (pendiente * vx) + ordenada;	
	this->gy = (pendiente * vy) + ordenada;
	this->gz = (pendiente * vz) + ordenada;
}
