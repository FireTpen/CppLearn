#include <iostream>

using namespace std;

/*
    const修饰成员函数

    常函数:
    ·成员函数加const后，我们称这个函数为常函数
    ·常函数内不可以修改成员属性
    ·成员属性声明时加关键字 mutable 后，在常函数中依然可以修改

    常对象：
    ·声明对象前加const，称该对象为常对象
    ·常对象只能调用常函数
*/

class Person
{
public:
    //this指针的本质，是指针常量，指针的指向是不可以修改的。
    //Person *const this;   //这是this指针的本质

    void showPerson()
    {
        m_A = 100;
    }
//1.常函数
    void showPerson2() const  //const Person *const this;
    {
        m_B = 100;  //若是想在const修饰的成员函数中修改成员属性，
                    //那么这个成员属性声明前要加mutable关键字
    }

    int m_A;
    mutable int m_B; //mutable关键字使得m_B变为特殊变量，即使在常函数中也可以修改它的值。
};

//2.常对象
void test()
{
    const Person p; //常对象
    p.m_A = 100; //会报错，因为常对象不能修改成员属性
    p.m_B = 100; //不会报错，因为m_B用mutable来修饰，是个特殊值，在常对象下也可以修改它的值。

    //常对象只能调用常函数，非常函数不可调用，因为非常函数可以修改成员属性，与常对象本质不符。
    p.showPerson2();
}

int main()
{
    test();

    return 0;
}