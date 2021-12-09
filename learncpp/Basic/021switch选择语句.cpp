#include <iostream>

using namespace std;

int main21()
{
	int a;
	cout << "1.登录\n2.注册\n3.管理员系统\n4.退出" << endl;
	cout << "请选择：" << endl;
	cin >> a;

	switch (a)
	{
		case 1:
			cout << "登录成功" << endl;
			break;
		case 2:
			cout << "注册成功" << endl;
			break;
		case 3:
			cout << "进入管理员系统" << endl;
			break;
		case 4:
			cout << "成功退出" << endl;
			break;
		default:
			cout << "输入有误" << endl;
			break;
	}

	return 0;
}