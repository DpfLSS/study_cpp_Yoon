#include <iostream>
using namespace std;

int main(void)
{
	int num = 10;
	int i = 0;

	cout << "True:" << true << endl;
	cout << "False:" << false << endl;

	while (true) //���ѷ����� ��������� ���� 1���. cpp������ true ��� ��� ���� o
	{
		cout << i++ << ' ';
		if (i > num)
			break;
	}
	cout << endl;

	cout << "sizeof 1:" << sizeof(1) << endl;
	cout << "sizeof 0:" << sizeof(0) << endl;
	cout << "sizeof T:" << sizeof(true) << endl;
	cout << "sizeof F:" << sizeof(false) << endl;
	//�������� ũ�� 1,0���� true, false�� �� ����
	return 0;
}