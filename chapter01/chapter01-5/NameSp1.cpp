#include <iostream>

namespace BestComImp1 //BestComImp1이라는 이름 공간 마련한 뒤 함수 정의함
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImp1
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}
int main(void)
{
	BestComImp1::SimpleFunc();
	ProgComImp1::SimpleFunc();
	return 0;
	//이름공간을 사용하니, 함수의 이름과 매개변수 형이 동일하더라도 충돌이 발생하지 않음
}
