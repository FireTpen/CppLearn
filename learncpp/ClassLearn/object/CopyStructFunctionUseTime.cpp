#include <iostream>

using namespace std;
//拷贝函数调用时机

//1、使用一个已经创建完毕的对象来初始化一个新对象（复制一个一模一样的对象）

//2、值传递的方式给函数参数传值

//3、值方式返回局部对象

class Person
{
public:
    Person()
    {
        cout << "调用Person函数的无参构造函数" << endl;
    }

    Person(int a)
    {
        cout << "调用Person函数的有参构造函数" << endl;
    }
    Person(const Person &p)
    {
        cout << "调用Person函数的拷贝构造函数" << endl;
        m_age = p.m_age;
    }
    ~Person()
    {
        cout << "调用Person函数的析构函数" << endl;
    }

private:
    int m_age;

};


//1、使用一个已经创建完毕的对象来初始化一个新对象（复制一个一模一样的对象）
void test01()
{
    Person p1;
    Person p2(p1);

}


//2、值传递的方式给函数参数传值
void test02(Person p)
{

    cout << (int*)&p << endl;
}

//3、值方式返回局部对象
Person test03()
{
    Person p;
    return p;
}


int main()
{
    //1.
    //test01();
    //2.
    //Person p1;
    //test02(p1);
    //cout << (int *)&p1;
    //3.
    Person p3 = test03();

    return 0;
}