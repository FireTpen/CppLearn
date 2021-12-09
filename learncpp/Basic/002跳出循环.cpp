#include <iostream>

using namespace std;

int main2()
{
	int input;
	while (true)
	{
		cout << "请选择功能:" << endl;
		cout << "1.继续循环\n2.跳出循环" << endl;
		cout << ":";
		cin >> input;
		switch (input)
		{
			case 1:
				continue;
			case 2:
				goto l;
			default:
				cout << "你的输入无效，请重新输入" << endl;
		}
	l:
		break;

	}
	return 0;
}