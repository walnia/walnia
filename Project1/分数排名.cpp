#include<iostream>
using namespace std;
enum city{bj,sh,tj,cq};
int main() {
	int a[11], o[12] = {0,};//o�������������Ϊ12�����Ϸ�������o[i]�е�i�ﲻ��11 ps.����Ǳ���0��ʼ
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
