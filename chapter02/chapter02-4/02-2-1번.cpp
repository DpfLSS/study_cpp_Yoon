#include <iostream>
using namespace std;

int main(void)
{
	const int num = 12;
	const int* ptr = &num; //const 붙여주지 않으면 오류 발생.
	const int*(& ref) = ptr;
	cout << num <<' '<<*ptr<<' '<<*ref<< endl;

	return 0;
}