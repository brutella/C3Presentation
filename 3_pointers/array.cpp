#include <iostream>

using namespace std;


int main(){
	int array[5];
	int* p = array;
	*p++ = 1;
	*p = 2;
	*++p = 3;
	p++;
	*p++ = 4;
	*p = 5;
	
	p = array;
	*(p++) = 100;
	int p1 = *p++;
	int p2 = *p++;
	int p3 = *p;
	cout << "p1 " << p1 << endl;
	cout << "p2 " << p2 << endl;
	cout << "p3 " << p3 << endl;
	
	for(int i = 0; i<5; i++){
		cout << "array[" << i << "] = " << array[i] << endl;
	}
	
	short* sp = (short*)array;
	*sp = 10;
	*(sp+1) = 20; // 0001 0100 0000 0000 0000 0000 0000 1010 = 1310730
	
	for(int i = 0; i<5; i++){
		cout << "array[" << i << "] = " << array[i] << endl;
	}
	
	return 0;
}