#include <iostream>

int main(void)
{
	int n;
	int result = 0;
	for (int i = 1; i < 6; i++)
	{
		std::cout << i << "��° ���� �Է�:";
		std::cin >> n;
		result = result + n;

	}

	std::cout << "�հ�:" << result << std::endl;

	return 0;

}