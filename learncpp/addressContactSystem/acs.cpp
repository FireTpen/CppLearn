#include <iostream>
#include <string>
#include <cstring>

using namespace std;

#define Max 100

struct Personalinfo {
	string name;
	int gender;
	int age;
	string phone;
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





/*功能:比较名字判断联系人是否在通讯录*/
int isExist(AddressBooks *abs,string name)
{
    int i;
    for(i = 0;i < abs->m_size;i++)
    {
        if(abs->Abs[i].name == name)  //字符串相同。
        {
            return i;
        }
        
    } 
    return -1;   
}

/*功能6：清空通讯录*/
int Empty_Contact(AddressBooks *abs,int m_size)
{
    if(m_size == 0)
    {
        cout << "通讯录为空！" << endl;
        return -1;
    }
    else
    {
        int i;
        for(i = 0;i < m_size;i++)
        {
            
        }
        m_size = 0;
        cout << "通讯录已清空！" << endl;

    }
    
    return 1;
}

/*功能5:修改联系人信息*/
int Modify_info(AddressBooks *abs,int m_size)
{
    string name;
    int ret;
    cout << "请输入要修改的联系人姓名:";
    cin >> name;
    ret = isExist(abs,name);
    if(ret == -1)
    {
        cout << "查无此人！" << endl;
        return -1;
    }
    else
    {
        cout << "请输入联系人姓名:";
		cin >> abs->Abs[ret].name;
		cout << "请输入联系人年龄:";
		cin >> abs->Abs[ret].age;
		while (true)
		{
			cout << "请输入性别1--男，2---女";
			cin >> abs->Abs[ret].gender;
			if ((abs->Abs[ret].gender == 1) || (abs->Abs[ret].gender == 2))
			{
				break;
			}
			else
			{
				cout << "您的输入有误，请输入1或2。" << endl;
			}
		}
		cout << "请输入联系人电话:";
		cin >> abs->Abs[ret].phone;

		cout << "请输入联系人地址:";
		cin >> abs->Abs[ret].address;
    }
    return 1;
}


/*功能4：查找联系人*/
int Find_appoint(AddressBooks *abs,int m_size)
{
    string name;
    int ret;
    cout << "请输入要查找的联系人姓名:";
    cin >> name;
    ret = isExist(abs,name);
    if(ret == -1)
    {
        cout << "查无此人！" << endl;
        return -1;
    }
    else
    {
        cout << "------------------------------------------------------------------\n"
                << ret+1 << "、姓名:" << abs->Abs[ret].name;
			if (abs->Abs[ret].gender == 1)
			{
				cout << "\t性别:男";
			}
			else if (abs->Abs[ret].gender == 2)
			{
				cout << "\t性别:女";
			}
			cout << "\t年龄:" << abs->Abs[ret].age
				<< "\t电话:" << abs->Abs[ret].phone
				<< "\t地址:" << abs->Abs[ret].address
				<< endl;
            cout << "------------------------------------------------------------------\n";
    }
    return 1;
}

/*功能3：删除联系人*/
int Delete_Contact(AddressBooks *abs,int m_size)
{
    int i;
    string name;
    Personalinfo contactTemp;

    if(m_size == 0)
    {
        cout << "通讯录为空！" << endl;
    }
    else
    {
        cout << "请输入要删除的联系人姓名:";
        cin >> name;
        int ret = isExist(abs,name);
        if(ret == -1)
        {
            cout << "查无此人" << endl;
            return -1;
        }
        else
        {
            for(i = ret;i < m_size - 1;i++)
            {
                abs->Abs[i] = abs->Abs[i+1];
            }           
            cout << "已经删除该联系人" << endl;
            abs->m_size--;
        }
    }
    return 1; 
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
			cout << "------------------------------------------------------------------\n"
                << i+1 << "、姓名:" << abs->Abs[i].name;
			if (abs->Abs[i].gender == 1)
			{
				cout << "\t性别:男";
			}
			else if (abs->Abs[i].gender == 2)
			{
				cout << "\t性别:女";
			}
			cout << "\t年龄:" << abs->Abs[i].age
				<< "\t电话:" << abs->Abs[i].phone
				<< "\t地址:" << abs->Abs[i].address
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

        abs->m_size++;
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
                ret = Delete_Contact(&abs,abs.m_size);
				break;
			case 4:
                ret = Find_appoint(&abs,abs.m_size);
				break;
			case 5:
                ret = Modify_info(&abs,abs.m_size);
				break;
			case 6:
                ret = Empty_Contact(&abs,abs.m_size); 
				break;
			default:
				break;

		}
	}



	system("pause");
	return 0;
}          