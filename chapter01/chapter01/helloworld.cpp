#include <iostream>

int main(void)
{
	int num = 20;
	std::cout << "Hello World" << std::endl;
	std::cout << "Hello " << "World" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;

}
/*
std::cout는 printf, std::cin는 scanf 기능과 비슷
std::endl는 줄바꿈 기능
*/