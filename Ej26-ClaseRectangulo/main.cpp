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
	void establecer(int x, int y, int base, int alt);
	void leer();
	int contiene(rectangulo a);
	void interseccion(rectangulo a);
};

rectangulo::rectangulo(int x, int y, int b, int h)
{
	x_ = x;
	y_ = y;
	b_ = b;
	h_ = h;
}

rectangulo::~rectangulo()
{
}

int rectangulo::area(){
	int a = (b_ * h_);
	
	return a;
}

void rectangulo::establecer(int x, int y, int base, int alt){
	x_ = x;
	y_ = y;
	b_ = base;
	h_ = alt;
}

void rectangulo::leer(){
	cout << "inicio: " << "(" << x_ << "," << y_ << ")" << endl;
	cout << "base: " << " largo: " << b_ << "alto: " << h_ << endl;
}

int rectangulo::contiene(rectangulo a){
	if(x_ < a.x_ ){
		if (y_ > a.y_)
		{
			if (b_ > a.b_)
			{
				if (h_ > a.h_)
				{
					return 1;
				}else{
					return 0;
				}
			}else{
				return 0;
			}
		}else{
			return 0;
		}
	}else{
		return 0;
	}
}

void rectangulo::interseccion(rectangulo a){
	if (contiene(a))
	{
		cout << "inter-area:\t" << a.area();
	}
	else
	{	
		int x = 0;
		int y = 0;

		int j = a.b_;
		int i = a.h_;

		if (b_ == a.b_)
		{
			int x = b_;
		}else
		{
			int x = abs((b_) - (j));
		}

		if (h_ == a.h_)
		{
			int y = b_;
		}else
		{
			int y = abs((h_) - (i));
		}
		
		rectangulo r(1, 1, x, y);
		cout << "inter-area:\t" << r.area();
	}
}

int main(){
	rectangulo r1(2, 2, 1, 2);
	rectangulo r2(1, 2, 2, 2);
	r2.interseccion(r1);

	return 0;
}