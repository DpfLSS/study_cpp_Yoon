#include <iostream>
using namespace std;
int menu = 0;
void MenuFunc(void)
{
	cout << "---------필요한 서비스의 숫자를 입력해주세요---------" << endl;
	cout << "1.계좌개설" << endl;
	cout << "2.입금" << endl;
	cout << "3.출금" << endl;
	cout << "4.계좌정보 조회" << endl;
	cout << "5.프로그램 종료" << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "입력:";
	cin >> menu;

	while (menu < 1 || menu > 5) //1~4 이외의 수를 입력했을때 재입력 요구
	{
		cout << "\n오류입니다. 다시 입력해주세요." << endl;
		cout << "입력:";
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
		cout << "프로그램을 종료합니다. 감사합니다." << endl;
	}
	*/
}

void MenuONE(void) // 1.계좌 개설
{
	int id; int won; char name[100];
	cout << "---------------------<계좌 개설>---------------------" << endl;
	cout << "계좌 ID:"; cin >> id;
	cout << "이름:"; cin >> name;
	cout << "입금액:"; cin >> won;
	cout << "계좌 개설이 완료되었습니다." << endl;
	cout << "-----------------------------------------------------" << endl;
	
	MenuFunc();
}

typedef struct {
	int id; int won; char name[100];
}Account;

void MenuTWO(void) // 2.입금
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