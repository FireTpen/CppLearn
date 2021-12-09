#include <iostream>
using namespace std;

//1.宏常量
#define day 7

int main4()
{

	//day = 40;错误示例

	//const 修饰的常量
	const int month = 12;

	//month = 24; 错误示例

	cout << "一年有" << month << "月" << endl;

	system("pause");

	return 0;
}