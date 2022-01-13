#include "../include/msys.h"

//主菜单
void MercineSysManager::sys_Menu()
{
    cout << "===========欢迎使用Rex机房预约系统===========" << endl;
    cout << "                <请选择您的身份>" << endl;
    cout << "           -------------------------" << endl;
    cout << "          |                         |" << endl;
    cout << "          |       1.学生代表        |" << endl;
    cout << "          |       2.老    师        |" << endl;
    cout << "          |       3.管 理 员        |" << endl;
    cout << "          |       0.退    出        |" << endl;
    cout << "          |                         |" << endl;
    cout << "           -------------------------" << endl;
    cout << "请输入您的选择:";
}

//管理员菜单
void MercineSysManager::manager_Menu()
{
    cout << "===========欢迎使用Rex机房预约系统===========" << endl;
    cout << "                <管理员模式:>" << endl;
    cout << "           -------------------------" << endl;
    cout << "          |                         |" << endl;
    cout << "          |       1.添加账号        |" << endl;
    cout << "          |       2.查看账号        |" << endl;
    cout << "          |       3.查看机房        |" << endl;
    cout << "          |       4.清空预约        |" << endl;
    cout << "          |       0.退出登录        |" << endl;
    cout << "          |                         |" << endl;
    cout << "           -------------------------" << endl;
    cout << "请输入您的选择:";
}

//管理员模式
void MercineSysManager::managerMode(MercineSysManager &msm)
{
    system("clear");
    if(!manager_Login())
    {
        return;
    } 
    //选项
    int choice;
    while(true)
    {
        //展示菜单
        msm.manager_Menu();
        cin >> choice;

        switch (choice)
        {
        case 1:     //添加账号
            msm.register_Account(msm);
            break;
        case 2:     //查看账号
            msm.check_Account(msm);
            break;
        case 3:     //查看机房
        
            break;
        case 4:     //清空预约
        
            break;
        case 0:     //退出登录
        
            return;
        default:
            break;
        }
        system("clear");
    } 
}

//账号注册菜单
void MercineSysManager::register_Account_Menu()
{
    cout << "===========欢迎使用Rex机房预约系统===========" << endl;
    cout << "              <请选择添加账号类型:>" << endl;
    cout << "           -------------------------" << endl;
    cout << "          |                         |" << endl;
    cout << "          |       1.添加学生        |" << endl;
    cout << "          |       2.添加老师        |" << endl;
    cout << "          |       0.返回上级        |" << endl;
    cout << "          |                         |" << endl;
    cout << "           -------------------------" << endl;
    cout << "请输入您的选择:";
}

 //添加账号(注册账号)
void MercineSysManager::register_Account(MercineSysManager &msm)
{
    system("clear");
    //选项
    int choice;
    while(true)
    {
        //展示菜单
        msm.register_Account_Menu();
        cin >> choice;

        switch (choice)
        {
        case 1:     //添加学生账号
            account_Info("students");
            break;
        case 2:     //添加老师账号           
            account_Info("teachers");
            break;
        case 0:     //返回上级
            return;
        default:
            break;
        }
        system("clear");
    }
}

//查看账号菜单
void MercineSysManager::check_Account_Menu()
{
    cout << "===========欢迎使用Rex机房预约系统===========" << endl;
    cout << "              <请选择查看账号类型:>" << endl;
    cout << "           -------------------------" << endl;
    cout << "          |                         |" << endl;
    cout << "          |       1.查看学生        |" << endl;
    cout << "          |       2.查看老师        |" << endl;
    cout << "          |       0.返回上级        |" << endl;
    cout << "          |                         |" << endl;
    cout << "           -------------------------" << endl;
    cout << "请输入您的选择:";
}

//查看账号
void MercineSysManager::check_Account(MercineSysManager &msm)
{
    system("clear");
    //选项
    int choice;
    while(true)
    {
        //展示菜单
        msm.check_Account_Menu();
        cin >> choice;

        switch (choice)
        {
        case 1:     //查看学生账号信息
            show_Acocount_Info("students");
            break;
        case 2:     //查看老师账号信息
            show_Acocount_Info("teachers");
            break;
        case 0:     //返回上级
            return;
        default:
            break;
        }
        system("clear");
    }
}


//学生界面菜单
void MercineSysManager::student_Menu()
{
    map<int,Student>::iterator it = s_Temp.begin();
    cout << "===========欢迎使用Rex机房预约系统===========" << endl;
    cout << "              <欢迎学生" << it->second.m_Name << "> "<< endl;
    cout << "           -------------------------" << endl;
    cout << "          |                         |" << endl;
    cout << "          |       1.申请预约        |" << endl;
    cout << "          |       2.查看我的预约    |" << endl;
    cout << "          |       3.查看所有预约    |" << endl;
    cout << "          |       4.取消预约        |" << endl;
    cout << "          |       0.注销登录        |" << endl;
    cout << "          |                         |" << endl;
    cout << "           -------------------------" << endl;
    cout << "请输入您的选择:";
}

//学生界面选择
void MercineSysManager::student_Select(MercineSysManager &msm)
{
    system("clear");
    if(!user_Login("students"))
    {
        int t;
        cin >> t;
        return;
    }
    //选项
    int choice;
    while(true)
    {
        //展示菜单
        msm.student_Menu();
        cin >> choice;

        switch (choice)
        {
        case 1:     //1.申请预约 

            break;
        case 2:     //2.查看我的预约

            break;
        case 3:     //3.查看所有预约

            break;
        case 4:     //4.取消预约

            break;
        case 0:     //返回上级
            user_Logout("students");
            return;
        default:
            break;
        }
        system("clear");
    }
}

//教师界面菜单
void MercineSysManager::teacher_Menu()
{
    map<int,Teacher>::iterator it = t_Temp.begin();
    cout << "===========欢迎使用Rex机房预约系统===========" << endl;
    cout << "              <欢迎教师" << it->second.m_Name << "> "<< endl;
    cout << "           -------------------------" << endl;
    cout << "          |                         |" << endl;
    cout << "          |       1.查看所有预约    |" << endl;
    cout << "          |       2.审核预约        |" << endl;
    cout << "          |       0.注销登录        |" << endl;
    cout << "          |                         |" << endl;
    cout << "           -------------------------" << endl;
    cout << "请输入您的选择:";
}

//教师界面选择
void MercineSysManager::teacher_Select(MercineSysManager &msm)
{

    system("clear");
    if(!user_Login("teachers"))
    {
        int t;
        cin >> t;
        return;
    }
    //选项
    int choice;
    while(true)
    {
        //展示菜单
        msm.teacher_Menu();
        cin >> choice;

        switch (choice)
        {
        case 1:     //1.查看所有预约

            break;
        case 2:     //2.审核预约

            break;
        case 0:     //返回上级
            user_Logout("teachers");
            return;
        default:
            break;
        }
        system("clear");
    }
}