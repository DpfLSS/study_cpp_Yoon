# include <iostream>
#include <stdlib.h>

int main(void)
{
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(sizeof(int) * 5); // int*���� ���Ҹ� 5�� ������ 1���� �迭 ����
	if (pi == NULL)
	{
		std::cout << "�޸𸮰� �����մϴ�." << std::endl;
		exit(1);
	}

	std::cout << "5���� ���� �Է�:";
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &pi[i]); //�޸𸮸� �迭ó�� ����Ͽ� �� �Է�
		sum += pi[i];
	}

	std::cout << "5���� ��� ����:" << sum / 5.0 << std::endl;
	free(pi);

	return 0;
}
