#include <iostream>
#include <string>
using namespace std;

/*
学习目标：
·掌握类模板配合友元函数的类内和类外实现

全局函数类内实现-直接在类内声明友元即可

全局函数类外实现-需要提前让编译器知道全局函数的存在

*/

//类的声明要放到全局函数类外实现这个函数的上方，让编译器提前知道有这个类
template<class T1,class T2>
class Person;

//类外实现 -- 要放到 类的上方，让编译器提前知道这个函数的存在
template<class T1,class T2>
void printPerson2(Person<T1,T2> p)
{
    cout << "姓名： " << p.m_Name << "年龄：" << p.m_Age << endl;
}


template<class T1,class T2>
class Person
{
    //全局函数 类内实现
    friend void printPerson(Person<T1,T2> p)
    {
        cout << "姓名： " << p.m_Name << "年龄：" << p.m_Age << endl;
    }

    //全局函数类外实现
    friend void printPerson2<>(Person<T1,T2> p);

public:
    Person(T1 name,T2 age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

private:
    T1 m_Name;
    T2 m_Age;

};



void test01()
{
    Person <string,int> p("Tom",20);

    printPerson(p);

    printPerson2(p);
}

int main()
{
    test01();
    return 0;
}