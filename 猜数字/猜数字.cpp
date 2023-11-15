#include<iostream>
using namespace std;
int main() {
	int n = rand() % 100 + 1, m = 0;
	while (m != n) {
		cin >> m;
		if (m > n)
			cout << "猜大了" << endl;
		if (m < n)
			cout << "猜小了" << endl;
	}
	cout << "right" << endl;
}