#include <iostream>

using namespace std;

class A {
private:
 int m_value;
public:
 void setValue(int val){
	}
 friend int getValue(A& obj); // not a member!!
};

int getValue(A& obj) { // doesn't belong to a class!!
 return obj.m_value;
}

int main() {
 A obj;
 obj.setValue(10);
 cout << getValue(obj) << endl; // OK
}