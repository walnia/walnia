#include<iostream>
using namespace std;
int* f()
{
	int list[] = { 1,2,3,4 };
	int* q = new int [4];
	for (int i = 0; i <= 3; i++) {
		*list = *q;
	}
	return list;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[]p;
}
