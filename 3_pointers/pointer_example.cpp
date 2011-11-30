#include <iostream>
using namespace std;

int main(){
	int *uninitializedPointer;
	int *initializedPointer = NULL;
	
	int value = 10;
	int *valuePointer = &value;
	
	*valuePointer = 20;
	
	cout << "value: " << value << ", size: " << sizeof(value) << " bytes" << endl;
	
	cout << "valuePointer: " << valuePointer << ", size: " << sizeof(valuePointer) << " bytes" << endl;
	
	cout << "uninitializedPointer: " << uninitializedPointer << endl;
	cout << "initializedPointer: " << initializedPointer << endl;
	
	return 0;
}