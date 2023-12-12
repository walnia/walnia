#include<iostream>
#include"1.cpp"
using namespace std;
int main() {
	for (double cel = 40.0; cel >= 31.0; cel--) {
		cout<<cel<<"   "<<celsius_to_fah(cel) << endl;
	}
	for (double fah = 120.0; fah >= 30.0; fah--) {
		cout << fah << "   " << fahrenheit_to_cels(fah) << endl;
	}
	return 0;
}