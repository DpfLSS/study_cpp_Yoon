#include <iostream>
using namespace std;

int main(void)
{
	const int num = 12;
	const int* ptr = &num; //const �ٿ����� ������ ���� �߻�.
	const int*(& ref) = ptr;
	cout << num <<' '<<*ptr<<' '<<*ref<< endl;

	return 0;
}