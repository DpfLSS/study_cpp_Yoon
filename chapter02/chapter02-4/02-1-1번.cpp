#include <iostream>
using namespace std;

void FuncOne(int &val1)
{
	val1 = val1 + 1; //ª��
}

void FuncTwo(int &val2)
{
	val2 = -val2;
}

int main(void)
{
	int num1;
	int num2;
	cout << "1��: "; cin >> num1;
	cout << "2��: "; cin >> num2;

	cout << "1�� ���� ��: " << num1 << endl;
	FuncOne(num1);
	cout << "1�� ���� ��: " << num1 << endl;
	
	cout << "2�� ���� ��: " << num2 << endl;
	FuncTwo(num2);
	cout << "2�� ���� ��: " << num2 << endl;
	
	return 0;
}