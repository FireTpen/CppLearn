#include <iostream>
#include <cstdlib>
using namespace std;

int main23()
{
	int rnum = rand() % 100 + 1;	//ȡ0~100�ڵ������
	int input;
	
	while (1)
	{
		cin >> input;
		if (input > rnum)
		{
			cout << "��²����" << endl;
		}
		else if (input < rnum)
		{
			cout << "��²�С��" << endl;
		}
		else
		{
			cout << "��ϲ��¶���" << endl;
			break;
		}
	}


	return 0;
}