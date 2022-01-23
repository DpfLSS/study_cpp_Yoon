#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl; // 인자를 전달하지 않으니 디폴트 값인 1과 2가 전달된다
	std::cout << Adder(5) << std::endl; //여기선 인자가 하나만 전달됨. 이럴땐 num1에 5가 전달되고 num2는 디폴트 값인 2가 전달된다
	std::cout << Adder(3, 5) << std::endl; // 디폴트값은 의미를 갖지 않음
	return 0;
}