#include <iostream>
using namespace std;

class Complex{
private:
	int _real;
	int _imaginary;
public:
	Complex(int real, int imaginary) :_real(real), _imaginary(imaginary) {}
	/*Complex operator=(Complex &c) { 
		Complex temp(1,1);
		_real = c._real; 
		_imaginary = c._imaginary; 
		return temp;
	}*/
	
	Complex& operator++() {
		cout << "operator++()" << endl;
		return (*this);
	} 
	
	Complex operator++(int dummy) {
		cout << "operator++(int)" << dummy << endl;
		Complex answer = (*this);
		this->operator++();
		return answer;
	}
	
	void operator=(Complex &c) {
		_real = c._real;
		_imaginary = c._imaginary;
	}
	
	Complex& operator-(Complex &c) {
		cout << "operator-(Complex&)" << endl;
		return (*this);
	}
	/*
	friend Complex operator-(Complex &c1, Complex &c2) {
		Complex c(1,1);
		cout << "operator-(Complex&)" << endl;
		return c;
	}
	*/
	
	Complex operator-() {
		cout << "operator-()" << endl;
		return (*this);
	}
	
	void print(){
		cout << "real: " << _real << ", img: " << _imaginary << endl;
	}
};


int main(){
	
	Complex c1(1,2), c2(3,5), c3(10,3);
	cout << "c1" << endl;
	c1.print();
	
	cout << "c2" << endl;
	c2.print();

	c1 = c2;	
	cout << "c1" << endl;
	c1.print();
	
	//c1 = c2 = c3;
	
	c1++;
	++c2;
	c1 = (c1 - c2);
	-c1;
	
	return 0;
}