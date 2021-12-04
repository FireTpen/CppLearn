#include <iostream>

using namespace std;

class Student
{
public:     //成员属性(成员变量)
    string m_Name;
    int m_Id;

public:     //成员行为(成员方法)
    void set_Name(string name)
    {
        m_Name = name;
    }
    void set_Id(int id)
    {
        m_Id = id;
    }
    void display_Info()
    {
        cout << "姓名:" << m_Name << "  学号:" << m_Id << endl;
    }

};



int main()
{
    Student stu1;
    stu1.set_Name("张三");
    stu1.set_Id(1);
    stu1.display_Info();

    return 0;
}