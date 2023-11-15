#include<iostream>
using namespace std;
double pi = 3.14;
int main() {
	double r, h;
	cout << "圆锥的底面半径是r=";
	cin>> r;
	cout << "圆锥的高是h=";
	cin >> h;
	cout << "圆锥的体积是V=" << (1.0/ 3) * h * (1.0/ 2) * pi * r*r;
	return 0;
}