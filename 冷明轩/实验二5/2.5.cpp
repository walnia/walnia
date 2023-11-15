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
	cout << "字母有" << a << "个" << endl;
	cout << "数字有" << n << "个" << endl;
	cout << "空格有" << b << "个" << endl;
	cout << "其他字符有" << e << "个" << endl;
	return 0;
}
