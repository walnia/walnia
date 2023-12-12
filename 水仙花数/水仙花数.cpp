#include<iostream>
using namespace std;
int main() {
	int a = 100,b,c,d;
	do {
		b = a % 10;
		c = (a % 100) / 10;
		d = (a / 100);
		if (b*b*b +c*c*c +d*d*d == a){
			cout << a << endl;
		}
		a++;
	} while (a <= 999);
	return 0;
}