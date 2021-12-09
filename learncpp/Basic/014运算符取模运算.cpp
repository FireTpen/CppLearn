#include <iostream>

using namespace std;

int main14()
{
	int a = 10;
	int b = 3;

	cout << a % b << endl;
	
	// a % b 其中b不能等于0,
	/*
	若 double a = 1.34;
		double b = 2.22;
		a % b 也是不可取的，
		小数不能进行取模运算
	*/
	double c = 1.34;
	double d = 2.22;
	//cout << c % d << endl;

	return 0;
}