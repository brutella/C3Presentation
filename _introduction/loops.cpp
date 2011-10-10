#include <iostream>

using namespace std;

int main(){	
	int i = 10;
	while(i>0){
	 i--;
	 if(i % 2 == 0){ continue; }
	 if(i == 5){ break; }

	 cout << i;
	}
}