#include <iostream>

int main(void)
{
	char name[100];
	char number[100];

	std::cout << "�̸�:";
	std::cin >> name;

	std::cout << "��ȭ��ȣ:";
	std::cin >> number;

	std::cout << name << std::endl << number << std::endl;

	return 0;

}