#include <iostream>
using namespace std;
//�����ڸ� ��ȯ�ϵ�, ��ȯ���� �⺻�ڷ����� ���
int RefRetFuncTwo(int& ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncTwo(num1);
	/*
	int num1=1;
	int &ref=num1;
	int num2=ref;
	*/
	num1 += 1; // 1�� ������Ŵ
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	//���⼭ int &num2=RefRetFuncTwo(num1);�� �Ұ��� => ��ȯ���� �⺻�ڷ������� ����� �� �Լ��� ��ȯ���� �ݵ�� ������ ����Ǿ�� ��.
	return 0;
}