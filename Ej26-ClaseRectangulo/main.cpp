#include <iostream>
using namespace std;

class rectangulo
{
private:
	int x_, y_;
	int b_, h_;
public:
	rectangulo(int x, int y, int b, int h);
	~rectangulo();
	int area();
	int perimetro();
	void establecer(int x, int y, int base, int alt);
	void obtener();
	int contiene(rectangulo a);
	void interseccion();
};

rectangulo::rectangulo(int x, int y, int b, int h)
{
	set_coord(x, y);
	set_tam(b, h);
	/*x_ = x;
	y_ = y;
	b_ = b;
	h_ = h;*/
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

void rectangulo::set_coord(int x, int y){
	x_ = x;
	y_ = y;
}

void rectangulo::set_tam(int base, int alt){
	b_ = base;
	h_ = alt;
}

void rectangulo::obtener(){
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
	rectangulo r1(1, 3, 3, 3);
	rectangulo r2(2 ,2 ,1, 1);
	
	if(r2.contiene(r1)){
		cout << "si" << endl;
	}else{
		cout << "no" << endl;
	}
	
	return 0;
}
