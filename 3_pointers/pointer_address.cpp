#include <iostream>

using namespace std;


int main(){
	int a = 27;
	int* pointer = &a;
	int foo = *pointer;
	foo = 19;
	
	*pointer = 18;
	
	cout << "a: " << a << endl;
	cout << "size of a: " << sizeof(a) << endl; // 4 byte
	
	cout << "pointer: " << pointer << endl; 
	cout << "size of pointer: " << sizeof(pointer) << endl; // 8 byte for 64-bit systems
	
	cout << "foo: " << foo << endl; 
	cout << "size of foo: " << sizeof(foo) << endl; // 8 byte for 64-bit systems
	
	
	int age = 30;
	int height = 180;
	int* p1, * p2;
	
	p1 = &age; // "p1" points to the address of "age"
	p2 = p1; // Correct (both have the same size), p2 points to the address of p1
	*p2 = height; // Dereference "p2" and assign the value of "height"
	
	cout << "age: " << age << endl;
	cout << "height: " << age << endl;
	
	
	int foo1 = 30;
	int foo2 = 100;
	int* pfoo1 = &foo1;
	int* pfoo2 = &foo2;
	
	pfoo1 ++;
	cout << "pfoo1: " << *pfoo1 << endl;
	pfoo1--;
	cout << "pfoo1: " << *pfoo1 << endl;
	return 0;
}