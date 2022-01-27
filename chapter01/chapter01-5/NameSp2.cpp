#include <iostream>

namespace BestComImp1 
{
	void SimpleFunc(void);//이름공간 안에 함수의 선언만 함
}

namespace ProgComImp1
{
	void SimpleFunc(void);//마찬가지임
}

int main(void)
{
	BestComImp1::SimpleFunc();
	ProgComImp1::SimpleFunc();
	return 0;
}

void BestComImp1::SimpleFunc(void)//이름공간에 선언된 함수의 정의부분임
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImp1::SimpleFunc(void)//마찬가지!
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}