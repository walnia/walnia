#include<iostream>
using namespace std;
int main() {
	double x;
	cin >> x;
	if (x>0&&x<1) cout<<3-2*x;
	if (x>=1&&x<5) cout<<x/2+1;
	if (x>=5&&x<10) cout<<x*x;
	return 0;
}
