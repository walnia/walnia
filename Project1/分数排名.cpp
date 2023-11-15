#include<iostream>
using namespace std;
enum city{bj,sh,tj,cq};
int main() {
	int a[11], o[12] = {0,};//o的数组个数必须为12或以上否则下面o[i]中的i达不到11 ps.数组角标由0开始
	for (int i = 1; i <= 10; i++) {
		cin >> a[i];
		for (int n = 1; n <= 10; n++) {
			if (a[i] >= o[n]) 
				o[n + 1] = o[n];
				o[n] = a[i];
			if (a[i] < o[n])
				o[i] = a[i];
		}
	}		
	for (int i = 1; i <= 10; i++) {
		cout << o[i] << endl;
	}
			return 0;
		}
