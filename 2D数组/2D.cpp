//二维数组a[m][n]表示有m个长度为n的一维数组
//定义后被分配连续的一块内存空间
// 01 02 03 04 05
// 11 12 13 14 15
// 21 22 23 24 25
//。。。。。。
// n1 n2 n3 n4 n5
#include<iostream>
using namespace std;
int main(){
	int a[4][6],k,x;
	float s = 0.0;
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 5; j++) {
			cin >> a[i][j];
		}
	}
	cin >> x;
		for (int j = 1; j <= 5; j++) { 
			s = s + a[x][j];
	}//某同学各科平均
		cout << s / 5;
		s = 0;
		cin >> k;
		for (int i = 1; i <= 3; i++) {
			s = s + a[i][k];
		}//某科各同学平均
		cout << s / 3;
		return 0;
	}
	
