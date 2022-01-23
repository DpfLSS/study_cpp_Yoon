#include <iostream>

int MyFuncOne(int num = 7) //아무것도 넣지않으면 디폴트 값인 7을 넣은 것으로 인식한다
{
	return num + 1;
}

int MyFuncTwo(int num1 = 5, int num2 = 7) // 마찬가지로, 아무것도 입력하지 않으면 각각 디폴트 값인 5와 7을 넣은 것으로 인식한다
{
	return num1 + num2;
}

int main(void)
{
	std::cout << MyFuncOne() << std::endl; 
	std::cout << MyFuncOne(7) << std::endl;
	std::cout << MyFuncOne(10) << std::endl;
	// result 8 , 8 , 11
	return 0;
}