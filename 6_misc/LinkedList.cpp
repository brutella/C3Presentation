#include <iostream>
using namespace std;

template <class T>
class Node{
public:
	Node(T d){
		data = d;
	}
	Node<T> *nextNode;
	T data;
};

template <class T>
class LinkedList{
public:
	Node<T>* _first;
	LinkedList(){
		_first = NULL;
	}
	
	void insert(T elem) {
		Node<T> *pCur = _first;
		Node<T> *pPrev = NULL;
		Node<T> *pNew = new Node<T>(elem);
		while ((pCur != NULL) && (pCur->data < elem)) {
			pPrev = pCur;
			pCur = pCur->nextNode;
		}
		pNew->nextNode = pCur;
		if (pPrev == NULL) {
			_first = pNew;
		} else {
			pPrev->nextNode = pNew;
		}
	}
	
	bool isSorted(){
		Node<T> *temp = _first;
		bool sorted = true;
		T data;
		while(temp != NULL){
			data = temp->data;
			cout << temp->data << endl;
			if(data > temp->data){
				sorted = false;
				break;
			}
			temp = temp->nextNode;
		}
		
		return sorted;
	}
};

int main(){	
	LinkedList<int> list;
	list.insert(5);
	list.insert(3);
	list.insert(0);
	list.insert(14);
	list.insert(4);
	list.insert(19);
	list.insert(1);
	list.insert(4);
	list.insert(2);
	cout << "is sorted " << list.isSorted();
}