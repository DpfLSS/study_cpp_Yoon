#include <iostream>
using namespace std;
int menu = 0;
void MenuFunc(void)
{
	cout << "---------�ʿ��� ������ ���ڸ� �Է����ּ���---------" << endl;
	cout << "1.���°���" << endl;
	cout << "2.�Ա�" << endl;
	cout << "3.���" << endl;
	cout << "4.�������� ��ȸ" << endl;
	cout << "5.���α׷� ����" << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "�Է�:";
	cin >> menu;

	while (menu < 1 || menu > 5) //1~4 �̿��� ���� �Է������� ���Է� �䱸
	{
		cout << "\n�����Դϴ�. �ٽ� �Է����ּ���." << endl;
		cout << "�Է�:";
		cin >> menu;
	}

/*
	

	if (menu == 3)
	{
		MenuTHREE();
	}

	if (menu == 4)
	{
		MenuFOUR();
	}
	
	else
	{
		cout << "���α׷��� �����մϴ�. �����մϴ�." << endl;
	}
	*/
}

void MenuONE(void) // 1.���� ����
{
	int id; int won; char name[100];
	cout << "---------------------<���� ����>---------------------" << endl;
	cout << "���� ID:"; cin >> id;
	cout << "�̸�:"; cin >> name;
	cout << "�Աݾ�:"; cin >> won;
	cout << "���� ������ �Ϸ�Ǿ����ϴ�." << endl;
	cout << "-----------------------------------------------------" << endl;
	
	MenuFunc();
}

typedef struct {
	int id; int won; char name[100];
}Account;

void MenuTWO(void) // 2.�Ա�
{
	
}
int main(void)
{
	MenuFunc();
	if (menu == 1)
	{
		MenuONE();
	}
	if (menu == 2)
	{
		MenuOTWO();
	}
	return 0;
}