#include<iostream>
using namespace std;
double pi = 3.14;
int main() {
	double a,b,c;
	cin >> a >> b >> c;
	if (a < b + c && b < a + c && c < a + b) {
		cout << "�ܳ�Ϊ" << a + b + c;
			if (a == b || a == c || b == c)
				cout << "�ǵ���������";
	}
	else cout << "���ܹ���������";
	return 0;
}
