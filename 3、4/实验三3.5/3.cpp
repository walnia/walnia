#include"1.cpp"
int day(int a,int i) {
	if (i <= 10) {
		i++;
		day((a + 1) * 2,i);
	}
	cout << a<<" ";
	return 0;
}