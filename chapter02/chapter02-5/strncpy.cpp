#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
	char str1[100] = "mango tree";

	strncpy(str1, "apple-pie", 5);
	cout <<  str1 << endl;

	return 0;
}