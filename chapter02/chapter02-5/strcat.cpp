#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
	char str1[100] = "straw";

	strcat(str1, "berry");
	cout << str1 << endl;

	strncat(str1, "piece", 3);
	cout << str1 << endl;

	return 0;
}