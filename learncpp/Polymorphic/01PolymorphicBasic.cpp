#include <iostream>

using namespace std;

/*多态是C++面向对象三大特性之一
多态分为两类
·静态多态：函数重载和运算符函数重载属于静态多态，复用函数名
·动态多态：派生类和虚函数实现运行时多态

静态多态和动态多态区别：
·静态多态的函数地址早绑定-编译阶段确定函数地址
·动态多态的函数地址晚绑定-运行阶段确定函数地址

*/
//动物类
class Animal
{
public:
    //虚函数
    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }
};
//猫类
class Cat : public Animal
{
public:
    void speak()
    {
        cout << "小猫在说话" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "小狗在说话" << endl;
    }
};

//执行说话的函数
//在C++中允许父子之间的类型转换，不需要做强制类型转换，父类的指针可以直接指向子类
//如果想执行让猫说话，那么这个函数地址就不能提前绑定

/*
    动态多态满足条件
    1、有继承关系
    2、子类要重写父类中的虚函数，重写：（函数返回值类型 函数名 参数列表）完全相同
*/
void doSpeak(Animal &animal) //Animal &animal = cat;
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}

int main()
{
    test01();

    return 0;
}