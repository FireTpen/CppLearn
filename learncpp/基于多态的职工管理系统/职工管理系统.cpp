#include <iostream>
#include "workerManager.h"

using namespace std;

int main()
{
	//实例化管理者对象
	WorkerManager wm;

	//用switch功能做一个分支，选择菜单的功能
	int choice = 0;		//定义一个变量来选择功能

	while (true)
	{
		//调用展示菜单成员函数
		wm.Show_Menu();
		cout << "请输入您的选择:" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:	//退出系统
			wm.exitSystem();
				break;
		case 1:	//添加职工
			wm.Add_Emp();
			break;
		case 2:	//显示职工
			wm.Show_Emp();
			break;
		case 3:	//删除职工
			wm.Del_Emp();
			break;
		case 4: //修改职工
			wm.Mod_Emp();
			break;
		case 5:	//查找职工
			wm.Find_Emp();
			break;
		case 6:	//排序职工
			wm.Sort_Emp();
			break;
		case 7:	//清空职工
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;

		}
	}
	


	system("pause");
	return 0;
}