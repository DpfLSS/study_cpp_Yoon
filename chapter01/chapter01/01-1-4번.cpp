//내가 작성한 코드

#include <iostream>

int main(void)
{
	int sell;
	std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
	std::cin >> sell;

	while (sell != -1) 
	{
		std::cout << "이번 달 급여:" << 50 + (sell * 0.12) <<"만원"<< std::endl;
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end):";
		std::cin >> sell;
		
	}
	std::cout << "프로그램을 종료합니다." << std::endl;

	return 0;

}

//교재 답안
#include <iostream>

int salary(int sell)
{
	return (int)(50 + sell * 0.12);
}

int main(void)
{
	int sell;
	while (1)
	{
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end):";
		std::cin >> sell;
		if (sell == -1)
			break;

		std::cout << "이번 달 급여:";
		std::cout << salary(sell) << "만원" << std::endl;
	}
	std::cout << "프로그램을 종료합니다." << std::endl;

	return 0;
}

