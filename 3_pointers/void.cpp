#include <iostream>

using namespace std;


int main(){
	int a = 100;
	void* pA = &a;
	*pA = 101; // Compiler error: no pointer type
	
	cout << *(int*)pA << endl;
	return 0;
}