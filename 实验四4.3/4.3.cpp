#include<iostream>
using namespace std;
int main() {
	bool l[100];
	for (int i = 0; i <= 99; i++) {
		for (int j = i; j <= 99; j = j + i+1) {
			if (l[j] == 0) l[j] = 1;
			else l[j] = 0;
		}
	}
	for (int i = 0; i <= 99; i++) {
		if (l[i] == 0)
			cout << i+1 << " ";
	}
}