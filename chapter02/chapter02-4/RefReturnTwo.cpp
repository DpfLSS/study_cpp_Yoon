#include <iostream>
using namespace std;
//��ȯ���� �������� ��� ��ȯ ���� �������� �����ϴ��Ŀ� ���� �� ����� ���̰� ����.
int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);
	/*
	int num1=1;
	int &ref=num1;
	int num2=ref;
	*/
	num1+=1; // 1�� ������Ŵ
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}