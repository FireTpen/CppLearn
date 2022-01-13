#pragma
#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <string>
using namespace std;

class Teacher
{
friend class MercineSysManager;
public:
    //重载等号
    bool operator==(const Teacher &tea);



    //老师账号
    string m_Account;
    //老师密码
    string m_Password;
    //姓名
    string m_Name;
    //职工号
    string m_Num;
};

#endif