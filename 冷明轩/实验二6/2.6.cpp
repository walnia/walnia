#include<iostream>
using namespace std;
int main() {
	unsigned int m,n,b,y;
	cin >> m >> n;
	for (int i = 1; i <= m && i <= n; i++) {
		if ((m % i == 0)&&(n% i == 0)) y = i;
	}
	for (int i = 1;i<=m*n; i++) {
		if((i%m==0)&&(i%n==0) )b = i;
	}
	cout << "最小公倍数是" << b << endl << "最大公因数" << y;
}
