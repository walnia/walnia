#include<iostream>
using namespace std;
int main() {
	char a,b;
	cout << "ÊäÈëÒ»¸ö×Ö·û";
	cin >> a;
		if (isupper(a))
			cout << a + 1;
		if (islower(a))
			b = a - 32;
			cout<<b;
}