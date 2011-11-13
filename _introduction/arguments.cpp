#include <iostream>
using namespace std;

void readCallByValue(int price, int amount){
	cout << "Enter a price: ";
	cin >> price;
	cout << "Enter the amount: ";
	cin >> amount;
}

void readCallByReference(int& price, int& amount){
	cout << "Enter a price: ";
	cin >> price;
	cout << "Enter the amount: ";
	cin >> amount;
}

void readPointer(int* price, int* amount){
	cout << "Enter a price: ";
	cin >> *price;
	cout << "Enter the amount: ";
	cin >> *amount;
}

void readChangePointer(int* price, int* amount){
	cout << "Enter a price: ";
	int tempPrice;
	cin >> tempPrice;
	price = &tempPrice;
	
	int tempAmount;
	cout << "Enter the amount: ";
	cin >> tempAmount;
	amount = &tempAmount;
}

int main(){
	int price = 0;
	int amount = 0;
	readCallByValue(price, amount); // price and amount is 0
	cout << "Call by Value - Price: " << price << ", Amount: " << amount;
	
	price = 0; amount = 0;
	readCallByReference(price, amount);
	cout << "Call by Reference Price: " << price << ", amount: " << amount;
	
	price = 0; amount = 0;
	readPointer(&price, &amount);
	cout << "Pointer Price: " << price << ", amount: " << amount;
	
	price = 0; amount = 0;
	readChangePointer(&price, &amount);
	cout << "Changed Pointer Price: " << price << ", amount: " << amount;
}