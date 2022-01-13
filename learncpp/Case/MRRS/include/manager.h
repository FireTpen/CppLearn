#pragma
#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include <string>
using namespace std;

class Manager
{

public:
    Manager()
    {
        this->m_Account = "admin";
        this->m_Password = "123";
    }


    //管理员账号
    string m_Account;
    //管理员密码
    string m_Password;

};

#endif