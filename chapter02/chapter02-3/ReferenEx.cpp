#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 2010;
	int& num2 = num1; //num2는 num1의 참조자가 됨
	cout << num1<<' '<< num2 << endl;

	num2 = 1234;
	cout << num1<<' '<<num2 << endl;
	return 0;
}