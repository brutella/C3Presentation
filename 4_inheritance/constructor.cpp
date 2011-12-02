#include <iostream>

using namespace std;

class A{	
public:
	int _x;
	A(){
		_x = 10;
	}
	
	void print() const{
		cout << _x << endl;
	}
		
}; 

class B : public A{
public:
	int _y;
	B(){
		_y = 100;
	}
	void print() const{
		cout << _y << endl;
	}
};

int main(){
	A* b = new B();
	b->print();
}