#include"1.cpp"
int max(int a, int b) {
	int c = 0;
	for (int i=a;a%i!=0||b%i!=0; i--) {
		c = i-1;
	}
	return c;
}