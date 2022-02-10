#include <iostream>
using namespace std;
//참조자를 이용하여 Call-by-reference 구현
void SwapByRef2(int& ref1, int& ref2)
{
	int tmp = ref1;
	ref1 = ref2;
	ref2 = tmp;
}

int main(void)
{
	int val1 = 10;
	int val2 = 20;
	
	SwapByRef2(val1, val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
	return 0;
}