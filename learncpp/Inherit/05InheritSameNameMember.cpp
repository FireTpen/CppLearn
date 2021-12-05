#include <iostream>

using namespace std;

/*
继承中子类和父类同名成员处理
总结:
·子类可以直接调用子类中的成员
·子类无法直接调用父类中的同名成员，子类对象加作用域才可以访问到父类中同名成员
·当子类和父类拥有同名的成员函数，子类会隐藏父类中的同名成员函数，加作用域才可以访问。
*/

class Base
{
public:

    void fun()
    {
        cout << "Base的fun()函数" << endl;
    }

    int m_A = 20;

};

class Son : public Base
{
public:

    void fun()
    {
        cout << "Son的fun()函数";
    }
    int m_A = 100;
};

void test()
{
    Son s;
    cout << "s.m_A = " << s.m_A << endl;
    cout << "s.父类m_A = " << s.Base::m_A << endl;  //在调用父类同名成员加上作用域
    s.fun();
    s.Base::fun();
}

int main()
{
    test();

    return 0;
}