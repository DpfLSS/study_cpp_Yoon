#include <iostream>

int main(void) {

	int val1, val2;
	int result = 0;
	std::cout << "�ΰ��� ���ڸ� �Է��ϼ���:";
	std::cin >> val1 >> val2; //���������� �����͸� �Է� �� �� ����

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++) //c++������ for�� ������ ������ ���� �� �� ����
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "�� �� ������ ���� ��:" << result << std::endl;
	return 0;

}
/*
// ���������� ��� ���� �̻��ϰ� ������ ���� �߻���.
�˰��� for�� �ڿ� ;�� �ٿ��� �߻��� ����������...
*/