#include<iostream>
using namespace std;
int main() {
	int m = 1, a, b,c;
	for (; m <= 100; m++) {
		a = m % 10;
		b = (m % 100) / 10;
		c = m / 100;
		if ( a==7 || b == 7 || c == 7 || m % 7 == 0) {
			cout << m << endl;
		}
	}
	return 0;
}