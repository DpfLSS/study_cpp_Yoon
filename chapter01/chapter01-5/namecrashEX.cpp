#include <iostream>

void SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
int main(void)
{
	SimpleFunc();
	return 0;
}