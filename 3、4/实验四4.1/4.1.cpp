#include<iostream>
using namespace std;
int main() {
	int a[10], b, m=0;
	cout<< "Enter ten numbers: ";
	for (int i = 0; i <= 9; i++) {
		cin >> b;
		for (int j = 0; j <= i; j++) {
			if (b == a[j]) break;
			if (i==j) { a[m] = b; m++;}
		}
	}
	cout << "The distinct numbers are:";
	for (int i = 0; i <= m-1; i++) {
		cout << a[i]<<" ";
	}
}