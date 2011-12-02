#include <iostream>

using namespace std;

void read(int numbers[]){
	numbers[1] = 100;
}

int main(){
	int numbers[] = {0,0};
	read(numbers);
	cout << numbers[1];
}