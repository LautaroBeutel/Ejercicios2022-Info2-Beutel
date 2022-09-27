#include <iostream>
using namespace std;

//template<class tikitaka>


class complejo{
	public:
		complejo();
		complejo(int i, int j);
		void print();
		void suma(complejo x, complejo y);
	private:
		int i_, j_;

};

complejo::complejo(){
	i_ = 0;
	j_ = 0;
}

complejo::complejo(int i, int j){
	i_ = i;
	j_ = j;
}

void complejo::print(){
	cout << i_ << "i\t" << j_ << "j"  << endl; 
}

void complejo::suma(complejo x, complejo y){
		
	i_ = (x.i_) + (y.i_);
	j_ = (x.j_) + (y.j_);
}

int main(){
	complejo a = complejo(1, 1);
	complejo b = complejo(2, 2);
	complejo c;
	a.print();
	b.print();
	c.suma(a, b);
	c.print();

	return 0;
}
