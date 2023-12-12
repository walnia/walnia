#include<iostream>
using namespace std;
int main() {
	int c,n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i <= n-1; i++) {
		cin >> a[i];
	}
	for (int j = 0; j <= n-1; j++) {
		for (int i = 0; i <= n-1 - j; i++) {
			if (a[i + 1] > a[i]) {
				c = a[i];
				a[i] = a[i + 1];
				a[i + 1] = c;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << a[n - i] << " ";
	}
	delete []a;
	return 0;
}