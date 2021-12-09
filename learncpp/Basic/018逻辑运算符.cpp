#include <iostream>

using namespace std;

int main18()
{
	int a = 10;
	int b = 5;
	int c = 0;

	cout << !a << endl;
	cout << !!a << endl;
	cout << (a && b) << endl;
	cout << (a || b) << endl;
	cout << (a && c) << endl;
	cout << (a || c) << endl;
	cout << (c || b) << endl;


	return 0;
}