#include <iostream>
#include <exception>

using namespace std;

int divide (int a, int b) throw(){
	if (b == 0) {
		throw 0;
	}
	return a/b;
}

int main (){
	try{
		divide(10, 0);
	}catch(int e){
		cout << "Division by Zero.";
	}catch(const exception& e ){
		cout << "Exception";
	}
	return 0;
}