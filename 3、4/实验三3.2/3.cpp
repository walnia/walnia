#include"1.cpp"
bool is_prime(int num) {
	int a=2;
	bool b;
	for (int p = 2; num%p!=0;) {
		p++;
		a = p;
	}
	if (a == num) {b = 1;}
	else b = 0;
	return b;
}