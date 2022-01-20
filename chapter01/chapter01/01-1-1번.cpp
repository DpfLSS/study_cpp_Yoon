#include <iostream>

int main(void)
{
	int n;
	int result = 0;
	for (int i = 1; i < 6; i++)
	{
		std::cout << i << "¹øÂ° Á¤¼ö ÀÔ·Â:";
		std::cin >> n;
		result = result + n;

	}

	std::cout << "ÇÕ°è:" << result << std::endl;

	return 0;

}
