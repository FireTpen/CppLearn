#include <iostream>

using namespace std;

int main19()
{
	int score,m;
	cout << "���������:" << endl;
	cin >> score;
	cout << "�����������ɼ�:" << endl;
	cin >> m;
	////�����if
	//if (score > 60)
	//{
	//	cout << "�ɼ�Ϊ:" << score << "����" << endl;
	//}

	////�������if
	//if (score > 60)
	//{
	//	cout << "�ɼ�Ϊ:" << score << "����" << endl;
	//}
	//else
	//{
	//	cout << "�ɼ�Ϊ:" << score << "������" << endl;
	//}

	////���������if

	//if (score >= 60 && score < 70)
	//{
	//	cout << "D" << endl;
	//}
	//else if (score >= 70 && score < 80)
	//{
	//	cout << "C" << endl;
	//}
	//else if (score >= 80 && score < 90)
	//{
	//	cout << "B" << endl;
	//}
	//else if (score >= 90 && score <= 100)
	//{
	//	cout << "A" << endl;
	//}
	//else if (score < 60 && score >= 0)
	//{
	//	cout << "�ɼ�������" << endl;
	//}
	//else
	//{
	//	cout << "������ɼ�����" << endl;
	//}

	//Ƕ��if���

	if (score >= 90)
	{
		if (m >= 6)
		{
			cout << "��ϲ�㿼���廪��Ժ" << endl;
		}
		else
		{
			cout << "����������Ŀ������" << endl;
		}
	}
	else
	{
		cout << "�����ĿƷ��������" << endl;
	}


	return 0;
}