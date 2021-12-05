#include <iostream>
using namespace std;

/*
多继承：一个子类继承多个父类。
C++允许一个类继承多个类

语法：class 子类：继承方式 父类1 ， 继承方式 父类2 ...

多继承可能会引发父类中有同名成员出现，需要加作用域区分

#C++实际开发中不建议用多继承
*/

class Base1
{
public:
    int m_A = 10;
};

class Base2
{
public:
    int m_A = 20;
};

class Son : public Base1,public Base2
{
public:
    int m_A = 30;


};

void test()
{
    Son s;
    s.m_A;
    s.Base1::m_A;
    s.Base2::m_A;

}

int main()
{
    test();
    return 0;
}