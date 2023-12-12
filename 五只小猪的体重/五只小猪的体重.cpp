#include<iostream>
using namespace std;
int main() {
	int m[5] = { 300,350,200,400,250 };
	int M=0;
	for (int i = 0; i <= 5; i++) {
		if (M < m[i]) {
			M = m[i];
		}
	}
	cout << M << endl;
	return 0;
}