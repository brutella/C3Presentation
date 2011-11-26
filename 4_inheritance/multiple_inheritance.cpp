#include <iostream>

using namespace std;

class Article{
public:
	int getPrice(){
		return 10;
	}
}; 

class CD : public virtual Article{
};

class Book : public virtual Article{
};

class BookCD : public Book, public CD{

};

int main(){
	
	BookCD bookCD;
	cout << "BookCD Price: " << bookCD.getPrice() << endl;
}