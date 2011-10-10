#include <iostream>
using namespace std;

int globalQuarterylSales[3];

int main(){
	int quarterylSales[3];
	static int staticQuarterylSales[3];
	
	cout << "Global: " << globalQuarterylSales[1] << endl;
	cout << "Static: " << staticQuarterylSales[1] << endl;
	cout << "Stack: " << quarterylSales[1] << endl;
}