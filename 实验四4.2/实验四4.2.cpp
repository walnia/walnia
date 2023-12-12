#include<iostream>
using namespace std;
int main() {
	double a[10] ,c;
	for (int i = 0; i <= 9; i++) {
		cin >> a[i];
	}
	for(int j=0;j<=9;j++){
		for (int i = 0; i <= 9-j; i++) {
			if (a[i + 1] > a[i]) { 
			c = a[i];
			a[i] = a[i + 1]; 
			a[i + 1] = c;
			}
		}
	}
	for (int i = 0; i <= 9; i++) {
		cout << a[9-i]<<" ";
	}
	return 0;
}