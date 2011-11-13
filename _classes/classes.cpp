#include <iostream>
using namespace std;

class Car{
public:
	int horsepower;
	int weight;
	string brand;
	string constructionYear;
	
	string description(){
		return brand + " " + constructionYear;
	}
};

int main(){
	Car bmw;
	bmw.horsepower = 100;
	bmw.weight = 2000;
	bmw.brand = "bmw";
	bmw.constructionYear = "2011";
	cout << bmw.description();
}