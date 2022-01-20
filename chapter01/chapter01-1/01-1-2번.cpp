#include <iostream>

int main(void)
{
	char name[100];
	char number[100];

	std::cout << "ÀÌ¸§:";
	std::cin >> name;

	std::cout << "ÀüÈ­¹øÈ£:";
	std::cin >> number;

	std::cout << name << std::endl << number << std::endl;

	return 0;

}
