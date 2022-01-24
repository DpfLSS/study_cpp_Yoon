#include <iostream>
//포인터 개념 복습
void swap(int* num1, int* num2)
{
	int tmp;
	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

void swap(char* ch1, char* ch2)
{
	char tmp;
	tmp = *ch1;
	*ch1 = *ch2;
	*ch2 = tmp;
}

void swap(double* dbl1, double* dbl2)
{
	double tmp;
	tmp = *dbl1;
	*dbl1 = *dbl2;
	*dbl2 = tmp;
}

/*
여기서 난 각 swap 함수마다 변수를 다르게 설정했는데, 모두 동일하게 설정해도 무관하다.
EX) void swap(double* ptr1, double* ptr2) void swap(int* ptr1, int* ptr2)
= 함수 안의 자료형이 다르다면 두 함수는 오버로딩이 가능함
*/

int main(void)
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;

	return 0;
}