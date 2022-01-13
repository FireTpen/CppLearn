#pragma
#ifndef MSYS_H
#define MSYS_H

#include <iostream>
#include <map>
#include <fstream>
#include <vector>
using namespace std;
#include "../include/manager.h"
#include "../include/student.h"
#include "../include/teacher.h"


class MercineSysManager
{
public:
    /*===============================默认功能================================*/
    //构造函数
    MercineSysManager();

    //主界面
    void sys_Menu();

    //初始化
    void sys_Init();

    //析构函数
    ~MercineSysManager();

    //退出系统
    void exitSystem();

    //用户登录功能
    bool user_Login(string status);

    //账号密码比较
    bool account_Password_Compare(string account,string password,string status);

    //管理员登录功能
    bool manager_Login();

    //注销登录
    void user_Logout(string status);

    //从文本种获取人员信息到人员容器中
    void get_Info(string status);

    /*===============================默认功能================================*/

    /*=============================管理员功能================================*/
    //管理员模式
    void managerMode(MercineSysManager &msm);

    //管理员菜单
    void manager_Menu();

    //添加账号(注册账号)
    void register_Account(MercineSysManager &msm);
    
    //账号注册菜单
    void register_Account_Menu();

    //查看账号
    void check_Account(MercineSysManager &msm);

    //查看账号菜单
    void check_Account_Menu();

    //展示账号信息
    void show_Acocount_Info(string status);

    //(写)账号信息
    template <class T>
    void account_write(string status,T &member);

    //(读)账号信息
    void account_read(string status);

    //账号注册信息填写
    void account_Info(string status);
    /*=============================管理员功能================================*/

    /*=============================学生端功能================================*/
    //学生界面菜单
    void student_Menu();

    //学生界面选择
    void student_Select(MercineSysManager &msm);

    /*=============================学生端功能================================*/

    /*=============================教师端功能================================*/
    //教师界面菜单
    void teacher_Menu();

    //教师界面选择
    void teacher_Select(MercineSysManager &msm);

    /*=============================教师端功能================================*/

public:
    //机房
    map<int,int> m_Room;

    //机房状态  //0.空闲状态 1.占用状态 2.预约状态 
    int m_RoomState;

    //学生容器
    map<int,Student> m_Student;
    map<int,Student> s_Temp;
    map<int,vector<string>> m_Stu_Record;
    int stu_Index;

    //老师容器
    map<int,Teacher> m_Teacher;
    map<int,Teacher> t_Temp;
    map<int,vector<string>> m_Tea_Record;
    int tea_Index;

    //机房
    vector<vector<string>>m_MR;

    //读取文件状态
    bool fileIsEmpty;
};


#endif