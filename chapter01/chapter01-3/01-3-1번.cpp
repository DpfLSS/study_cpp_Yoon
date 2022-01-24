#include <iostream>
int BoxVolume(int lenght, int width, int height)
{
	return lenght * width * height;
}

int BoxVolume(int lenght, int width)
{
	return lenght * width * 1;
}

int BoxVolume(int lenght)
{
	return lenght * 1 * 1;
}
/*
<복습>
함수의 오버로딩은 매개변수의 자료형이 다르거나, 매개변수의 개수가 달라야 한다.
여기선 매개변수의 개수가 다르다는 조건을 만족하여 함수의 오버로딩이 가능하였음!
*/

int main(void)
{
	std::cout << "[3,3,3]:" << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D]:" << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D]:" << BoxVolume(7) << std::endl;
	//std::cout << "[D,D,D]:" << BoxVolume() << std::endl; //첫번째 매개변수에 디폴드 값이 정의되지 않았으므로, 오류 발생! BoxVolume 함수에선 반드시 하나 이상의 인자가 전달되어야 함
	return 0;
}

