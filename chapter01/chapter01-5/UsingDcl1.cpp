#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc; //Hybrid에 정의된 HybFunc를 호출할 때, 이름공간 지정하지 않겠다는 것을 명시함
	HybFunc(); // using 선언으로 이름공간 지정 없이 함수 호출함
	return 0;
}