#include <iostream>
#include <string>

using namespace std;

#define Max 100

struct Personalinfo {
	string name;
	int gender;
	int age;
	int phone;
	string address;

};

struct AddressBooks {
	struct Personalinfo Abs[Max];
	int m_size;
};

void Main_Menu()
{
	cout << "**************************\n"
		<< "****  ͨѶ¼����ϵͳ  ****\n"
		<< "****  1���½���ϵ��   ****\n"
		<< "****  2����ʾ��ϵ��   ****\n"
		<< "****  3��ɾ����ϵ��   ****\n"
		<< "****  4��������ϵ��   ****\n"
		<< "****  5���޸���ϵ��   ****\n"
		<< "****  6�������ϵ��   ****\n"
		<< "****  0���˴�ͨѶ¼   ****\n"
		<< "**************************"
		<< endl;

}


/*����2:��ʾ��ϵ��*/
int Show_Contact(AddressBooks *abs,int m_size)
{
	int i;
	if (m_size == 0)
	{
		cout << "ͨѶ¼Ϊ��!" << endl;
	}
	else
	{
		for (i = 0; i < m_size; i++)
		{
			cout << "-----------------------------"
				<< "����:" << abs->Abs[m_size].name;
			if (abs->Abs[m_size].gender == 1)
			{
				cout << "\t�Ա�: ��";
			}
			else if (abs->Abs[m_size].gender == 2)
			{
				cout << "\t�Ա�: Ů";
			}
			cout << "\t����:" << abs->Abs[m_size].age
				<< "\t�绰:" << abs->Abs[m_size].phone
				<< "\t��ַ:" << abs->Abs[m_size].address
				<< endl;	
		}
	}
	return 1;
}


/*����:�½���ϵ��*/
int Creating_Contact(AddressBooks *abs,int m_size)
{
	if (m_size == Max)
	{
		cout << "ͨѶ¼�Ѿ�������" << endl;
		return -1;
	}
	else
	{
		cout << "��������ϵ������:";
		cin >> abs->Abs[m_size].name;
		cout << "��������ϵ������:";
		cin >> abs->Abs[m_size].age;
		while (true)
		{
			cout << "�������Ա�1--�У�2---Ů";
			cin >> abs->Abs[m_size].gender;
			if ((abs->Abs[m_size].gender == 1) || (abs->Abs[m_size].gender == 2))
			{
				break;
			}
			else
			{
				cout << "������������������1��2��" << endl;
			}
		}
		cout << "��������ϵ�˵绰:";
		cin >> abs->Abs[m_size].phone;
		cout << "��������ϵ�˵�ַ:";
		cin >> abs->Abs[m_size].address;
	}
	return 1;
}


int main()
{
	AddressBooks abs;

	abs.m_size = 0;
	
	int select,ret;

	while (true)
	{
		Main_Menu();
		cin >> select;
		switch (select)
		{
			case 0:
				return 0;
			case 1:
				ret = Creating_Contact(&abs,abs.m_size);
				if (ret == 1)
				{
					cout << "�½���ϵ�˳ɹ�!" << endl;
				}
				break;
			case 2:
				ret = Show_Contact(&abs,abs.m_size);
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			default:
				break;

		}
	}



	system("pause");
	return 0;
}