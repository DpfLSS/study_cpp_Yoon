#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl; // ���ڸ� �������� ������ ����Ʈ ���� 1�� 2�� ���޵ȴ�
	std::cout << Adder(5) << std::endl; //���⼱ ���ڰ� �ϳ��� ���޵�. �̷��� num1�� 5�� ���޵ǰ� num2�� ����Ʈ ���� 2�� ���޵ȴ�
	std::cout << Adder(3, 5) << std::endl; // ����Ʈ���� �ǹ̸� ���� ����
	return 0;
}