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
		<< "****  通讯录管理系统  ****\n"
		<< "****  1、新建联系人   ****\n"
		<< "****  2、显示联系人   ****\n"
		<< "****  3、删除联系人   ****\n"
		<< "****  4、查找联系人   ****\n"
		<< "****  5、修改联系人   ****\n"
		<< "****  6、清空联系人   ****\n"
		<< "****  0、退吹通讯录   ****\n"
		<< "**************************"
		<< endl;

}


/*功能2:显示联系人*/
int Show_Contact(AddressBooks *abs,int m_size)
{
	int i;
	if (m_size == 0)
	{
		cout << "通讯录为空!" << endl;
	}
	else
	{
		for (i = 0; i < m_size; i++)
		{
			cout << "-----------------------------"
				<< "姓名:" << abs->Abs[m_size].name;
			if (abs->Abs[m_size].gender == 1)
			{
				cout << "\t性别: 男";
			}
			else if (abs->Abs[m_size].gender == 2)
			{
				cout << "\t性别: 女";
			}
			cout << "\t年龄:" << abs->Abs[m_size].age
				<< "\t电话:" << abs->Abs[m_size].phone
				<< "\t地址:" << abs->Abs[m_size].address
				<< endl;	
		}
	}
	return 1;
}


/*函数:新建联系人*/
int Creating_Contact(AddressBooks *abs,int m_size)
{
	if (m_size == Max)
	{
		cout << "通讯录已经满啦！" << endl;
		return -1;
	}
	else
	{
		cout << "请输入联系人姓名:";
		cin >> abs->Abs[m_size].name;
		cout << "请输入联系人年龄:";
		cin >> abs->Abs[m_size].age;
		while (true)
		{
			cout << "请输入性别1--男，2---女";
			cin >> abs->Abs[m_size].gender;
			if ((abs->Abs[m_size].gender == 1) || (abs->Abs[m_size].gender == 2))
			{
				break;
			}
			else
			{
				cout << "您的输入有误，请输入1或2。" << endl;
			}
		}
		cout << "请输入联系人电话:";
		cin >> abs->Abs[m_size].phone;
		cout << "请输入联系人地址:";
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
					cout << "新建联系人成功!" << endl;
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