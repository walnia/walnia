#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double F, C;
	cout << "������Ļ����¶���";
		cin >> F;
	C = (F - 32) / 1.8;
	cout << "��Ӧ�������¶���" <<fixed<< setprecision(2)<<C;
	return 0;
}