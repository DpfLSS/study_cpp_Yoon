#include <iostream>
using namespace std;

int main(void)
{
	int num = 10;
	int i = 0;

	cout << "True:" << true << endl;
	cout << "False:" << false << endl;

	while (true) //무한루프를 만들기위해 보통 1사용. cpp에서는 true 대신 사용 가능 o
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
	//데이터의 크기 1,0보다 true, false가 더 작음
	return 0;
}
