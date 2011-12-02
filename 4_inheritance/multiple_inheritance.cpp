#include <iostream>

using namespace std;

class Article{
public:
	int getPrice(){
		return 10;
	}
}; 

class CD : public Article{
};

class Book : public Article{
};

class BookCD : public Book, public CD{

};

struct GraphicsObject{

};

struct Rectangle : GraphicsObject{

};

int main(){
	
	BookCD bookCD;
	cout << "BookCD Price: " << bookCD.Book::getPrice() << endl;
}