#include <iostream>

using namespace std;
class A{
	
};

class B{
	
};

int main (){
	A a;
	B b;
	if(typeid(A) == typeid(b)){
		cout << "A";
	}
	return 0;
}