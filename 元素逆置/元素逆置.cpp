#include<iostream>
using namespace std;
int main() {
	int a[5] = { 1,3,2,5,4 };
	for (int i = 1; i <= 5; i++) {
		cout << a[5 - i]<<endl;
		}
	return 0;
}