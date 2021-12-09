#include <iostream>

using namespace std;

int main7()
{
	float a = 3.1415926f;	//单精度后面要加个f
	double b = 3.1415926;

	cout << "float a = " << a << endl;
	cout << "double b = " << b << endl;

	//科学计数法
	float c = 3e2; // 3e2 = 3 * 10^2;
	cout << "c = " << c << endl;
	float d = 3e-2; //3e-2 = 3*0.1^2;
	cout << "d = " << d << endl;

	system("pause");


	return 0;
}