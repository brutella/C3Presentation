#include <iostream>

using namespace std;

template <class T = int> class Point{
	T _x;
	T _y;
public:
	Point(T x, T y) : _x(x), _y(y){
	}
	T getX(){
		return _x;
	}
	Point flip(){
		return Point(-_x, -_y);
	}
	static Point copy(Point& p){
		return Point(p._x, p._y);
	}
};

template <class T, class U> T min(T a, U b){
return a;
}

template <class T=int, class U=double> class Tuple{
T _x;
U _y;
public:
	Tuple(T a, U b) : _x(a), _y(b){}
	T getX(){
		return _x;
	}
	
	U getY(){
		return _y;
	}
};

template <class T> 
void test(T a){
	cout << a;
}

int main(){
	Point<> p(10,20);
	float x = p.getX();
	Point<int> q = p.flip();
	Point<int> p2 = Point<int>::copy(p);
	cout << p.getX();
	
	Tuple<double> t(120, 130);
	cout << t.getY();
	
	test(10);
	return 0;
}