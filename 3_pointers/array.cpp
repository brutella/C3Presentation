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
	
	p = &array[3];
	int array3 = *p++;
	p = &array[3];
	int array4 = *++p;
	
	for(int i = 0; i<5; i++){
		cout << "array[" << i << "] = " << array[i] << endl;
	}
	
	cout << "array[3] = " << array3 << endl;
	cout << "array[4] = " << array4 << endl;
	return 0;
}