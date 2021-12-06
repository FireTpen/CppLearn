#include <iostream>
#include <string>
using namespace std;
/*
    多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码

    解决方式：将父类中的析构函数改为虚析构或者纯虚析构

    虚析构和纯虚析构共性：
    ·可以解决父类指针释放子类对象
    ·都需要具体的函数实现
    虚析构和纯虚析构区别：
    ·如果是纯虚析构，该类属于抽象类，无法实例化对象

    虚析构语法：
    virtual ~类名(){}

    纯虚析构语法：
    virtual ~类名() = 0;

    总结：
    1.虚析构或纯虚析构就是用来解决通过父类指针释放子类对象
    2.如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
    3.拥有纯虚析构函数的类也属于抽象类

*/

class Animal
{
public:
    Animal()
    {
        cout << "Animal调用构造函数" << endl;
    }

    virtual ~Animal() = 0;
    // ~Animal()
    // {
    //     cout << "Animal析构函数调用" << endl;
    // }
    //纯虚函数
    virtual void speak() = 0;

};

Animal ::~Animal()
{
   cout << "Animal析构函数调用" << endl; 
}

class Cat : public Animal
{
public:
    Cat(string name)
    {
        cout << "Cat构造函数调用" << endl;
        m_Name = new string(name);
    }
    virtual void speak()
    {
        cout << *m_Name << "小猫在说话" << endl;
    }
    ~Cat()
    {
        if (m_Name != NULL)
        {
            cout << "cat析构函数调用" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }

    string *m_Name;
};

void test()
{
    Animal *animal = new Cat("Tom"); 
    animal->speak();
    delete animal;
}   

int main()
{
    test();

    return 0;
}