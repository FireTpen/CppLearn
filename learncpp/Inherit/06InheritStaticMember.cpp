#include <iostream>

using namespace std;
/*
同名静态成员函数的处理


*/

class Base
{
public:
    static void fun()
    {
        cout << "调用Base中的静态成员函数" << endl;
    }
    static int m_A;
};
int Base::m_A =10;


class Son : public Base
{
public:
    static void fun()
    {
        cout << "调用Son中的静态成员函数" << endl;
    }
    static int m_A;

};
int Son::m_A = 20;


void test()
{
    Son s;
    //1.通过对象访问
    cout << "s.Base::m_A =" << s.Base::m_A << endl; //通过对象来访问
    s.fun();
    //2.通过类名来访问
    cout << "通过类名访问Base中的m_A = " << Base::m_A << endl;
    cout << "通过子类访问Base中的m_A = " << Son::Base::m_A << endl; //Son::代表通过类名访问,Base::代表的是作用域
    Base::fun();
    Son::Base::fun();

}


int main()
{
    test();

    return 0;
}