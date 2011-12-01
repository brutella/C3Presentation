#include <iostream>

using namespace std;

class A{	
public:
	int _x;
	A(){
		_x = 10;
	}
}; 

class B : public A{
public:
	int _y;
};

int main(){
	B b;
	cout << "x: " << b._x << endl;
}