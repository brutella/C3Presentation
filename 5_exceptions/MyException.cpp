#include <sstream>
#include <exception>

using namespace std;

class MyException : exception{
 int _errorCode;
public:
 MyException() : exception(){
  _errorCode = 0;
 }

 MyException(int errorCode) : exception(){
  _errorCode = errorCode;
 }

 	const char* what() throw(){
		stringstream sstream;
		sstream << "exception: " << _errorCode;
		string message = sstream.str();

		return message.c_str();
	}
};


int main(){
	try{
		throw MyException(10);
	}catch(MyException& exception){
		cout << exception.what();
	}
	return 0;
}