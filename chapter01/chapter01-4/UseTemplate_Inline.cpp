#include <iostream>

template <typename T> 
inline T SQUARE(T x)
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5.5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
	//template을 이용하면 키워드 inline을 이용한 함수라도 매크로 함수처럼 자료형에 의존적이지 않은 함수 만들 수 있다.
	//데이터 손실 발생하지 않음
}