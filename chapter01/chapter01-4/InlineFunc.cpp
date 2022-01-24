#include <iostream>

inline int SQUARE(int x) //매크로 함수를 이용하지 않고 키워드 inline을 이용한 함수의 인라인화 = 이는 C++기반
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5) << std::endl; //std::cout << 5*5 << std::endl;
	std::cout << SQUARE(12) << std::endl; // std::cout << 12*12 << std::endl;
	//인라인 함수이니 몸체부분이 호출문을 대체함
	return 0;
}
/*
-매크로를 이용한 함수의 인라인화 = 전처리기에 의해 처리됨, 자료형에 의존적이지 않은 함수
-키워드 inline을 이용한 함수의 인라인화 = 컴파일러에 의해 처리됨, int형을 기반으로 정의 된 함수로, 데이터 손실 발생
	컴파일러는 함수의 인라인화가 성능 저하에 영향을 끼친다고 판단하면 키워드 무시하기도 함
	또한 필요한 경우 일부 함수를 임의로 인라인 처리함
*/
