#include<iostream>
using namespace std;
int main() {
	int s=0,a,b=2;
	for (int i = 0; s <= 100; i++) {
		s = s + b;
		b *= 2;
		a = i;
	}
	cout << 0.8 * (s-b/2)/a;
	return 0;
}
