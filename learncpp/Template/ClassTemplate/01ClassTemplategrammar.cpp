#include <iostream>
#include <string>

using namespace std;

/*
    类模板的语法
*/

template <class NameType,class AgeType>
class Person
{
public:
    Person(NameType name,AgeType age)
    {
        this->m_Name = name;
        this->m_Age = age;

    }

    NameType m_Name;
    AgeType m_Age;
};


void test()
{
    Person<string,int> p1("张三",18);

    cout << "姓名:" << p1.m_Name << endl;
    cout << "年龄:" << p1.m_Age << endl;
}

int main()
{
    test();

    return 0;
}