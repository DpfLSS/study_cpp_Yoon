//EX.1
#include <iostream>
# define TEST 10

int main(void)
{
	int num = TEST; // ������ ��, int num = 10���� ����Ǵ� ��
	std::cout << num << std::endl;

	return 0;
}
/*
<��ũ�� �Լ� �����ϴ� ��>
#define ��ũ���̸�(�Ű�����) �ڵ�(�Ű�����)
*/

//EX.2
#include <iostream>
#define PRINT_NUM(x) printf("%d\n",x)

int main()
{
	PRINT_NUM(100);

	return 0;
}
/*
PRINT_NUM(x)��� �Լ��� ȣ���ϰ� �Ű������� 100�� �޾� printf���� �����Ŵ
�������� �����ϰ� ���� ��, ��������(\)�� �̿��Ͽ� �ڵ带 ��������
EX)	#define PRINT_HELLOWORLD printf("Hello World!!\n"); \
				printf("Hello World22");
*/

//EX.3
//<������ ��> ���� �����ϱ�!
#include <iostream>
#define MUL(x,y) printf("%d\n",x*y)

int main() {

	MUL(4, 5);
	MUL(2 + 2, 2 + 3); //20�� �ƴ� 9�� ��µ�. ��??
	
	/*
	�� �ڵ尡 ��ó���⸦ ��ġ�� ����
	printf("%d\n",4*5) //20
	printf("%d\n",2+2*2+3) //9
	�� �ȴ�.
	�ι�° ��� 2+2*2+3=9

	���ϴ� ��� ��, 20�� �������� �ϱ����ؼ�
	#define MUL(x,y) printf("%d\n",(x)*(y))
	() �Ұ�ȣ�� �̿��� �Ű������� ����������
	*/

	return 0;
}

//��ó:https://m.blog.naver.com/pk3152/221559110925 ��α� �����Ͽ���