#include <iostream>

using namespace std;

int main15()
{
	int a = 10;
	a++;	//a++ 等价于 a = a + 1;
	cout << a << endl; // 11

	int b = 5;
	b = ++a;	//a先进行递增+1，再赋值给b
	b = a++;	//此时a先赋值给b，再递增
	cout << b << endl; // 12

	int c = 8;
	c--;	//c-- 等价于 c = c - 1;
	cout << c << endl; //7

	int d = 9;
	d = --c;	//c先进行递减-1，再复制给d
	d = c--;	//c先赋值给d,在递减
	cout << d << endl; //6

	return 0;
}