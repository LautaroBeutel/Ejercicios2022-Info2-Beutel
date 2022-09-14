#include <iostream>
using namespace std;

class Rectagulo{
	public:
		Rectangulo(int x, int y);
		~Rectangulo();
		float area();
		void mover(int x, int y);
		void tamaño(int base, int h);
	private:
		int x_, y_, base_, h_;
		float area = 0;
};

Rectangulo::Rectangulo(int x, int y, int base, int h){
	x_ = x;
	y_ = y;
	base_ = base;
	h_ = h;
}

float Rectangulo::area(){
	area = base_ + h_;
	
	return area;
}

void Rectangulo::mover(int x, int y){
	x_ = x;
	y_ = y;
}

void Rectangulo::set_tamaño(int base, int h){
	base_ = base;
	h_ = h;

}

void Rectangulo::pos(){
	cout << "pos:\t(" << x.x_ << "," << x.y_ << ")" << endl;
}

void Rectangulo::leer_tamaño(){
	cout << "tam:\t(" << x.base_ << "," << x.h_ << ")" << endl;
}

int main(){
	Rectangulo a = Rectangulo(1, 1, 2, 2);
	a.pos();
	a.leer.tamaño();


	return 0;
}
