#include <iostream>

namespace BestComImp1
{
	void SimpleFunc(void);
}

namespace BestComImp1
{
	void PrettyFunc(void);
}

namespace ProgComImp1
{
	void SimpleFunc(void);
}
int main(void)
{
	BestComImp1::SimpleFunc();
	return 0;
}

void BestComImp1::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc(); //동일한 이름공간을 가지고 때문에
	ProgComImp1::SimpleFunc(); //다른 이름공간이기에 이름공간을 지정하는 연산자 ::를 사용함
}

void BestComImp1::PrettyFunc(void)
{
	std::cout << "So Pretty!" << std::endl;
}

void ProgComImp1::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
