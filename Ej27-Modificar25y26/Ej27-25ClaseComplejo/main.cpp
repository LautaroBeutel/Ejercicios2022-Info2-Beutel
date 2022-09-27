#include <iostream>
using namespace std;

//template<class tikitaka>


class complejo{
	public:
		complejo(int, int);
		
		complejo &establecer(int, int);
		
		void print() const;
		void suma(complejo x, complejo y);
	private:
		int i_, j_;

};

complejo::complejo(int i = 0, int j = 0){
	establecer(i, j);
}

complejo &complejo::establecer(int i, int j){
	i_ = i;
	j_ = j;
	return *this;
}

void complejo::print() const{
	cout << i_ << "i\t" << j_ << "j"  << endl; 
}

void complejo::suma(complejo x, complejo y){
	i_ = (x.i_) + (y.i_);
	j_ = (x.j_) + (y.j_);
	cout << "suma=\t" << i_ << "i\t" << j_ <<"j" << endl;
}

int main(){
	complejo j(1, 3);
	j.print();
	return 0;
}

