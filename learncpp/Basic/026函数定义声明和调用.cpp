#include <iostream>

using namespace std;

int sum(int a, int b);

int main26()
{
	int a, b;
	cin >> a;
	cin >> b;
	int s = sum(a, b);
	cout << s << endl;

	return 0;
}

int sum(int a, int b)
{
	return a + b;
}