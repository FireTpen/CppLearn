#include <iostream>

using namespace std;

int main6()
{
	int a = 10;
	long b = 22;
	float c = 44.5;
	cout << "int占用内存空间为：" << sizeof(int) << endl;
	cout << "long占用内存空间为：" << sizeof(b) << endl;
	cout << "float占用内存空间为：" << sizeof(c) << endl;
	system("pause");

	return 0;
}