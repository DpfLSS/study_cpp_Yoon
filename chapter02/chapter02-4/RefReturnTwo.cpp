#include <iostream>
using namespace std;
//반환형이 참조형인 경우 반환 값을 무엇으로 저장하느냐에 따라서 그 결과에 차이가 있음.
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
	num1+=1; // 1씩 증가시킴
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}