#include <iostream>

using namespace std;

template <int N=100, class T=int> class Array {
protected:
 T a[N];
public:
 Array(T x=0) {
  for (int i=0; i<N; i++){
   a[i]=x;
  }
 }

 virtual ~Array() {}
 int length() { return N; }
 T& operator[](int i) {
  if (i<0 || i>=N) throw 0;
  return a[i];
 }
};

int main(){
	Array<> a(48);
	a[10] = 15;
	cout << a[10];

}