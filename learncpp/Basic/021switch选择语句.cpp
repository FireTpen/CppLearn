#include <iostream>

using namespace std;

int main21()
{
	int a;
	cout << "1.��¼\n2.ע��\n3.����Աϵͳ\n4.�˳�" << endl;
	cout << "��ѡ��" << endl;
	cin >> a;

	switch (a)
	{
		case 1:
			cout << "��¼�ɹ�" << endl;
			break;
		case 2:
			cout << "ע��ɹ�" << endl;
			break;
		case 3:
			cout << "�������Աϵͳ" << endl;
			break;
		case 4:
			cout << "�ɹ��˳�" << endl;
			break;
		default:
			cout << "��������" << endl;
			break;
	}

	return 0;
}