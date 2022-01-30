#include <iostream>

using std::cin;
using std::cout;
using std::endl;
//전역의 형태로 삽입했기에 cin, cout, endl 사용시 이름공간 지정하지 않아도 됨
// using namespace std; 사용시 위 처럼 일일히 using 선언 필요 x
int main(void)
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;

	return 0;
}