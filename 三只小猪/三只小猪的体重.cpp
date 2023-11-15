#include<iostream>
using namespace std;
int main(){
	int m1, m2, m3,a;
	cin >> m1 >> m2 >> m3;
	if (m1 < m2){ 
		a = m1;
		m1 = m2;
		m2 = a;
	}
	if (m3 > m1) {
		a = m1;
		m1 = m3; 
		m3 = m2;
		m2 = m1;
	}
	else {
		if (m3 > m2) { a = m2; m2 = m3; m3 = a; }
	}
	cout << m1 << m2 << m3 << endl;
	return 0;
}