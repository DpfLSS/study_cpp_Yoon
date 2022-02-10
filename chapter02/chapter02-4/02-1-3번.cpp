#include <iostream>
using namespace std;

void SwapPointer(int &val1, int &val2)
{
	cout << val1 << ' ' << val2 << endl;
}

int main(void)
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	SwapPointer(ptr1, ptr2);
	
	return 0;
}