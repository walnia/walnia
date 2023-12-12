#include<iostream>
using namespace std;
void swap(int& refa, int& refb) {
	int t = refa;
	refa = refb;
	refb = t;
	cout << refa << endl << refb << endl;
	/*int* A = &a;
	int* B = &b;
	int* C =A;
	A = B;
	B = C;*/
}
int main()
{
	int a, b;
	cin >> a >> b;
	int& refa=a;
	int& refb=b;
	cout <<"before"<< a << endl << b << endl;
	swap(refa, refb);
	cout << "after" << a << endl << b << endl;
	//void (d) (int a, int b);  
	// d= swap;//º¯ÊıÖ¸Õë
	return 0;
}