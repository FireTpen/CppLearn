#include <iostream>

using namespace std;

//成员属性私有化
//1.可以自由控制读写权限
//2.可以检测数据有效性


class Person
{
public:
    //只写
    void setName(string name)
    {
        m_Name = name;
    }
    void setLover(string name)
    {
        Lover = name;
    }
    void setAge(int age)
    {
        if(age < 0 || age > 150)        //判断输入的数据有效性
        {
            cout << "你输入的年龄非人类" << endl;
            return;
        }
        else
        {
            m_Age = age;
        }
    }
    //只读
    void getName()
    {
        return m_Name;
    }
    void getAge()
    {
        return m_Age;
    }

private:
    string m_Name;
    int m_Age;
    string Lover;

};


int main()
{


    return 0;
}