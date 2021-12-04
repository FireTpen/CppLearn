#include <iostream>

using namespace std;

//成员变量和成员函数是分开存储的

class Person1
{

};

class Person2
{
public:
    int m_A;    //非静态成员变量  属于类的对象上

    static int m_B; //静态成员变量  不属于类的对象上
    
    void fun01()    //非静态成员函数    不属于类的对象上
    {

    }

    static void fun02() //静态成员函数  不属于类的对象上
    {

    }

};

int Person2::m_B = 10;

void test01()
{
    Person1 p;  //空对象占用内存空间为1个字节
    cout << "Person1对象占用字节:" << sizeof(p) << endl;
    //c++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
    //每个空对象也应该有一个独一无二的内存地址
}

void test02()
{
    Person2 p;  //因为静态成员变量和非静态成员函数、静态成员函数都不属于类的对象上
    cout << "Person2对象占用字节:" << sizeof(p) << endl;    //所以字节数为4
    cout << "Person2.m_B = " << Person2::m_B << endl;
}


int main()
{
    test01();
    test02();

    return 0;
}