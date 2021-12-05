#include <iostream>

using namespace std;

/*
    封装的意义二:把类的行为和属性放在不同的权限下加以控制
    三种权限:
    ①公共权限:public    类内可以访问，类外也可以访问
    ②保护权限:protected 类内可以访问，类外不可以访问
    ③私有权限:private   类内可以访问，类外不可以访问
*/

class Person
{

public:
    string m_name;

protected:
    string m_car;

private:
    int password;

public:
    void fun()
    {
        m_name = "张三";
        m_car = "宝马m3";
        password = 123;
    }

};



int main()
{
    Person p1;
    p1.m_car = "保时捷";

    return 0;
}