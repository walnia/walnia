#include<iostream>
using namespace std;
int main() {
	int n = rand() % 100 + 1, m = 0;
	while (m != n) {
		cin >> m;
		if (m > n)
			cout << "�´���" << endl;
		if (m < n)
			cout << "��С��" << endl;
	}
	cout << "right" << endl;
}