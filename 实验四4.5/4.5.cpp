#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int s = 1, p = -1, c;
	for (int m = 0; m <= 100; m++) {
		if (s1[0] == s2[m]) {
			p = m;
			for (int n = 0; s1[n + 1] != '\0'; n++) {
				if (s1[n] == s2[m + n]) {}
				else { s = 0; }
			}
		}
	}
	if (s == 1) { c = p; }
	else c = (-1);
	return c;
}
int main() {
	char s1[100],s2[100];
	cout << "Enter the first string:";
	cin.getline(s1, 100, '\n');
	cout << "Enter the second string:";
	cin.getline(s2, 100, '\n');
	cout<<"indexof(s1,s2)is" << indexOf(s1, s2);

	return 0;
}