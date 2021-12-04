#include <iostream>

using namespace std;
/*
    默认情况下，C++编译器至少给一个类添加3个函数
    1.默认构造函数（无参，函数体为空）
    2、默认析构函数（无参，函数体为空）
    3、默认拷贝函数,对属性进行赋值


    函数调用规则如下:
    ·如果用户定义了有参构造函数，那么编译器将不会提供默认构造函数，但依然提供拷贝构造函数
    ·如果用户定义了拷贝构造函数，那么编译器将不再提供默认构造函数和有参构造函数。

*/

class Person
{
public:
    //1.默认构造函数
    Person()
    {

    }
    Person(int age)
    {
        m_age = age;
    }
    Person(Person &p)
    {
        m_age = p.m_age;
    }

    //析构函数
    ~Person()
    {

    }

private:
    int m_age;

};


int main()
{


    return 0;
}