#include <iostream>

using namespace std;
/*
    在C++中，成员变量和成员函数时分开存储的，
    每一个非静态成员函数只会诞生一份函数实例，
    也就是说多个同类型的对象公用一块代码
    那么，这一块代码是如何区分哪个对象在调用自己呢？

    c++通过提供特殊的对象指针：this指针，来区分。
    this指针指向被调用的成员阿函数所属的对象

    this指针时隐含每一个非静态成员函数内的一种指针
    this指针时不需要定义的，直接使用即可

    this指针的用途:
    ·当形参和成员变量同名时，可用this指针来区分
    ·在类的非静态成员函数中返回对象本身，可使用return *this
*/

class Person
{
public:
    //1.this的第一种用法
    Person(int age)     
    {
        //age = age;      //当成员变量和形参同名时，编译器会认为都是形参变量
        this->age = age;    //this指向该对象，所以 this->age 中的age是成员变量中的age
    }
    
    //2.this的第二种用法
    void PersonAddPerson(Person p)
    {
        this->age += p.age;
    }

    Person& PersonAddPerson2(Person p)  //这里要以引用的方式返回对象本身，如果只是返回对象的值，那么就不能连续调用该函数。
    {
        this->age += p.age;
        return *this;   //*this是指该对象本身
    }

    int age;
};


void test()
{
    Person p1(10);
    Person p2(10);
    p2.PersonAddPerson(p1);
    cout << "p2.age = " << p2.age << endl;
    p2.PersonAddPerson2(p1).PersonAddPerson2(p1).PersonAddPerson2(p1);
    cout << "p2.age = " << p2.age << endl;
}

int main()
{
    test();

    return 0;
}