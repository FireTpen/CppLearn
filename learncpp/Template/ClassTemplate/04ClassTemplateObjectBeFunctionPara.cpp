#include <iostream>
#include <string>


using namespace std;

/*
·类模板实例化出的对象，向函数传参的方式

一共有三种传入方式：
1.指定传入的类型 ---- 直接显示对象的数据类型
2.参数模板化 ---- 将对象中的参数变为模板进行传递
3.整个类模板化 ---- 将这个对象类型 模板化进行传递

总结:
·通过类模板创建的对象，可以有三种方式向函数中进行传参
·使用比较广泛是第一种:指定传入的类型

*/

template <class T1,class T2>
class Person
{
public:

    Person(T1 name,T2 age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    void showInfo()
    {
        cout << "姓名:" << this->m_Name;
        cout << " 年龄:" << this->m_Age << endl;
    }

    T1 m_Name;
    T2 m_Age;
};

//1.指定传入的类型
void Point_Introduction_Type(Person<string,int> &p)
{
    p.showInfo();
}

void test01()
{
    Person<string,int> p1("猪八戒",88);
    Point_Introduction_Type(p1);
}

//2.参数模板化
template <class T1,class T2>
void Para_Template(Person<T1,T2> &p)
{
    p.showInfo();
    cout << "T1的类型为:" << typeid(T1).name() << endl;
}

void test02()
{
    Person <string,int> p("唐山",2002);
    Para_Template(p);
}

//3.整个类模板化

template<class T>
void HoldClassTemplate(T &p)
{
    p.showInfo();
}

void test03()
{
    Person<string,int>p("沙僧",29);
    HoldClassTemplate(p);

}

int main()
{
    test01();
    test02();
    return 0;
}