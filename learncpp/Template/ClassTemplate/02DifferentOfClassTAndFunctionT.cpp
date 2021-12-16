#include <iostream>
#include <string>

using namespace std;

/*
    类模板与函数模板区别主要有两点:
    1.类模板没有自动类型推导的使用方式
    2.类模板在模板参数列表中可以有默认参数

    总结:
    ·类模板使用只能用显示指定类型方式
    ·类模板中的模板参数列表可以有默认参数
*/

template <class NameType,class AgeType = int>//类模板中的模板参数列表可以指定默认参数
class Person
{
public:
    Person(NameType name,AgeType age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    void ShowPerson()
    {
        cout << "姓名：" << m_Name;
        cout << " 年龄: " << m_Age << endl;
    }


    NameType m_Name;
    AgeType m_Age;

};

void test()
{
    //错误
    //Person p1("朱百洁",199); //类模板没有自动类型推导，这样会编译报错

    //正确
    Person<string> p1("猪八戒",999);
    p1.ShowPerson();

}

int main()
{
    test();

    return 0;
}