//���� �ۼ��� �ڵ�

#include <iostream>

int main(void)
{
	int sell;
	std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
	std::cin >> sell;

	while (sell != -1) 
	{
		std::cout << "�̹� �� �޿�:" << 50 + (sell * 0.12) <<"����"<< std::endl;
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end):";
		std::cin >> sell;
		
	}
	std::cout << "���α׷��� �����մϴ�." << std::endl;

	return 0;

}

//���� ���
#include <iostream>

int salary(int sell)
{
	return (int)(50 + sell * 0.12);
}

int main(void)
{
	int sell;
	while (1)
	{
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end):";
		std::cin >> sell;
		if (sell == -1)
			break;

		std::cout << "�̹� �� �޿�:";
		std::cout << salary(sell) << "����" << std::endl;
	}
	std::cout << "���α׷��� �����մϴ�." << std::endl;

	return 0;
}

