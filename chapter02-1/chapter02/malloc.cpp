# include <iostream>
#include <stdlib.h>

int main(void)
{
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(sizeof(int) * 5); // int*형의 원소를 5개 가지는 1차원 배열 생성
	if (pi == NULL)
	{
		std::cout << "메모리가 부족합니다." << std::endl;
		exit(1);
	}

	std::cout << "5명의 나이 입력:";
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &pi[i]); //메모리를 배열처럼 사용하여 값 입력
		sum += pi[i];
	}

	std::cout << "5명의 평균 나이:" << sum / 5.0 << std::endl;
	free(pi);

	return 0;
}
