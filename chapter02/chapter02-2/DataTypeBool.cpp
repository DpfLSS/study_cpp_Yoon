#include <iostream>
using namespace std;

bool IsPositive(int num)
{
	if (num <= 0) //0보다 큰 양수일때 true 반환
		return false;
	else
		return true ;
}

int main(void)
{
	bool isPos;
	int num;
	cout << "Input number:";
	cin >> num;

	isPos = IsPositive(num);
	if (isPos) //IsPositive가 true이면 밑 문장 출력
		cout << "Positive number" << endl;
	else
		cout << "Negative number" << endl;

	return 0;
}