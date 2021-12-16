#include <iostream>
#include <string>

using namespace std;

/* 类模板中成员函数创建时机
类模板中成员函数和普通类中成员函数创建时机是有区别的:
·普通类中的成员函数一开始就可以创建
·类模板中的成员函数在调用时才创建

总结:类模板中的成员函数并不是一开始就创建的，在调用时才去创建

*/
class Person1
{
public:
    void show1()
    {
        cout << "调用Perosn1 show()" << endl; 
    }
};

class Person2
{
public:
    void show2()
    {
        cout << "调用Perosn2 show()" << endl; 
    }
};

template<class T>
class Myclass
{
public:
    T obj;

    void fun1()
    {
        obj.show1();
    }
    void fun2()
    {
        obj.show2();
    }

};


void test()
{
    Myclass<Person1> m1;
    m1.fun2();
}


int main()
{
    test();

    return 0;
}