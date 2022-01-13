#include "../include/msys.h"

/*========================================================管理员功能======================================================================*/

//展示账号信息
void MercineSysManager::show_Acocount_Info(string status)
{
    //判断身份
    if(status == "students")
    {
        map<int,vector<string>>::iterator sit = m_Stu_Record.begin();
        for(int i = 0;i < this->m_Stu_Record.size();i++,sit++)
        {
            cout << " 序号:" << sit->first
                 << " 账号:" << this->m_Stu_Record[i][0]
                 << " 密码:" << this->m_Stu_Record[i][1] 
                 << " 姓名:" << this->m_Stu_Record[i][2]
                 << " 学生号:" << this->m_Stu_Record[i][3] << endl;
        }
        
    }
    else if(status == "teachers")
    {
        map<int,vector<string>>::iterator tit = m_Tea_Record.begin();
        for(int i = 0;i < this->m_Tea_Record.size();i++,tit++)
        {
            cout << " 序号:" << tit->first
                 << " 账号:" << this->m_Tea_Record[i][0]
                 << " 密码:" << this->m_Tea_Record[i][1] 
                 << " 姓名:" << this->m_Tea_Record[i][2]
                 << " 职工号:" << this->m_Tea_Record[i][3] << endl;
        }
    }
    string t;
    cin >> t; 
}

//(写)账号信息
template <class T>
void MercineSysManager::account_write(string status,T &member)
{
    //以写模式打开文件
    ofstream ofs;

    string filenName;
    filenName = ("../docs/"+status + ".csv");

    //1.打开文件
    ofs.open(filenName,ios::out | ios::app);    //以输出的方式打开文件，输出追加到文件末尾

    //2.写入文件
    //cout << member.m_Name << endl;
    ofs << member.m_Account << "," << member.m_Password << "," << member.m_Name << "," << member.m_Num << "," << endl;

    //3.关闭文件
    ofs.close();
    
    cout << "注册" << status << "账号成功!" << endl;
    this->sys_Init();
    string t;
    cin >> t;
    return;
}

//(读)账号信息
void MercineSysManager::account_read(string status)
{
    //以读方式打开文件
    ifstream ifs;

    string filenName;
    filenName = ("../docs/"+status + ".csv");

    //1.打开文件
    ifs.open(filenName,ios::in);    //输入流对象 读取文件

    //文件不存在
    if(!ifs.is_open())
    {
        this->fileIsEmpty = true;
        cout << filenName << "不存在！" << endl;
        ifs.close();
        return;
    }
    //文件为空
    char ch;
    ifs >> ch; //让ifs只读一个字符， 如果读取一个字符就到文件末尾，那么文件为空
    if(ifs.eof())
    {
        cout << filenName << "文件为空！" << endl;
        this->fileIsEmpty = true;
        ifs.close();
        return;
    }

    //文件不为空
    this->fileIsEmpty = false;
    ifs.putback(ch);    //读取单个字符放回去

    string data;
    int index = 0;
    while(ifs >> data)
    {
        vector<string>v;
        int pos = -1;
        int start = 0;

        while(true)
        {
            pos = data.find(",",start); //从0开始查找","    pos为逗号的位置
            if(pos == -1)
            {
                break; //找不到break返回
            }
            string tmp = data.substr(start,pos - start);    //找到了，进行分割，参数1:起始位置 参数2:截取长度
            //cout << tmp << endl;
            v.push_back(tmp);
            start = pos + 1;
        }
        if(status == "students")
        {
            this->m_Stu_Record.insert(make_pair(index,v));
            index++;
        }
        else if(status == "teachers")
        {
            this->m_Tea_Record.insert(make_pair(index,v));
            index++;
        }
    }
    if(status == "students")
    {
        this->stu_Index = index;
    }
    else if(status == "teachers")
    {
        this->tea_Index = index;
    }   
    
    ifs.close();
}

//账号注册信息填写
void MercineSysManager::account_Info(string status)
{
    if(status == "students")    //学生信息写入
    {
        Student stu;
        cout << "正在注册学生账号!" << endl;
        cout << "账号:";
        cin >> stu.m_Account;
        cout << "密码:";
        cin >> stu.m_Password;
        cout << "姓名:";
        cin >> stu.m_Name;
        cout << "学生号:";
        cin >> stu.m_Num;

        account_write<Student>(status,stu);

        m_Student.insert(make_pair(stu_Index,stu));
        stu_Index++;
    }
    else if(status == "teachers")   //老师信息写入
    {
        Teacher tea;
        cout << "正在注册老师账号!" << endl;
        cout << "账号:";
        cin >> tea.m_Account;
        cout << "密码:";
        cin >> tea.m_Password;
        cout << "姓名:";
        cin >> tea.m_Name;
        cout << "职工号:";
        cin >> tea.m_Num;

        account_write<Teacher>(status,tea);

        m_Teacher.insert(make_pair(tea_Index,tea));
        tea_Index++;
    }
}

/*========================================================管理员功能======================================================================*/

