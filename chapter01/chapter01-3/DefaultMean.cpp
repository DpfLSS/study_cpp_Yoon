#include <iostream>

int MyFuncOne(int num = 7) //�ƹ��͵� ���������� ����Ʈ ���� 7�� ���� ������ �ν��Ѵ�
{
	return num + 1;
}

int MyFuncTwo(int num1 = 5, int num2 = 7) // ����������, �ƹ��͵� �Է����� ������ ���� ����Ʈ ���� 5�� 7�� ���� ������ �ν��Ѵ�
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