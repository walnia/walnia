#include<iostream>
using namespace std;
double pi = 3.14;
int main() {
	double a,b,c;
	cin >> a >> b >> c;
	if (a < b + c && b < a + c && c < a + b) {
		cout << "周长为" << a + b + c;
			if (a == b || a == c || b == c)
				cout << "是等腰三角形";
	}
	else cout << "不能构成三角形";
	return 0;
}
