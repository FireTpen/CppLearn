#include <iostream>

using namespace std;


void fun1(int a, int b) //形参另外开一块内存进行数值的存放， 形参中的变量a,b不等于main中的a,b
{
	a++;
	cout << "在fun1中进行a++:" << a << endl;
	b = 30;
	cout << "在fun1中进行b = 30:" << b << endl;
}


void fun2(int* a, int* b)
{
	*a += 1;
	cout << "在fun2中进行a++:" << *a << endl;
	*b += 30;
	cout << "在fun2中进行b += 30:" << *b << endl;
}


int main27()
{
	int a = 10;
	int b = 20;
	fun1(a, b);
	cout << "在main中显示fun1后的a:" << a << endl;
	cout << "在main中显示fun1后的b:" << b << endl;
	cout << "=====================================" << endl;

	fun2(&a,&b);
	cout << "在main中显示fun1后的a:" << a << endl;
	cout << "在main中显示fun1后的b:" << b << endl;
	return 0;
}