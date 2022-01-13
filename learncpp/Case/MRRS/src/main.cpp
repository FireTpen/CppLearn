#include <iostream>
#include "../include/msys.h"

using namespace std;

int main()
{
    //创建系统
    MercineSysManager msm;
    
    //主界面选项
    int choice;
    
    while (true)
    {
        //主菜单
        msm.sys_Menu();
        //输入选项
        cin >> choice;
        switch (choice)
        {
            case 1: //学生代表
                msm.student_Select(msm);
                break;
            case 2: //老师
                msm.teacher_Select(msm);
                break;
            case 3: //管理员
                msm.managerMode(msm);
                break;
            case 0: //退出系统
                msm.exitSystem();
                break;
            default:
                cout << "请输入正确选项!" << endl;
                break;
        }
        system("clear");
    }
    
    
    return 0;
}