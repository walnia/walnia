#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double F, C;
	cout << "你输入的华氏温度是";
		cin >> F;
	C = (F - 32) / 1.8;
	cout << "对应的摄氏温度是" <<fixed<< setprecision(2)<<C;
	return 0;
}