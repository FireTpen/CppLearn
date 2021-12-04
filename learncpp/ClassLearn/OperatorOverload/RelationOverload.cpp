#include <iostream>
#include <string>
using namespace std;

//关系运算符重载
//当我们自定义一种类型，关系运算符是不能直接判断该类型两个对象之间的关系的，那么此时我们可以对关系运算符进行重载来实现判断功能

class Person
{
public:
    Person(string name,int age)
    {
        m_Name = name;
        m_Age = age;
    }

    bool operator==(Person &p)
    {
        if(m_Name == p.m_Name && m_Age == p.m_Age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator!=(Person &p)
    {
        if(m_Name != p.m_Name || m_Age != p.m_Age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int m_Age;
    string m_Name;
};


void test()
{
    Person p1("冯家豪",24);
    Person p2("陈莹",21);
    Person p3("陈莹",21);

    if(p1 == p2)
    {
        cout << "p1和p2相等" << endl;
    }
    else
    {
        cout << "p1和p2不相等" << endl;
    }

    if(p2 != p3)
    {
        cout << "p2和p3不相等" << endl;
    }
    else
    {
        cout << "p2和p3相等" << endl;
    }
}

int main()
{
    test();

    return 0;
}