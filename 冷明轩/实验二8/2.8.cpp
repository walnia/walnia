#include<iostream>
using namespace std;
int main() {
	double n1, n2, a,b;
	cin >> a;
	n1 = a;
	n2 = n1+1;
	for (int i = 1; n2 - n1 >= 10e-5 || n2 - n1 <= (-1) * 10e-5; i++){
		n2 = n1;
		n1 = (1.0 / 2) * (n1 + a / n1);
	}
	cout << n1;
	return 0;
}
	

