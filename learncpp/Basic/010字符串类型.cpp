#include <iostream>
#include <string> //使用C++类型字符串要加该头文件

using namespace std;

int main10()
{
	//c语言风格的字符串
	char str[] = "hello world!";

	cout << str << endl;

	//C++风格的字符串
	string str2 = "Hello world!";
	cout << str2 << endl;



	return 0;
}