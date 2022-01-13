#include "../include/msys.h"

/*=========================================================默认功能======================================================================*/
//构造函数
MercineSysManager::MercineSysManager()
{
    stu_Index = 0;
    tea_Index = 0;
    this->sys_Init();
}

//析构函数
MercineSysManager::~MercineSysManager()
{
    
}

//初始化
void MercineSysManager::sys_Init()
{
    this->account_read("students");
    this->account_read("teachers");
    this->get_Info("students");
    this->get_Info("teachers");
}

//管理员登录功能
bool MercineSysManager::manager_Login()
{
    Manager m;
    string account;
    string password;
    cout << "管理员账号:";
    cin >> account;
    cout << "管理员密码:";
    cin >> password;
    
    if(account == m.m_Account && password == m.m_Password)
    {
        cout << "进入管理员模式" << endl;
        return true;
    }
    else
    {
        cout << "账号或密码错误" << endl;
        return false;
    }
}

//账号密码比较
bool MercineSysManager::account_Password_Compare(string account,string password,string status)
{
    if(status == "students")
    {
        for(map<int,Student>::iterator it = m_Student.begin();it != m_Student.end();it++)
        {
            if(it->second.m_Account == account && it->second.m_Password == password)
            {
                Student stu;
                stu.m_Account = it->second.m_Account;
                stu.m_Password =it->second.m_Password;
                stu.m_Name = it->second.m_Name;
                stu.m_Num = it->second.m_Num;
                s_Temp.insert(make_pair(0,stu));
                return true;
            }
        }
        return false;
    }
    else if(status == "teachers")
    {
        for(map<int,Teacher>::iterator it = m_Teacher.begin();it != m_Teacher.end();it++)
        {
            if(it->second.m_Account == account && it->second.m_Password == password)
            {

                Teacher tea;
                tea.m_Account = it->second.m_Account;
                tea.m_Password =it->second.m_Password;
                tea.m_Name = it->second.m_Name;
                tea.m_Num = it->second.m_Num;
                t_Temp.insert(make_pair(0,tea));
                return true;
            }
        }
        return false;
    }
    return false;
}

//用户登录功能
bool MercineSysManager::user_Login(string status)
{
    string account;
    string password;

    if(status == "students")
    {
        cout << "学生账号:";
        cin >> account;
        cout << "密码:";
        cin >> password;
        if(account_Password_Compare(account,password,status))
        {
            cout << "登录成功!" << endl;
            map<int,Student>::iterator it = s_Temp.begin();
            cout << "欢迎" << it->second.m_Name << endl;
            return true;
        }
        else
        {
            cout << "登陆失败!请检查输入是否有误!" << endl;
            return false;
        }

    }
    else if(status == "teachers")
    {
        cout << "教师账号:";
        cin >> account;
        cout << "密码:";
        cin >> password;
        if(account_Password_Compare(account,password,status))
        {
            cout << "登录成功!" << endl;
            map<int,Teacher>::iterator it = t_Temp.begin();
            cout << "欢迎" << it->second.m_Name << endl;
            return true;
        }
        else
        {
            cout << "登陆失败!请检查输入是否有误!" << endl;
            return false;
        }
    }
    return false;
}

//从文本种获取人员信息到人员容器中
void MercineSysManager::get_Info(string status)
{
    if(status == "students")
    {
        for(map<int,vector<string>>::iterator it = this->m_Stu_Record.begin();it != this->m_Stu_Record.end();it++)
        {
            Student stu;
            int index = 0;
            index = it->first;
            stu.m_Account = it->second[0];
            stu.m_Password = it->second[1];
            stu.m_Name = it->second[2];
            stu.m_Num = it->second[3];
            //cout << " 账号:" << stu.m_Account <<" 密码:" << stu.m_Password << " 姓名: "<< stu.m_Name << "学生号:" <<stu.m_Num <<endl;
            m_Student.insert(make_pair(index,stu));
        }
    }
    else if(status == "teachers")
    {
        for(map<int,vector<string>>::iterator it = this->m_Tea_Record.begin();it != this->m_Tea_Record.end();it++)
        {
            Teacher tea;
            int index = 0;
            index = it->first;
            tea.m_Account = it->second[0];
            tea.m_Password = it->second[1];
            tea.m_Name = it->second[2];
            tea.m_Num = it->second[3];
            //cout << " 账号:" << stu.m_Account <<" 密码:" << stu.m_Password << " 姓名: "<< stu.m_Name << "学生号:" <<stu.m_Num <<endl;
            m_Teacher.insert(make_pair(index,tea));
        }
    }
}
//注销登录
void MercineSysManager::user_Logout(string status)
{
    
    if(status == "students")
    {
        s_Temp.clear();
    }
    else if(status == "teachers")
    {
        t_Temp.clear();
    }
    cout << "注销登录成功!" << endl;
    cout << "请输入任意键继续！" << endl;
    string t;
    cin >> t;
    
}

//退出系统
void MercineSysManager::exitSystem()
{
    cout << "欢迎下次使用!" << endl;
    exit(0);
}
/*=========================================================默认功能======================================================================*/
