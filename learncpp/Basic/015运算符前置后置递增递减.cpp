#include <iostream>

using namespace std;

int main15()
{
	int a = 10;
	a++;	//a++ �ȼ��� a = a + 1;
	cout << a << endl; // 11

	int b = 5;
	b = ++a;	//a�Ƚ��е���+1���ٸ�ֵ��b
	b = a++;	//��ʱa�ȸ�ֵ��b���ٵ���
	cout << b << endl; // 12

	int c = 8;
	c--;	//c-- �ȼ��� c = c - 1;
	cout << c << endl; //7

	int d = 9;
	d = --c;	//c�Ƚ��еݼ�-1���ٸ��Ƹ�d
	d = c--;	//c�ȸ�ֵ��d,�ڵݼ�
	cout << d << endl; //6

	return 0;
}