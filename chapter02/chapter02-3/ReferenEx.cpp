#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 2010;
	int& num2 = num1; //num2�� num1�� �����ڰ� ��
	cout << num1<<' '<< num2 << endl;

	num2 = 1234;
	cout << num1<<' '<<num2 << endl;
	return 0;
}