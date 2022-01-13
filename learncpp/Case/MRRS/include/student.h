#pragma
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student
{
friend class MercineSysManager;
public:
    //重载等号
    bool operator==(const Student &stu);

    //学生账号
    string m_Account;
    //学生密码
    string m_Password;
    //姓名
    string m_Name;
    //学号
    string m_Num;

};

#endif