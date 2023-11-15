#include<iostream>
using namespace std;
double pi = 3.14;
int main() {
	int a, b;
	char c;
	cin >> a>>c>>b;
	if (c == 43)cout<<a+b;
	if (c == 45)cout<<a-b;
	if (c == 42)cout<<a*b;
	if (c == 47) {
		if (b == 0) {
			cout << "除数不能为零";
		}

		else cout << a / b;
	};
	if (c == 37) cout << a % b;
	if(c!=43&& c!=45 && c!=42 && c!=47 && c!=37) cout << "运算符非法";
	return 0;
}
