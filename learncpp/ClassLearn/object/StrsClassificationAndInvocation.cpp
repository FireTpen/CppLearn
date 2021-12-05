#include <iostream>

using namespace std;
/*
1.按参数分类:有参构造（默认构造）和无参构造
2.按类型分类:普通构造和拷贝构造
3.三种调用方式:①括号法、②显示法、③隐式转换法

*/

class Person
{
public:
    //1.无参构造
    Person()
    {
        cout << "调用Person无惨构造函数" << endl;
    }
    //2.有参构造
    Person(int age)
    {
        m_Age = age;
        cout << "调用Person有参构造函数" << endl;
    }
    //3.拷贝构造
    Person(const Person &p)
    {
        m_Age = p.m_Age;
        cout << "调用Person拷贝构造函数" << endl;
    }

    ~Person()
    {
        cout << "调用Person析构函数" << endl;
    }



private:
    int m_Age;
};





int main()
{
    Person p1;  //直接调用无参构造

    //1.括号法
    Person p2(10);  //有参构造
    Person p3(p2);  //拷贝构造
    //1.注意事项:不要使用 Person p2(); 这种方式调用无参构造，编译器会识别为函数声明;

    //2.显示法
    Person p4 = Person(10);
    Person p5 = Person(p4);

    //3.隐式转换法
    Person p6 = 10;
    Person p7 = p6;




    return 0;
}