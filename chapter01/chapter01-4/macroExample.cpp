//EX.1
#include <iostream>
# define TEST 10

int main(void)
{
	int num = TEST; // 컴파일 시, int num = 10으로 변경되는 것
	std::cout << num << std::endl;

	return 0;
}
/*
<매크로 함수 정의하는 법>
#define 매크로이름(매개변수) 코드(매개변수)
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
PRINT_NUM(x)라는 함수를 호출하고 매개변수인 100을 받아 printf문을 실행시킴
여러줄을 적용하고 싶을 땐, 역슬래시(\)를 이용하여 코드를 구성하자
EX)	#define PRINT_HELLOWORLD printf("Hello World!!\n"); \
				printf("Hello World22");
*/

//EX.3
//<주의할 점> 연산 주의하기!
#include <iostream>
#define MUL(x,y) printf("%d\n",x*y)

int main() {

	MUL(4, 5);
	MUL(2 + 2, 2 + 3); //20이 아닌 9로 출력됨. 왜??
	
	/*
	위 코드가 전처리기를 거치면 각각
	printf("%d\n",4*5) //20
	printf("%d\n",2+2*2+3) //9
	가 된다.
	두번째 결과 2+2*2+3=9

	원하는 결과 즉, 20이 나오도록 하기위해선
	#define MUL(x,y) printf("%d\n",(x)*(y))
	() 소괄호를 이용해 매개변수를 구분해주자
	*/

	return 0;
}

//출처:https://m.blog.naver.com/pk3152/221559110925 블로그 참고하였음