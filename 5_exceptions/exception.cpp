#include <iostream>

using namespace std;

int divide (int a, int b) throw(int){
	if (b == 0) {
		throw 0;
	}
	return a/b;
}

int main (){
	try{
		divide(10, 0);
	}catch(int exceptoin){
		cout << "Division by Zero.";
	}
	return 0;
}