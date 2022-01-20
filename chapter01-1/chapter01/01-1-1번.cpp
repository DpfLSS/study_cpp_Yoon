#include <iostream>

int main(void)
{
	int n;
	int result = 0;
	for (int i = 1; i < 6; i++)
	{
		std::cout << i << "번째 정수 입력:";
		std::cin >> n;
		result = result + n;

	}

	std::cout << "합계:" << result << std::endl;

	return 0;

}