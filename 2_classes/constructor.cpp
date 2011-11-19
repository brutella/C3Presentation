#include <iostream>
using namespace std;

class Car{
public:
	int horsepower;
	int weight;
	
	/*Car(int _horsepower, int _weight){
		horsepower = _horsepower;
		weight = _weight;
	}*/
	
	Car(int _horsepower, int _weight) : horsepower(_horsepower), weight(_weight){}
};

class ARectangle{
public:
	int width;
	int height;
};

// Copy constructor, access private members
class MHRectangle{
private:
	int _width;
	int _height;
public:
	int height(){ return _height; }
	int width(){ return _width; }
	MHRectangle(int width, int height){
		_width = width;
		_height = height;
	}
	MHRectangle(const MHRectangle& rect){
		_width = rect._width; // can access private variable
		_height = rect._height;
	}
};

class Rectangle{
private:
	int _x;
	int _y;
	int _width;
	int _height;
public:
	
	void print(){
		cout << "x:" << _x << ", y: " << _y << endl;
	}
	// Constructor
	Rectangle(int x = 0, int y = 0, int width = 0, int height = 0){
		_x = x; _y = y; _width = width; _height = height;
	}

	// Returns intersection
	Rectangle intersection(Rectangle rect){
		Rectangle intersection;
		return intersection;
	}
};

int main(){
	Car bmw(100, 2000);
	// Car _bmw; // doesn't work
	cout << bmw.horsepower << endl;
	
	// Default constructor
	ARectangle rect;
	cout << rect.height << endl; // puts out height
	
	// Copy constructor
	MHRectangle mhrect1(50, 100);
	MHRectangle mhrect2 (mhrect1);
	const MHRectangle mhrect3(50, 100);	
	cout << mhrect2.height() << endl; // puts out height
	
	// Constructor conversion
	Rectangle rect1;
	Rectangle rect2 = 1;
	rect2.intersection(5);
	rect2.print(); // prints x: 1, y: 0
}