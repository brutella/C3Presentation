#include <iostream>

using namespace std;

class Article{
public:
	string title;
	Article(){
		title = "Article title";
	}
	virtual ~Article(){
	}
	
	void printInfo(){
		cout << "Article: " << title;
	}
}; 


class Book : public Article{
public:
	string author;
	Book(){
		title = "Book title";
		author = "Stroutrup";
	}
	virtual ~Book(){
	}

	void printInfo(){
		cout << "Book: " << title << "|" << author;
	}
};

int main(){
	
	Article* pArticle;
	Book* pBook = new Book();
	
	pArticle = pBook;
	pArticle->printInfo();
}