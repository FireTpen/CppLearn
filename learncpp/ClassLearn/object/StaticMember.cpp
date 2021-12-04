#include <iostream>

using namespace std;

/*
    静态成员
    静态成员就是在成员变量和成员函数前加上关键字static,称为静态成员
    静态成员分为:

    ·静态成员变量
        1.所有对象共享同一份数据
        2.在编译阶段分配内存
        3.类内声明，类外初始化
    ·静态成员函数
        1.所有对象共享同一个函数
        2.静态成员函数只能访问静态成员变量

*/

class Person
{
public:

    static void fun1()
    {
        cout << "调用fun1()" << endl;
        m_A = 100;  //静态函数可以访问静态属性
        //m_B = 100;  //静态函数不能访问非静态属性，因为它不知道该属性是哪个对象的属性，无法分辨

    }

    static int m_A;
    int m_B;

private:
    static void fun2()
    {
        cout << "调用fun2()" << endl;
    }
};

int Person::m_A = 10;

void test()
{
    Person p1;
    //p1.fun2()是无法调用的，即使是静态函数，在私有权限里也是无法在外部进行访问的


    //静态成员变量访问的方法有两种:
    //1.通过对象 来访问
    p1.fun1();
    //2.通过类名 来访问
    Person::fun1(); //因为它是静态成员函数，无需创建对象即可直接访问函数。

}


int main()
{
    test();

    return 0;
}