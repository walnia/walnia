#include<iostream>
#include"1.cpp"
using namespace std;
int main() {
	int i = 0;
	for (int j = 2; j <= 9999; j++) {
		if (is_prime(j)) {
			i++;
				if (i % 10 != 0)cout << j << " ";
				else cout << j << endl;
		}
		if (i == 200) break;
	}
	
}