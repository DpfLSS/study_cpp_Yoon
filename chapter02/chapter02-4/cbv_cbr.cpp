#include <iostream>
using namespace std;
/*
void swapByValue(int num1, int num2) //call-by-value
//�̷��� �ϸ� val1�� val2�� �ٲ���x
{
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}
*/

void swapByValue(int *num1, int *num2) //call-by-reference
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

int main(void)
{
	int val1 = 10;
	int val2 = 20;
	swapByValue(&val1, &val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
	return 0;
}