#include <iostream>

using namespace std;

class Base{
	int _x;
public:
	int getX(){
		return 0;
	}
}; 

class DerivedPublic : public Base{
	int _y;
public:
	int getY(){
		return 1;
	}
};

class DerivedProtected : protected Base{
	int _y;
public:
	int getY(){
		return 1;
	}
};

class DerivedPrivate : private Base{
	int _y;
public:
	int getY(){
		return 1;
	}
};

class Derived : Base{
	int _y;
public:
	int getY(){
		return 1;
	}
};

int main(){
	Derived derived;
	DerivedPublic publicDerived;
	DerivedPrivate privateDerived;
	DerivedProtected protectedDerived;
	
	//cout << "Derived: " << derived.getX() << endl; // error
	cout << "Derived public: " << publicDerived.getX() << endl;
	//cout << "Derived private: " << privateDerived.getX() << endl; // error
	//cout << "Derived protected: " << protectedDerived.getX() << endl; // error
}