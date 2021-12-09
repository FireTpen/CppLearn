#include <iostream>
#include <cstdlib>
using namespace std;

int main23()
{
	int rnum = rand() % 100 + 1;	//取0~100内的随机数
	int input;
	
	while (1)
	{
		cin >> input;
		if (input > rnum)
		{
			cout << "你猜测大了" << endl;
		}
		else if (input < rnum)
		{
			cout << "你猜测小了" << endl;
		}
		else
		{
			cout << "恭喜你猜对了" << endl;
			break;
		}
	}


	return 0;
}