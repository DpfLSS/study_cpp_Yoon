#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 2010;
	int& num2 = num1; //num2는 num1의 참조자가 됨

	num2 = 3047;
	cout << "VAL: " <<num1 << endl;
	cout << "REF: " << num2 << endl;
	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;

	return 0;
}