#include <iostream>
using namespace std;

class Car{
public:
	int horsepower;
	int weight;
	string brand;
	string constructionYear;
	
	int weightInKg() const{
		// Would cause compiler error
		// weight = 100; 
		return weight;
	}
	
	void setWeight(int _weight){
		this->weight = _weight;
	}
	
	string description(){
		return brand + " " + constructionYear;
	}
	
	void setBrand(string _newbrand) : brand(_newbrand){
		
	}
	
	string& getBrand(){
		return brand;
	}
};

int main(){
	Car bmw;
	bmw.horsepower = 100;
	bmw.weight = 2000;
	bmw.brand = "bmw";
	bmw.constructionYear = "2011";
	cout << bmw.description() << endl;
	
	// try const
	Car audi;
	//audi.weight = 100; // error
	audi.setWeight(100); // error
	cout << audi.weight << endl;
	{
		string brand = "audi";
		audi.setBrand(brand);
	}
	
	cout <<  audi.getBrand();
}