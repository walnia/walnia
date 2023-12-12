#include<iostream>
#include"1.cpp"
using namespace std;

int main() {
int size1 ,size2;
	cout << "Enter list1:";
	cin >> size1;
	int list1[80];
	for (int i = 0; i <= size1-1; i++) {
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	int list2[80];
	for (int i = 0; i <= size2-1; i++) {
		cin >> list2[i];
	}
	int list3[80];
	merge( list1, size1, list2,  size2,  list3);
	return 0;
}
