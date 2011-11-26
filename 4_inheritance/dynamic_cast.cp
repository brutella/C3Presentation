#include <iostream>

using namespace std;

class Article{
public:
	virtual ~Article(){
	}
	int getPrice(){
		return 10;
	}
}; 


class Book : public Article{
public:
	virtual ~Book(){
	}
	int isbn(){
		return 100;
	}
};

int main(){
	
	Article* pArticle;
	Book* pBook = new Book();
	
	pArticle = pBook;
	//pBook = pArticle;
	pBook = dynamic_cast<Book*>(pArticle);
	//cout << "BookCD Price: " << bookCD.getPrice() << endl;
}