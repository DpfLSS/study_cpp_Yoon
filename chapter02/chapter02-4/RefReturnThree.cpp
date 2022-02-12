#include <iostream>
using namespace std;
//참조자를 반환하되, 반환형은 기본자료형인 경우
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
	num1 += 1; // 1씩 증가시킴
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	//여기서 int &num2=RefRetFuncTwo(num1);은 불가능 => 반환형이 기본자료형으로 선언된 저 함수의 반환값은 반드시 변수에 저장되어야 함.
	return 0;
}