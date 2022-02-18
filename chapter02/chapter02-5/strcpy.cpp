#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	cout << "최초 문자열:" << str1 << endl;
	strcpy_s(str1, str2);
	cout << "바뀐 문자열:" << str1 << endl;

	strcpy_s(str1, ps1);
	cout << "바뀐 문자열:" << str1 << endl;

	strcpy_s(str1, ps2);
	cout << "바뀐 문자열:" << str1 << endl;

	strcpy_s(str1, "banana");
	cout << "바뀐 문자열:" << str1 << endl;

	return 0;
}