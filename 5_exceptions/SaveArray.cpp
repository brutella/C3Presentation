#include <exception>
#include <sstream>
#include <iostream>

using namespace std;

class SaveArray{
 int _maxSize;
 int* _array;
public:
	SaveArray(int size);
	int& operator[](int index);
};

class RangeException : public exception {
 int _index;
public:
	RangeException(int index) throw();
	~RangeException() throw();
	const char* what() const throw();
};

class SizeException : public exception {
 int _size;
public:
	SizeException(int size) throw();
	~SizeException() throw();
	const char* what() const throw();
};

// Implementation
SaveArray::SaveArray(int size){
	if(size < 0){
		throw SizeException(size);
	}
}

int& SaveArray::operator[](int index){
	if(index < 0 || index >= _maxSize){
		throw RangeException(index);
	}

	return _array[index];
}

RangeException::RangeException(int index) throw(){
	_index = index;
}

RangeException::~RangeException() throw(){
	
}

const char* RangeException::what() const throw(){
	stringstream sstream;
	sstream << "range exception for index " << _index;
	string message = sstream.str();
	
	return message.c_str();
}

SizeException::SizeException(int size) throw(){ 
	_size = size;
}

SizeException::~SizeException() throw(){
	
}

const char* SizeException::what() const throw(){
	stringstream sstream;
	sstream << "size exception for size " << _size;
	string message = sstream.str();
	
	return message.c_str();
}

int main(){
		
	try{
		//SaveArray array_(-1);
		SaveArray array(10);
		array[11] = 0;
	}catch(exception& e){
		cout << e.what() << endl;
	}
	
	return 0;
}