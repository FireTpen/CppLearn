#include <iostream>

using namespace std;

int main2()
{
	int input;
	while (true)
	{
		cout << "��ѡ����:" << endl;
		cout << "1.����ѭ��\n2.����ѭ��" << endl;
		cout << ":";
		cin >> input;
		switch (input)
		{
			case 1:
				continue;
			case 2:
				goto l;
			default:
				cout << "���������Ч������������" << endl;
		}
	l:
		break;

	}
	return 0;
}