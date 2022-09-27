#include <iostream>
using namespace std;

class rectangulo
{
private:
	int x_, y_;
	int b_, h_;
public:
	rectangulo(int x = 0, int y = 0, int b = 0, int h = 0);
	~rectangulo();
	int area();
	int perimetro();
	void establecer(int x, int y, int base, int alt);
	rectangulo &set_coord(int, int);
	rectangulo &set_tam(int, int);
	void obtener() const;
	int contiene(rectangulo a);
	void interseccion();
};

rectangulo::rectangulo(int x = 0, int y = 0, int b = 0, int h = 0)
{
	set_coord(x, y);
	set_tam(b, h);
}

rectangulo::~rectangulo()
{
}

int rectangulo::area(){
	int a = (b_ * h_);
	
	return a;
}

int rectangulo::perimetro(){
	int p = ((2 * b_) + (2 * h_));

	return p;
}

rectangulo &rectangulo::set_coord(int x, int y){
	x_ = x;
	y_ = y;

	return *this;
}

rectangulo &rectangulo::set_tam(int base, int alt){
	b_ = base;
	h_ = alt;

	return *this;
}

void rectangulo::obtener() const{
	cout << "inicio: " << "(" << x_ << "," << y_ << ")" << endl;
	cout << "base: " << b_ << " alto: " << h_ << endl;
}

int rectangulo::contiene(rectangulo a){
	if((x_ < a.x_) && 
		((x_ + b_) > (a.x_ + a.b_))){
		if((y_ > a.y_) && 
			((y_ - h_) < (a.y_ - a.h_))){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		return 0;
	}
}

void rectangulo::interseccion(){}

int main(){
	rectangulo r1;
	r1.set_coord(1, 1).set_tam(2, 2);

	r1.obtener();	
	return 0;
}

