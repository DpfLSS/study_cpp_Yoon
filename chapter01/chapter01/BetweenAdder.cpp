#include <iostream>

int main(void) {

	int val1, val2;
	int result = 0;
	std::cout << "두개의 숫자를 입력하세요:";
	std::cin >> val1 >> val2; //연속적으로 데이터를 입력 할 수 있음

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++) //c++에서는 for문 내에서 변수를 선언 할 수 있음
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "두 수 사이의 수의 합:" << result << std::endl;
	return 0;

}
/*
// 실행했을때 계산 값이 이상하게 나오는 오류 발생함.
알고보니 for문 뒤에 ;를 붙여서 발생한 오류였음ㅋ...
*/