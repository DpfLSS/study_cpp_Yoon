#include <iostream>

int main(void)
{
	int num;
	std::cout << "숫자 하나를 입력해주세요:";
	std::cin >> num;

	for (int i = 1; i < 10; i++) 
		std::cout << num << "X" << i << "=" << num * i << std::endl;

	return 0;

}
