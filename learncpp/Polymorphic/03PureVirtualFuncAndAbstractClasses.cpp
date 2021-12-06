#include <iostream>

using namespace std;

/*
    在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
    因此可以将虚函数改为纯虚函数
    
    纯虚函数语法: virtual 返回值类型 函数名 (参数列表) = 0;
    当类中有了纯虚函数，这个类也成为抽象类

    抽象类特点:
    ·无法实例化对象
    ·子类必须重写抽象类中的纯虚函数，否则也属于抽象类
*/

//抽象类
class Base
{
//纯虚函数
public:
    //纯虚函数无法实例化对象
    virtual void fun() = 0;

};

//子类
//子类中也要重写一次父类中的纯虚函数，如果不重写纯虚函数，子类也为抽象类，无法实例化对象。
class Son : public Base
{
public:
    virtual void fun()
    {
        cout << "调用Son的fun()函数" << endl;
    }

};

void test()
{
    Base *b = new Son;
    b->fun();
}

int main()
{
    test();

    return 0;
}