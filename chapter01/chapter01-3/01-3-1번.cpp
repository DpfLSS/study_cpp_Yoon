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
<����>
�Լ��� �����ε��� �Ű������� �ڷ����� �ٸ��ų�, �Ű������� ������ �޶�� �Ѵ�.
���⼱ �Ű������� ������ �ٸ��ٴ� ������ �����Ͽ� �Լ��� �����ε��� �����Ͽ���!
*/

int main(void)
{
	std::cout << "[3,3,3]:" << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D]:" << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D]:" << BoxVolume(7) << std::endl;
	//std::cout << "[D,D,D]:" << BoxVolume() << std::endl; //ù��° �Ű������� ������ ���� ���ǵ��� �ʾ����Ƿ�, ���� �߻�! BoxVolume �Լ����� �ݵ�� �ϳ� �̻��� ���ڰ� ���޵Ǿ�� ��
	return 0;
}

