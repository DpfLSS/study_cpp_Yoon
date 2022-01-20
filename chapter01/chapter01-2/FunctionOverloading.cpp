#include <iostream>

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void)
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);

	return 0;

}
/*
함수의 오버로딩
<C++에서 오버로딩>
-매개변수의 선언이 달라야함
-매개변수의 개수가 달라야함
-BUT 반환형이 다르다고 오버로딩이 가능하진 않음
	EX) void MyFunc(int n)
		int MyFunc(int n)

<C에서 오버로딩>
-C언어에서는 함수의 이름으로만 함수를 찾음
-즉, C언어에서 오버로딩 불가능!
*/

