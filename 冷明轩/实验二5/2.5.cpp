#include<iostream>
#include<string>
using namespace std;
int main() {
	int a=0, b=0, n=0, e=0;
	char c;
	while (cin. get(c)){
		if ((65 <= c && c <= 90) || (97 <= c && c<= 122)) a++;//alphabet65~90 97~122
		else if (48 <= c && c <= 57) n++; //number48~57
		else if (c==32) b++;//blank   
		else if (c == '\n') break;
		else { e++; }//else      
	}              
	cout << "��ĸ��" << a << "��" << endl;
	cout << "������" << n << "��" << endl;
	cout << "�ո���" << b << "��" << endl;
	cout << "�����ַ���" << e << "��" << endl;
	return 0;
}
