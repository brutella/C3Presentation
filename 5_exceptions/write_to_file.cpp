#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int arr[4] = { 1, 2, 3, 4 };
	double amount = 12.34;
	
	ofstream file;
	file.open("medialibrary1.dat", ios::binary | ios::trunc);
	file.write((char*)arr, sizeof(int) * 4);
	file.write((char*) &amount, sizeof(double));
	file.close();
	
	int arr_[4];
	double amount_;

	ifstream file_;
	file_.open("medialibrary1.dat", ios::binary);
	file_.read((char*)arr_, sizeof(int) * 4);
	file_.read((char*) &amount_, sizeof(double));
	file_.close();
	cout << amount << endl;
}