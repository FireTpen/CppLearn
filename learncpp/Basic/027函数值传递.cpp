#include <iostream>

using namespace std;


void fun1(int a, int b) //�β����⿪һ���ڴ������ֵ�Ĵ�ţ� �β��еı���a,b������main�е�a,b
{
	a++;
	cout << "��fun1�н���a++:" << a << endl;
	b = 30;
	cout << "��fun1�н���b = 30:" << b << endl;
}


void fun2(int* a, int* b)
{
	*a += 1;
	cout << "��fun2�н���a++:" << *a << endl;
	*b += 30;
	cout << "��fun2�н���b += 30:" << *b << endl;
}


int main27()
{
	int a = 10;
	int b = 20;
	fun1(a, b);
	cout << "��main����ʾfun1���a:" << a << endl;
	cout << "��main����ʾfun1���b:" << b << endl;
	cout << "=====================================" << endl;

	fun2(&a,&b);
	cout << "��main����ʾfun1���a:" << a << endl;
	cout << "��main����ʾfun1���b:" << b << endl;
	return 0;
}