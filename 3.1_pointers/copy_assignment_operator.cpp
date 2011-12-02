#include <iostream>
using namespace std;

// Copy constructor, access private members
class Rectangle{
private:
	int _width;
	int _height;
public:
	int height(){ return _height; }
	int width(){ return _width; }
	Rectangle(){
	}
	Rectangle(const Rectangle& rect){
		cout << "Calling copy constructor" << endl;
		_width = rect._width; // can access private variable
		_height = rect._height;
	}
	
	Rectangle& operator=(const Rectangle& rect){
		cout << "Calling copy assignment operator" << endl;
		_width = rect._width; // can access private variable
		_height = rect._height;
		
		return *this;
	}
};

int main(){
	// Constructor conversion
	Rectangle rect1;
	cout << "Expecting copy constructor" << endl;
	Rectangle rect2(rect1);
	cout << "Expecting copy assignment operator" << endl;
	rect2 = rect1;
}